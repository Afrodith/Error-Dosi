#include "headers/NMDosimetry.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <QMessageBox>
#include <QMimeData>
#include <QInputDialog>
#include <QTimer>
#include <QUrl>
#include <QSettings>
#include <QShortcut>
#include <QDebug>
#include <QFileSystemWatcher>
#include <QFileInfo>


// VV include

#include "VV/vv/vvProgressDialog.h"
#include "VV/vv/vvQDicomSeriesSelector.h"
#include "VV/vv/vvSlicerManager.h"
#include "VV/common/clitkImageCommon.h"
#include "VV/vv/vvSlicer.h"
#include "VV/vv/vvInteractorStyleNavigator.h"
#include "VV/common/vvImageWriter.h"
#include "VV/vv/vvImageWarp.h"
#include "VV/vv/vvMidPosition.h"
#include "VV/vv/vvMesh.h"
#include "VV/vv/vvMeshReader.h"
#include "VV/common/clitkConfiguration.h"
#include "VV/common/clitkMatrix.h"


// ITK include
#include <itkImage.h>
#include <itkImageFileReader.h>
#include <itkByteSwapper.h>
#include <itkCommand.h>
#include <itkNumericSeriesFileNames.h>

// VTK include
#include <vtkImageMapper3D.h>
#include <vtkInformation.h>
#include <vtkVersion.h>
#include <vtkImageData.h>
#include <vtkImageActor.h>
#include <vtkCornerAnnotation.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRendererCollection.h>
#include <vtkWindowToImageFilter.h>
#include <vtkBMPWriter.h>
#include <vtkTIFFWriter.h>
#include <vtkPNMWriter.h>
#include <vtkPNGWriter.h>
#include <vtkJPEGWriter.h>
#include <vtkGenericMovieWriter.h>
#include "VV/vv/vvAnimatedGIFWriter.h"
#ifdef VTK_USE_VIDEO_FOR_WINDOWS
#  include <vtkAVIWriter.h>
#endif
#ifdef VTK_USE_FFMPEG_ENCODER
#  include <vtkFFMPEGWriter.h>
#endif
#ifdef VTK_USE_MPEG2_ENCODER
#  include <vtkMPEG2Writer.h>
#endif
#include <vtkMatrix4x4.h>
#include <vtkTransform.h>

// Standard includes
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

#define COLUMN_TREE 0
#define COLUMN_UL_VIEW 1
#define COLUMN_UR_VIEW 2
#define COLUMN_DL_VIEW 3
#define COLUMN_DR_VIEW 4
#define COLUMN_CLOSE_IMAGE 5
#define COLUMN_RELOAD_IMAGE 6
#define COLUMN_IMAGE_NAME 7

#ifdef CLITK_PRIVATE_FEATURES
#define EXTENSIONS "Images ( *.bmp *.dcm *.png *.jpeg *.jpg *.tif *.mhd *.mha *.hdr *.vox *.his *.xdr *.SCAN *.nii *.nrrd *.nhdr *.refscan *.nii.gz *.usf *.svl)"
#else
#define EXTENSIONS "Images ( *.bmp *.dcm *.png *.jpeg *.jpg *.tif *.mhd *.mha *.hdr *.vox *.his *.xdr *.SCAN *.nii *.nrrd *.nhdr *.refscan *.nii.gz)"
#endif



class WordDelimiter : public std::string
{};

std::istream& operator>>(std::istream& is, WordDelimiter& output);


NMDosimetry::NMDosimetry(QMainWindow *parent)
{
    setupUi(this);
    this->setWindowTitle("Nunclear Medicine Dosimetry");

    setAcceptDrops(true); // enable to drop into the windowA



    pb_info->installEventFilter(this);

    phantom_match = nullptr;
    infoPanel = nullptr;

    dicomSeriesSelector = new vvDicomSeriesSelector(this);

    proc = new QProcess(this);

    compute = new vvProgressDialog("test",false);
    compute->hide();
    infoPanel = new vvInfoPanel();


    currentDir=QDir::currentPath();

    //Qt::WindowFlags flags = windowFlags();
    //setWindowFlags(flags | Qt::WindowStaysOnTopHint);

    mInputPathName = "";
    mCurrentTime = -1;







    mSlicerManagers.resize(0);




    viewMode = 1;

    dial->hide();









    //init the sliders
    verticalSliders.push_back(NOVerticalSlider);
    verticalSliders.push_back(NEVerticalSlider);
    verticalSliders.push_back(SOVerticalSlider);
    verticalSliders.push_back(SEVerticalSlider);

//    for (int i =0; i < 4; i++)
//      verticalSliders[i]->hide();

    horizontalSliders.push_back(NOHorizontalSlider);
    horizontalSliders.push_back(NEHorizontalSlider);
    horizontalSliders.push_back(SOHorizontalSlider);
    horizontalSliders.push_back(SEHorizontalSlider);

//    for (int i =0; i < 4; i++)
//      horizontalSliders[i]->hide();


    connect(NOVerticalSlider,SIGNAL(valueChanged(int)),this,SLOT(NOVerticalSliderChanged()));
    connect(NEVerticalSlider,SIGNAL(valueChanged(int)),this,SLOT(NEVerticalSliderChanged()));
    connect(SOVerticalSlider,SIGNAL(valueChanged(int)),this,SLOT(SOVerticalSliderChanged()));
    connect(SEVerticalSlider,SIGNAL(valueChanged(int)),this,SLOT(SEVerticalSliderChanged()));

    connect(NOHorizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(NOHorizontalSliderMoved()));
    connect(NEHorizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(NEHorizontalSliderMoved()));
    connect(SOHorizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(SOHorizontalSliderMoved()));
    connect(SEHorizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(SEHorizontalSliderMoved()));

    //connect everything



    ///////////////////////////////////////////////





    connect(viewButton,SIGNAL(clicked()),this, SLOT(ChangeViewMode()));
    connect(colorMapComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(UpdateColorMap()));





//    NOViewWidget->hide();
//    NEViewWidget->hide();
//    SOViewWidget->hide();
//    SEViewWidget->hide();

  #ifdef Q_OS_OSX
    disableGLHiDPI(NOViewWidget->winId());
    disableGLHiDPI(NEViewWidget->winId());
    disableGLHiDPI(SOViewWidget->winId());
    disableGLHiDPI(SEViewWidget->winId());
  #endif


}

NMDosimetry::~NMDosimetry()
{
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {
      if (mSlicerManagers[i] != NULL)
        delete mSlicerManagers[i];
    }

    delete dicomSeriesSelector;
}





bool NMDosimetry::eventFilter(QObject *obj,QEvent *event)
{

       if (obj == pb_info && !mSlicerManagers.empty()) {
           if (event->type() == QEvent::HoverEnter)
           {

               infoPanel->resize(500,600);

               infoPanel->show();
               return true;
           }

           if (event->type() == QEvent::HoverLeave)
           {
               if(infoPanel->isVisible())
                {

                     infoPanel->close();
                }
               return true;
           }


       }
       else return false;






}


void NMDosimetry::on_cB_radiopharma_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
    {
        if(LE_filename->text().isEmpty())
        {
            LE_filename->setText("I131_INa1");

        }
        else {
            LE_filename->clear();
            LE_filename->setText("I131_INa1");

        }
        activityCurves = currentDir;
        activityCurves.append("/data/NM-Dosimetry/I131_INa1/time_activity_curves_I131_INa1.txt");
        sadr = currentDir;
        sadr.append("/data/NM-Dosimetry/I131_INa1/");

    }break;

    case 1:
    {
        if(LE_filename->text().isEmpty())
        {
            LE_filename->setText("I131_INa2");

        }
        else {
            LE_filename->clear();
            LE_filename->setText("I131_INa2");

        }
        activityCurves = currentDir;
        activityCurves.append("/data/NM-Dosimetry/I131_INa2/time_activity_curves_I131_INa2.txt");
        sadr = currentDir;
        sadr.append("/data/NM-Dosimetry/I131_INa2/");

    }break;

    case 2:
    {
        if(LE_filename->text().isEmpty())
        {
            LE_filename->setText("Sm153_EDTMP");

        }
        else {
            LE_filename->clear();
            LE_filename->setText("Sm153_EDTMP");

        }
        activityCurves = currentDir;
        activityCurves.append("/data/NM-Dosimetry/Sm153_EDTMP/time_activity_curves_Sm153_EDTMP.txt");
        sadr = currentDir;
        sadr.append("/data/NM-Dosimetry/Sm153_EDTMP/");


    }break;

    case 3:
    {
        if(LE_filename->text().isEmpty())
        {
            LE_filename->setText("I131_MIBG");

        }
        else {
            LE_filename->clear();
            LE_filename->setText("I131_MIBG");

        }
        activityCurves = currentDir;
        activityCurves.append("/data/NM-Dosimetry/I131_MIBG/time_activity_curves_I131_MIBG.txt");
        sadr = currentDir;
        sadr.append("/data/NM-Dosimetry/I131_MIBG/");

    }break;

    case 4:
    {
        if(LE_filename->text().isEmpty())
        {
            LE_filename->setText("I123_MIBG");

        }
        else {
            LE_filename->clear();
            LE_filename->setText("I123_MIBG");

        }
        activityCurves = currentDir;
        activityCurves.append("/data/NM-Dosimetry/I123_MIBG/time_activity_curves_I123_MIBG.txt");
        sadr = currentDir;
        sadr.append("/data/NM-Dosimetry/I123_MIBG/");


    }break;
    case 5:
    {
        if(LE_filename->text().isEmpty())
        {
            LE_filename->setText("Tc99m_MDP");

        }
        else {
            LE_filename->clear();
            LE_filename->setText("Tc99m_MDP");

        }
        activityCurves = currentDir;
        activityCurves.append("/data/NM-Dosimetry/Tc99m_MDP/time_activity_curves_Tc99m_MDP.txt");
        sadr = currentDir;
        sadr.append("/data/NM-Dosimetry/Tc99m_MDP/");



    }break;
    }


}






//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void NMDosimetry::UpdateMemoryUsage()
{
  //  clitk::PrintMemory(true);
    if(infoPanel!=nullptr)
    {
     if (clitk::GetMemoryUsageInMb() == 0) infoPanel->setMemoryInMb("NA");
     else infoPanel->setMemoryInMb(QString::number(clitk::GetMemoryUsageInMb())+" MB");
    }
}


//------------------------------------------------------------------------------
void NMDosimetry::OpenDicom()
{
  std::vector<std::string> files;

  //std::cout << "dicomSeriesSelector " << std::endl;
  if (dicomSeriesSelector->exec() == QDialog::Accepted) {
    files = *(dicomSeriesSelector->GetFilenames());
    LoadImages(files[0], vvImageReader::DICOM);
  }
}

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void NMDosimetry::OpenImages()
{
  QString Extensions = EXTENSIONS;
  Extensions += ";;All Files (*)";

  QStringList files = QFileDialog::getOpenFileNames(this,tr("Load Images"),mInputPathName,Extensions);
  if (files.isEmpty())
    return;
  mInputPathName = itksys::SystemTools::GetFilenamePath(files[0].toStdString()).c_str();
  std::vector<std::string> vector;
  for (int i = 0; i < files.size(); i++)
    vector.push_back(files[i].toStdString());
  LoadImages(files[0].toStdString(), vvImageReader::IMAGE);
}
//------------------------------------------------------------------------------

void NMDosimetry::dragEnterEvent(QDragEnterEvent *event)
{
  if (event->mimeData()->hasUrls()) {
    event->acceptProposedAction();
  }
}
//------------------------------------------------------------------------------
void NMDosimetry::dropEvent(QDropEvent *event)
{
  const QMimeData * mimeData = event->mimeData();
  if (!mimeData->hasUrls())
    return;
  std::vector<std::string> images;
  for (int i=0; i<mimeData->urls().size(); ++i) {
    images.push_back(mimeData->urls()[i].toLocalFile().toStdString());
  }
  LoadImages(images[0], vvImageReader::IMAGE);
}
//------------------------------------------------------------------------------





//------------------------------------------------------------------------------
void NMDosimetry::LoadImages(std::string files, vvImageReader::LoadedImageType filetype)
{
  //Separate the way to open images and dicoms

//    if(mSlicerManagers.size()>0)
//    {

//        CloseImage();


//    }

//  int fileSize;
//  if (filetype == vvImageReader::IMAGE || filetype == vvImageReader::IMAGEWITHTIME)
//    fileSize = files.size();
//  else
//    fileSize = 1;

  // For SLICED, we need the number of slices (ndim and #slices)
  unsigned int nSlices;
//  nSlices.resize(files.size());
//  std::fill(nSlices.begin(), nSlices.end(), 1);
  if (filetype == vvImageReader::SLICED) {
   // for (int i = 0; i < fileSize; i++) {
      itk::ImageIOBase::Pointer header = clitk::readImageHeader(files);
      this->setCursor(Qt::WaitCursor);
      if (!header) {
        nSlices = 0;
        QString error = "Cannot open file \n";

        QMessageBox::information(this,tr("Reading problem"),error);
        return;
      }
      if (header->GetNumberOfDimensions() < 3) {
        nSlices = 0;
        QString error = "Dimension problem. Cannot slice \n";
        QMessageBox::information(this,tr("Reading problem"),error);
        return;
      }
      nSlices = header->GetDimensions( header->GetNumberOfDimensions()-1 );
  //  }
  }

  //init the progress events
  this->setCursor(Qt::WaitCursor);
  vvProgressDialog progress("Opening " + files);
  qApp->processEvents();

  int numberofsuccesulreads=0;
  //open images as 1 or multiples
  //for (int i = 0; i < fileSize; i++) {
    progress.SetText("Opening " + files);
    //progress.SetProgress(i,1);
    qApp->processEvents();

   // for (unsigned int j = 0; j < nSlices[i]; j++) {
      //read the image and put it in mSlicerManagerss
      vvSlicerManager *imageManager = new vvSlicerManager(4);
      qApp->processEvents();

      bool SetImageSucceed=false;

      // Change filename if an image with the same already exist
      int number = GetImageDuplicateFilenameNumber(files + std::string("_slice"));

      if (filetype == vvImageReader::IMAGE || filetype == vvImageReader::IMAGEWITHTIME || filetype == vvImageReader::SLICED)
        SetImageSucceed = imageManager->SetImage(files,filetype, 0);
      else if (filetype == vvImageReader::DICOM)
        SetImageSucceed = imageManager->SetImage(files,filetype, 0, dicomSeriesSelector->IsPatientCoordianteSystemChecked());
      else
        SetImageSucceed = imageManager->SetImage(files,filetype, 0);

      if (!SetImageSucceed) {
        this->setCursor(Qt::ArrowCursor);
        QString error = "Cannot open file \n";
        error += imageManager->GetLastError().c_str();
        QMessageBox::information(this,tr("Reading problem"),error);
        delete imageManager;
      } else {

          mSlicerManagers.push_back(imageManager);

          injectDosesInImage();


          QFileInfo fileinfo(imageManager->GetFileName().c_str()); //Do not show the path

          qApp->processEvents();

          qApp->processEvents();




        //set the id of the image

          //set the id of the image
          QString id = QString::number(mSlicerManagers.size()-1);

          mSlicerManagers.back()->SetId(id.toStdString());




        connect(mSlicerManagers.back(), SIGNAL(UpdatePosition(int, double, double, double, double, double, double, double)),
          this,SLOT(MousePositionChanged(int,double, double, double, double, double, double, double)));
        connect(mSlicerManagers.back(), SIGNAL(UpdateSlice(int,int)),
          this,SLOT(UpdateSlice(int,int)));
        connect(mSlicerManagers.back(), SIGNAL(UpdateTSlice(int, int, int)),
          this,SLOT(UpdateTSlice(int, int, int)));
        connect(mSlicerManagers.back(), SIGNAL(UpdateTSlice(int, int, int)),
          this,SLOT(ImageInfoChanged()));
        connect(mSlicerManagers.back(), SIGNAL(UpdateSliceRange(int,int,int,int,int)),
          this,SLOT(UpdateSliceRange(int,int,int,int,int)));
        connect(mSlicerManagers.back(), SIGNAL(UpdateLinkManager(std::string,int,double,double,double,int)),
          this,SLOT(UpdateLinkManager(std::string,int,double,double,double,int)));
        connect(mSlicerManagers.back(), SIGNAL(UpdateLinkedNavigation(std::string,vvSlicerManager*,vvSlicer*)),
          this,SLOT(UpdateLinkedNavigation(std::string,vvSlicerManager*,vvSlicer*)));
        connect(mSlicerManagers.back(), SIGNAL(ChangeImageWithIndexOffset(vvSlicerManager*,int,int)),
          this,SLOT(ChangeImageWithIndexOffset(vvSlicerManager*,int,int)));

        InitSlicers();
        numberofsuccesulreads++;
      }
   // }
  //}

  if (numberofsuccesulreads) {
    NOViewWidget->show();
    NEViewWidget->show();
    SOViewWidget->show();
    SEViewWidget->show();

    InitDisplay();
    qApp->processEvents();

    ShowLastImage();
    qApp->processEvents();


    ///ShowLastImage();




  }
  this->setCursor(Qt::ArrowCursor);
}
//------------------------------------------------------------------------------

void NMDosimetry::DisplayChanged(int index)
{

  int slicerManagerIndex = index;

  vvSlicer* clickedSlicer = mSlicerManagers.back()->GetSlicer(index);

  // Go over the complete item tree (only 2 levels, parents and children)
  for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {
    // Trick to avoid redoing twice the job for a key (sr)
    mSlicerManagers[i]->GetSlicer(index)->GetRenderWindow()->GetInteractor()->SetKeySym("Crap");


      // Branch of the clicked one: get check status from actor visibility in slicer
      // and toggle the clicked one

      // Parent
      bool vis = clickedSlicer->GetActorVisibility("image", 0);
      bool draw = clickedSlicer->GetRenderer()->GetDraw();

      // Update slicer (after getting visibility)
      mSlicerManagers[i]->UpdateSlicer(index, true);
      mSlicerManagers[i]->UpdateInfoOnCursorPosition(index);
      DisplaySliders(slicerManagerIndex, index);

      clickedSlicer->SetActorVisibility("image", 0, vis);



  }

  clickedSlicer->Render();
}

//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
void NMDosimetry::ImageInfoChanged()
{

    if (mSlicerManagers.size()) {
      std::string str = mSlicerManagers.back()->GetId();

      QString ptr;
      ptr = ptr.fromStdString(str);

      int index = ptr.toInt();
      colorMapComboBox->setEnabled(1);


      std::vector<double> origin;
      std::vector<double> inputSpacing;
      std::vector<int> inputSize;
      std::vector<double> sizeMM;
      vtkSmartPointer<vtkMatrix4x4> transformation;
      int dimension=0;
      QString pixelType;
      QString inputSizeInBytes;
      std::string strou = mSlicerManagers.back()->GetFileName();
      QString image = QString::fromUtf8(strou.data());




      //read image header
      int NPixel = 1;

      int tSlice = 0;
      vvImage::Pointer imageSelected;
      imageSelected = mSlicerManagers[index]->GetSlicer(0)->GetImage();
      tSlice = mSlicerManagers[index]->GetSlicer(0)->GetTSlice();


      dimension = imageSelected->GetNumberOfDimensions();
      origin.resize(dimension);
      inputSpacing.resize(dimension);
      inputSize.resize(dimension);
      sizeMM.resize(dimension);
      pixelType = mSlicerManagers[index]->GetImage()->GetScalarTypeAsITKString().c_str();
      for (int i = 0; i < dimension; i++) {
        origin[i] = imageSelected->GetOrigin()[i];
        inputSpacing[i] = imageSelected->GetSpacing()[i];
        inputSize[i] = imageSelected->GetSize()[i];
        sizeMM[i] = inputSize[i]*inputSpacing[i];
        NPixel *= inputSize[i];
      }
      inputSizeInBytes = GetSizeInBytes(imageSelected->GetActualMemorySize());

      QString dim = QString::number(dimension) + " (";
      dim += pixelType + ")";
    if(infoPanel!=nullptr)
    {
      infoPanel->setFileName(image);
      std::string creationImageTimeValue("No creation time");
      itk::ExposeMetaData< std::string > (*imageSelected->GetFirstMetaDataDictionary(), "creationImageTime", creationImageTimeValue);
      infoPanel->setImageCreationTime(QString(creationImageTimeValue.c_str()));
      infoPanel->setDimension(dim);
      infoPanel->setSizePixel(GetVectorIntAsString(inputSize));
      infoPanel->setSizeMM(GetVectorDoubleAsString(sizeMM));
      infoPanel->setOrigin(GetVectorDoubleAsString(origin));
      infoPanel->setSpacing(GetVectorDoubleAsString(inputSpacing));
      infoPanel->setNPixel(QString::number(NPixel)+" ("+inputSizeInBytes+")");

      transformation = imageSelected->GetTransform()[tSlice]->GetMatrix();
      infoPanel->setTransformation(clitk::Get4x4MatrixDoubleAsString(transformation).c_str());
    }


      for (int i = 0; i < 4; i++) {
        if (mSlicerManagers.size() > 0 || i == 3) {
          mSlicerManagers[index]->UpdateInfoOnCursorPosition(i);
          break;
        }
      }





  }
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------


void NMDosimetry::ChangeViewMode()
{
  typedef struct _SIZE{
    QSplitter* splitter;
    QList<int> size1, size2;
    int cols[3];
  }SplitterSize;
  SplitterSize sizes[4];
  sizes[0].splitter = OSplitter;
  sizes[0].size1.push_back(1);
  sizes[0].size1.push_back(0);
  sizes[0].size2.push_back(1);
  sizes[0].size2.push_back(0);
  sizes[0].cols[0] = 2;
  sizes[0].cols[1] = 3;
  sizes[0].cols[2] = 4;

  sizes[1].splitter = ESplitter;
  sizes[1].size1.push_back(0);
  sizes[1].size1.push_back(1);
  sizes[1].size2.push_back(1);
  sizes[1].size2.push_back(0);
  sizes[1].cols[0] = 1;
  sizes[1].cols[1] = 3;
  sizes[1].cols[2] = 4;

  sizes[2].splitter = OSplitter;
  sizes[2].size1.push_back(1);
  sizes[2].size1.push_back(0);
  sizes[2].size2.push_back(0);
  sizes[2].size2.push_back(1);
  sizes[2].cols[0] = 1;
  sizes[2].cols[1] = 2;
  sizes[2].cols[2] = 4;

  sizes[3].splitter = ESplitter;
  sizes[3].size1.push_back(0);
  sizes[3].size1.push_back(1);
  sizes[3].size2.push_back(0);
  sizes[3].size2.push_back(1);
  sizes[3].cols[0] = 1;
  sizes[3].cols[1] = 2;
  sizes[3].cols[2] = 3;

  int slicer = mSlicerManagers.back()->GetSelectedSlicer();
  if (viewMode == 1) {
    if (slicer >= 0) {
      viewMode = 0;
      //splitter_3->setSizes(sizes[slicer].size1);
      sizes[slicer].splitter->setSizes(sizes[slicer].size2);

    }
  } else {
    QList<int> size;
    if (slicer >= 0) {
      viewMode = 1;
      size.push_back(1);
      size.push_back(1);
     // splitter_3->setSizes(size);
      sizes[slicer].splitter->setSizes(size);

    }
  }

  /*
  ** I don't know why but for both resized QVTKWidget we also need to render
  ** the associated Slicer to redraw crosses.
  */
  for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {
    //
    mSlicerManagers[i]->GetSlicer(0)->Render();
    mSlicerManagers[i]->GetSlicer(1)->Render();

    mSlicerManagers[i]->GetSlicer(2)->Render();
    mSlicerManagers[i]->GetSlicer(3)->Render();
  }
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
QString NMDosimetry::GetSizeInBytes(unsigned long size)
{
  QString result = "";// QString::number(size);
  //result += " bytes (";
  if (size > 1000000000) {
    size /= 1000000000;
    result += QString::number(size);
    result += "GB";//)";
  } else if (size > 1000000) {
    size /= 1000000;
    result += QString::number(size);
    result += "MB";//)";
  } else if (size > 1000) {
    size /= 1000;
    result += QString::number(size);
    result += "kB";//)";
  }
  return result;
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
QString NMDosimetry::GetVectorDoubleAsString(std::vector<double> vectorDouble)
{
  QString result;
  for (unsigned int i= 0; i < vectorDouble.size(); i++) {
    if (i != 0)
      result += " ";
    result += QString::number(vectorDouble[i]);
  }
  return result;
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
QString NMDosimetry::GetVectorIntAsString(std::vector<int> vectorInt)
{
  QString result;
  for (unsigned int i= 0; i < vectorInt.size(); i++) {
    if (i != 0)
      result += " ";
    result += QString::number(vectorInt[i]);
  }
  return result;
}


void NMDosimetry::InitSlicers()
{
    if (mSlicerManagers.size()>0) {
      mSlicerManagers.back()->GenerateDefaultLookupTable();
      mSlicerManagers.back()->SetSlicerWindow(0,NOViewWidget->GetRenderWindow());
      mSlicerManagers.back()->SetSlicerWindow(1,NEViewWidget->GetRenderWindow());
      mSlicerManagers.back()->SetSlicerWindow(2,SOViewWidget->GetRenderWindow());
      mSlicerManagers.back()->SetSlicerWindow(3,SEViewWidget->GetRenderWindow());
  #if VTK_MAJOR_VERSION <= 5
      mSlicerManagers.back()->Render(); // SR: displayed #slice is wrong without this / TB: With VTK6 and multiple images, all slicers are updated, not only the first
  #endif
    }
}

//------------------------------------------------------------------------------
void NMDosimetry::InitDisplay()
{
    if (mSlicerManagers.size()>0) {
      //BE CAREFUL : this is absolutely necessary to set the interactor style
      //in order to have the same style instanciation for all SlicerManagers in
      // a same window
      for (int j = 0; j < 4; j++) {
        vvInteractorStyleNavigator* style = vvInteractorStyleNavigator::New();
        style->SetAutoAdjustCameraClippingRange(1);
        bool AlreadySelected = false;
        for (int i = 0; i < mSlicerManagers.size(); i++) {
          mSlicerManagers[i]->SetInteractorStyleNavigator(j,style);

            mSlicerManagers[i]->UpdateSlicer(j,1);
            DisplaySliders(i,j);


        style->Delete();
      }
    }
  }
}

//------------------------------------------------------------------------------
void NMDosimetry::DisplaySliders(int slicer, int window)
{
    if(!mSlicerManagers[slicer]->GetSlicer(window)->GetRenderer()->GetDraw())
      return;

    int range[2];
    mSlicerManagers[slicer]->GetSlicer(window)->GetSliceRange(range);
    int position = mSlicerManagers[slicer]->GetSlicer(window)->GetSlice();
    if (range[1]>0)
      verticalSliders[window]->show();
    else
      verticalSliders[window]->hide();
    verticalSliders[window]->setRange(range[0],range[1]);
    verticalSliders[window]->setValue(position);

    int tRange[2];
    tRange[0] = 0;
    tRange[1] = mSlicerManagers[slicer]->GetSlicer(window)->GetTMax();
    if (tRange[1]>0)
      horizontalSliders[window]->show();
    else
      horizontalSliders[window]->hide();
    horizontalSliders[window]->setRange(tRange[0],tRange[1]);
    int tPosition = mSlicerManagers[slicer]->GetSlicer(window)->GetMaxCurrentTSlice();
    horizontalSliders[window]->setValue(tPosition);
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void NMDosimetry::CloseImage()
{


    std::string str = mSlicerManagers.back()->GetId();

    QString ptr;
    ptr = ptr.fromStdString(str);

    int index = ptr.toInt();



      mSlicerManagers[index]->SetColorMap(0);

      mSlicerManagers[index]->Render();



      // Tell tools that we close an image
      emit AnImageIsBeingClosed(mSlicerManagers[index]);

      std::vector<vvSlicerManager*>::iterator Manageriter = mSlicerManagers.begin();

      for (int i = 0; i < index; i++) {
        Manageriter++;
      }




      mSlicerManagers[index]->RemoveActors();

      //remove the slicer manager
      delete mSlicerManagers[index];
      mSlicerManagers.erase(Manageriter);

      //
      InitDisplay();


  ImageInfoChanged();
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void NMDosimetry::MousePositionChanged(int visibility,double x, double y, double z, double X, double Y, double Z , double value)
{
    if(infoPanel!=nullptr)
      infoPanel->setCurrentInfo(visibility,x,y,z,X,Y,Z,value);
}
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void NMDosimetry::UpdateColorMap()
{

    int index = mSlicerManagers.size()-1;
    mSlicerManagers[index]->SetColorMap(colorMapComboBox->currentIndex());
    mSlicerManagers[index]->Render();

}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------


void NMDosimetry::UpdateLinkManager(std::string id, int slicer, double x, double y, double z, int temps)
{
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {
      if (mSlicerManagers[i]->GetId() == id) {
        mSlicerManagers[i]->GetSlicer(slicer)->SetCurrentPosition(x,y,z,temps);
        mSlicerManagers[i]->UpdateViews(0,slicer);
        break;
      }
    }

}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void NMDosimetry::UpdateLinkedNavigation(std::string id, vvSlicerManager * sm, vvSlicer* refSlicer)
{
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {
      if (id == mSlicerManagers[i]->GetId()) {
        mSlicerManagers[i]->UpdateLinkedNavigation(refSlicer);
      }
    }
}
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
void NMDosimetry::SaveAs()
{



    int index = mSlicerManagers.size()-1;
    int dimension = mSlicerManagers[index]->GetDimension();
  QStringList OutputListeFormat;
  OutputListeFormat.clear();
  if (dimension == 1) {
    OutputListeFormat.push_back(".mhd");
    OutputListeFormat.push_back(".mha");
  }
  if (dimension == 2) {
    OutputListeFormat.push_back(".bmp");
    OutputListeFormat.push_back(".png");
    OutputListeFormat.push_back(".jpeg");
    OutputListeFormat.push_back(".tif");
    OutputListeFormat.push_back(".mhd");
    OutputListeFormat.push_back(".mha");
    OutputListeFormat.push_back(".hdr");
    OutputListeFormat.push_back(".vox");
  } else if (dimension == 3) {
    OutputListeFormat.push_back(".mhd");
    OutputListeFormat.push_back(".mha");
    OutputListeFormat.push_back(".nii");
    OutputListeFormat.push_back(".nrrd");
    OutputListeFormat.push_back(".nhdr");
    OutputListeFormat.push_back(".hdr");
    OutputListeFormat.push_back(".vox");
  } else if (dimension == 4) {
    OutputListeFormat.push_back(".mhd");
    OutputListeFormat.push_back(".mha");
    OutputListeFormat.push_back(".nii");
    OutputListeFormat.push_back(".nrrd");
    OutputListeFormat.push_back(".nhdr");
  }
  QString Extensions = "AllFiles(*.*)";
  for (int i = 0; i < OutputListeFormat.count(); i++) {
    Extensions += ";;Images ( *";
    Extensions += OutputListeFormat[i];
    Extensions += ")";
  }
  QString fileName = QFileDialog::getSaveFileName(this,
    tr("Save As"),
     mSlicerManagers[index]->GetFileName().c_str(),
     Extensions);
  if (!fileName.isEmpty()) {
    std::string fileformat = itksys::SystemTools::GetFilenameLastExtension(fileName.toStdString());
    if (OutputListeFormat.contains(
      fileformat.c_str())) {
        this->setCursor(Qt::WaitCursor);
        std::string action = "Saving";
        vvProgressDialog progress("Saving "+fileName.toStdString());
        qApp->processEvents();
        vvImageWriter::Pointer writer = vvImageWriter::New();
        writer->SetOutputFileName(fileName.toStdString());
        writer->SetInput(mSlicerManagers[index]->GetImage());

        // Check on transform and prompt user
        writer->SetSaveTransform(false);
        bool bId = true;
        for(int i=0; i<4; i++)
          for(int j=0; j<4; j++) {
            // TODO SR and BP: check on the list of transforms and not the first only
             double elt = mSlicerManagers[index]->GetImage()->GetTransform()[0]->GetMatrix()->GetElement(i,j);
            if(i==j && elt!=1.)
              bId = false;
            if(i!=j && elt!=0.)
              bId = false;
          }
          if( !bId ) {
            QString warning = "The image has an associated linear transform. Do you want to save it along?";
            QMessageBox msgBox(QMessageBox::Warning, tr("Save transform"), warning, 0, this);
            msgBox.addButton(tr("Yes"), QMessageBox::AcceptRole);
            msgBox.addButton(tr("No"), QMessageBox::RejectRole);
            if (msgBox.exec() == QMessageBox::AcceptRole)
              writer->SetSaveTransform(true);
          }

          writer->Update();
          this->setCursor(Qt::ArrowCursor);
          if (writer->GetLastError().size()) {
            QString error = "Saving did not succeed\n";
            error += writer->GetLastError().c_str();
            QMessageBox::information(this,tr("Saving Problem"),error);
            SaveAs();
          }
    } else {
      QString error = fileformat.c_str();
      if (error.isEmpty())
        error += "no file format specified !";
      else
        error += " format unknown !!!\n";
      QMessageBox::information(this,tr("Saving Problem"),error);
      SaveAs();
    }
  }
}

//------------------------------------------------------------------------------
void NMDosimetry::ChangeImageWithIndexOffset(vvSlicerManager *sm, int slicer, int offset)
{
    if(mSlicerManagers.size()==1)
      return;

    int index = 0;
    while(sm != mSlicerManagers[index])
      index++;
    index = (index+offset+mSlicerManagers.size()) % mSlicerManagers.size();


}
//------------------------------------------------------------------------------
void NMDosimetry::HorizontalSliderMoved(int value,int column, int slicer_index)
{
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {

        //i is the SlicerManager that is in charge of this slicer.
        if (mSlicerManagers[i]->IsInvolvedInFusionSequence()) {
          //if the slicerManager is involved in a fusionSequence as the secondary sequence, then update the slider position in the overlay panel and everything accordingly
          if (mSlicerManagers[i]->IsSecondarySequenceOfFusionSequence()) {

          }
          else { //if this is the primary sequence that has been modified
            if (mSlicerManagers[i]->GetFusionSequenceTemporalSyncFlag()) {
              //WARNING: for some obscure reason, there are problems when accessing mSlicerManagers[mSlicerManagers[i]->GetFusionSequenceIndexOfLinkedManager()]->GetFusionSequenceFrameIndex();

              int estimatedValue=0;
              //estimate a corresponding time index for the secondary (US) sequence, and update it accordingly.
              estimatedValue = mSlicerManagers[i]->GetFusionSequenceCorrespondances()[ value ];
              //TODO: at the moment, there is a loop in TSlice modifications
              //modifying sequence 1 causes seq 2 to update, which in turns update seq1...
              //I disable control on seq1 at the moment.
              //overlayPanel->updateFusionSequenceSliderValueFromWindow(estimatedValue, true);
            }
          }
        }

        for (int j = 0; j < 4; j++) {
          mSlicerManagers[i]->SetTSliceInSlicer(value,j);
        }
        mSlicerManagers[i]->GetSlicer(slicer_index)->Render();
        break;

    }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::NOHorizontalSliderMoved()
{
  // if (mCurrentTime == NOHorizontalSlider->value()) return;
  HorizontalSliderMoved(NOHorizontalSlider->value(),COLUMN_UL_VIEW,0);
  //  mCurrentTime = NOHorizontalSlider->value();
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::NEHorizontalSliderMoved()
{
  // if (mCurrentTime == NEHorizontalSlider->value()) return;
  HorizontalSliderMoved(NEHorizontalSlider->value(),COLUMN_UR_VIEW,1);
  //  mCurrentTime = NEHorizontalSlider->value();
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SOHorizontalSliderMoved()
{
  // if (mCurrentTime == SOHorizontalSlider->value()) return;
  HorizontalSliderMoved(SOHorizontalSlider->value(),COLUMN_DL_VIEW,2);
  // mCurrentTime = SOHorizontalSlider->value();
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SEHorizontalSliderMoved()
{
  // if (mCurrentTime == SEHorizontalSlider->value()) return;
  HorizontalSliderMoved(SEHorizontalSlider->value(),COLUMN_DR_VIEW,3);
  // mCurrentTime = SEHorizontalSlider->value();
}
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
void NMDosimetry::NOVerticalSliderChanged()
{
    static int value=-1;
    if (value == NOVerticalSlider->value()) return;
    else value = NOVerticalSlider->value();
    //  int value = NOVerticalSlider->value();
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {

        if (mSlicerManagers[i]->GetSlicer(0)->GetSlice() != value) {
          mSlicerManagers[i]->GetSlicer(0)->SetSlice(value);
          mSlicerManagers[i]->VerticalSliderHasChanged(0, value);

          // If nor Update/Render -> slider not work
          // only render = ok navigation, but for contour Update needed but slower ?

          mSlicerManagers[i]->UpdateSlice(0);  // <-- DS add this. Not too much update ? YES. but needed for ImageContour ...
          //mSlicerManagers[i]->GetSlicer(0)->Render(); // <-- DS add this, needed for contour, seems ok ? not too slow ?
        }
        break;

    }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::NEVerticalSliderChanged()
{
    static int value=-1;
    if (value == NEVerticalSlider->value()) return;
    else value = NEVerticalSlider->value();
    //  int value = NEVerticalSlider->value();
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {

        if (mSlicerManagers[i]->GetSlicer(1)->GetSlice() != value) {
          mSlicerManagers[i]->GetSlicer(1)->SetSlice(value);
          mSlicerManagers[i]->VerticalSliderHasChanged(1, value);
          mSlicerManagers[i]->UpdateSlice(1);
          //mSlicerManagers[i]->GetSlicer(1)->Render(); // <-- DS add this, needed for contour, seems ok ? not too slow ?
        }
        break;

    }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SOVerticalSliderChanged()
{
    static int value=-1;
    if (value == SOVerticalSlider->value()) return;
    else value = SOVerticalSlider->value();
    //int value = SOVerticalSlider->value();
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {
        if (mSlicerManagers[i]->GetSlicer(2)->GetSlice() != value) {
          mSlicerManagers[i]->GetSlicer(2)->SetSlice(value);
          mSlicerManagers[i]->VerticalSliderHasChanged(2, value);
          mSlicerManagers[i]->UpdateSlice(2);
          //mSlicerManagers[i]->GetSlicer(2)->Render(); // <-- DS add this, needed for contour, seems ok ? not too slow ?
        }
        // else { DD("avoid SOVerticalSlider slicer update"); }
        break;

    }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SEVerticalSliderChanged()
{
    static int value=-1;
    if (value == SEVerticalSlider->value()) return;
    else value = SEVerticalSlider->value();
    // int value = SEVerticalSlider->value();
    for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {

        if (mSlicerManagers[i]->GetSlicer(3)->GetSlice() != value) {
          mSlicerManagers[i]->GetSlicer(3)->SetSlice(value);
          mSlicerManagers[i]->VerticalSliderHasChanged(3, value);
          mSlicerManagers[i]->UpdateSlice(3);
          //mSlicerManagers[i]->GetSlicer(3)->Render(); // <-- DS add this, needed for contour, seems ok ? not too slow ?
        }
        break;

    }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::UpdateSlice(int slicer, int slice)
{
  // DD("NMDosimetry::UpdateSlice");
  //   DD(slicer);
  //   DD(slice);
  if (slicer == 0) {
    //    if (slice != NOVerticalSlider->value())
    NOVerticalSlider->setValue(slice);
  } else {
    if (slicer == 1)
      NEVerticalSlider->setValue(slice);
    else {
      if (slicer == 2)
        SOVerticalSlider->setValue(slice);
      else {
        if (slicer == 3)
          SEVerticalSlider->setValue(slice);
      }
    }
  }
  // DD("NMDosimetry:UpdateSlice END");
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::UpdateTSlice(int slicer, int slice, int code)
{
  //FusionSequence: the slider value should be updated for slicers which show the same sequence as requested
    //FusionSequence: the slider value should be updated for slicers which show the same sequence as requested
    bool doUpdate=false;
    if (code==-1) doUpdate=true;
    else {
      for (unsigned int i = 0; i < mSlicerManagers.size(); i++) {

          //i is the active SlicerManager
          if (mSlicerManagers[i]->GetFusionSequenceInvolvmentCode()==code) doUpdate=true;
          break;

      }
    }
  if (!doUpdate) return;

  switch (slicer) {
  case 0:
    if (NOHorizontalSlider->value()==slice) return;
    NOHorizontalSlider->setValue(slice);
    break;
  case 1:
    if (NEHorizontalSlider->value()==slice) return;
    NEHorizontalSlider->setValue(slice);
    break;
  case 2:
    if (SOHorizontalSlider->value()==slice) return;
    SOHorizontalSlider->setValue(slice);
    break;
  case 3:
    if (SEHorizontalSlider->value()==slice) return;
    SEHorizontalSlider->setValue(slice);
    break;
  }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::UpdateSliceRange(int slicer, int min, int max, int tmin, int tmax)
{
  //int position = int((min+max)/2);
   int position = mSlicerManagers.back()->GetSlicer(slicer)->GetSlice();
  if (slicer == 0) {
    NOVerticalSlider->setRange(min,max);
    NOHorizontalSlider->setRange(tmin,tmax);
    NOVerticalSlider->setValue(position);
  } else if (slicer == 1) {
    NEVerticalSlider->setRange(min,max);
    NEHorizontalSlider->setRange(tmin,tmax);
    NEVerticalSlider->setValue(position);
  } else if (slicer == 2) {
    SOVerticalSlider->setRange(min,max);
    SOHorizontalSlider->setRange(tmin,tmax);
    SOVerticalSlider->setValue(position);
  } else if (slicer == 3) {
    SEVerticalSlider->setRange(min,max);
    SEHorizontalSlider->setRange(tmin,tmax);
    SEVerticalSlider->setValue(position);
  }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SaveNOScreenshot()
{
  SaveScreenshot(NOViewWidget);
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SaveNEScreenshot()
{
  SaveScreenshot(NEViewWidget);
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SaveSOScreenshot()
{
  SaveScreenshot(SOViewWidget);
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SaveSEScreenshot()
{
  SaveScreenshot(SEViewWidget);
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
void NMDosimetry::SaveScreenshotAllSlices()
{
#if (VTK_MAJOR_VERSION == 8 && VTK_MINOR_VERSION >= 2) || VTK_MAJOR_VERSION >= 9
  QVTKOpenGLNativeWidget *widget = NOViewWidget;
#else
  QVTKWidget *widget = NOViewWidget;
#endif

  int index = 0;
  vvSlicerManager * SM = mSlicerManagers[index];
  vvImage * image = SM->GetImage();
  vvSlicer * slicer = SM->GetSlicer(0);
  int orientation = slicer->GetOrientation();
  int nbSlices = image->GetSize()[orientation];
  vtkSmartPointer<vtkRenderWindow>  renderWindow = widget->GetRenderWindow();

  // Select filename base
  QString filename = QFileDialog::getSaveFileName(this,
    tr("Save As (filename will be completed by slice number)"),
    itksys::SystemTools::GetFilenamePath(mSlicerManagers[index]->GetFileName()).c_str(),
    "Images( *.png);;Images( *.jpg)");

  // Loop on slices
  for(int i=0; i<nbSlices; i++) {
    // Change the slice
    slicer->SetSlice(i); // -> change the slice of the current slicer
    SM->UpdateSlice(0); // --> this one emit UpdateSlice
    QCoreApplication::flush(); // -> needed to force display of contours

    // Screenshot
    vtkSmartPointer<vtkWindowToImageFilter> windowToImageFilter = vtkSmartPointer<vtkWindowToImageFilter>::New();
    windowToImageFilter->SetInput(renderWindow);
#if (VTK_MAJOR_VERSION >= 8 && VTK_MINOR_VERSION >= 2) || VTK_MAJOR_VERSION >= 9
    windowToImageFilter->SetScale(1);
#else
    windowToImageFilter->SetMagnification(1);
#endif
    windowToImageFilter->SetInputBufferTypeToRGBA(); //also record the alpha (transparency) channel
    windowToImageFilter->Update();

    vtkSmartPointer<vtkPNGWriter> writer = vtkSmartPointer<vtkPNGWriter>::New();
    std::string fn = itksys::SystemTools::GetFilenameWithoutLastExtension(filename.toStdString());
    std::string num = clitk::toString(i);
    if (i<10) num = "0"+num;
    if (i<100) num = "0"+num;
    if (i<1000) num = "0"+num;

    fn = itksys::SystemTools::GetFilenamePath(filename.toStdString()) + "/"+ fn
      + "_" + num + itksys::SystemTools::GetFilenameLastExtension(filename.toStdString());
    writer->SetFileName(fn.c_str());
#if VTK_MAJOR_VERSION <= 5
    writer->SetInput(windowToImageFilter->GetOutput());
#else
    writer->SetInputConnection(windowToImageFilter->GetOutputPort());
#endif
    writer->Write();
  }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
#if (VTK_MAJOR_VERSION == 8 && VTK_MINOR_VERSION >= 2) || VTK_MAJOR_VERSION >= 9
void NMDosimetry::SaveScreenshot(QVTKOpenGLNativeWidget *widget)
#else
void NMDosimetry::SaveScreenshot(QVTKWidget *widget)
#endif
{
  QString Extensions = "Images( *.png);;";
  Extensions += "Images( *.jpg);;";
  Extensions += "Images( *.bmp);;";
  Extensions += "Images( *.tif);;";
  Extensions += "Images( *.ppm)";
#if defined(VTK_USE_FFMPEG_ENCODER) || defined(VTK_USE_VIDEO_FOR_WINDOWS)
  Extensions += ";;Video( *.avi)";
#endif
#ifdef VTK_USE_MPEG2_ENCODER
  Extensions += ";;Video( *.mpg)";
#endif
  Extensions += ";;Video( *.gif)";


  int smIndex= mSlicerManagers.size()-1;
  QString fileName = QFileDialog::getSaveFileName(this,
    tr("Save As"),
    itksys::SystemTools::GetFilenamePath(mSlicerManagers[smIndex]->GetFileName()).c_str(),
    Extensions);

  if (!fileName.isEmpty()) {
    vtkSmartPointer<vtkWindowToImageFilter> w2i = vtkSmartPointer<vtkWindowToImageFilter>::New();
    w2i->SetInput(widget->GetRenderWindow());
#if (VTK_MAJOR_VERSION >= 8 && VTK_MINOR_VERSION >= 2) || VTK_MAJOR_VERSION >= 9
    w2i->SetScale(1);
#else
    w2i->SetMagnification(1);
#endif
    w2i->SetInputBufferTypeToRGBA(); //also record the alpha (transparency) channel
    w2i->Update();
    vtkImageData *image = w2i->GetOutput();

    std::string ext(itksys::SystemTools::GetFilenameLastExtension(fileName.toStdString()));

    // Image
    vtkImageWriter *imgwriter = NULL;
    if (ext==".bmp")
      imgwriter = vtkBMPWriter::New();
    else if (ext==".tif")
      imgwriter = vtkTIFFWriter::New();
    else if (ext==".ppm")
      imgwriter = vtkPNMWriter::New();
    else if (ext==".png")
      imgwriter = vtkPNGWriter::New();
    else if (ext==".jpg")
      imgwriter = vtkJPEGWriter::New();

    // Snapshot image if not null
    if(imgwriter!=NULL) {
#if VTK_MAJOR_VERSION <= 5
      imgwriter->SetInput(image);
#else
      imgwriter->SetInputConnection(w2i->GetOutputPort());
#endif
      imgwriter->SetFileName(fileName.toStdString().c_str());
      imgwriter->Write();
      return;
    }

    // Video
    vtkGenericMovieWriter *vidwriter = NULL;
    if (ext==".gif") {
      vvAnimatedGIFWriter *gif = vvAnimatedGIFWriter::New();
      vidwriter = gif;

      // FPS
      bool ok;
      int fps = QInputDialog::getInt(this, tr("Number of frames per second"),
        tr("FPS:"), 5, 0, 1000, 1, &ok);
      if(ok)
        gif->SetRate(fps);

      // Loops
      int loops = QInputDialog::getInt(this, tr("Loops"),
        tr("Number of loops (0 means infinite):"), 0, 0, 1000000000, 1, &ok);
      if(ok)
        gif->SetLoops(loops);

      // Dithering
      QString msg = "Would you like to activate dithering?";
      QMessageBox msgBox(QMessageBox::Question, tr("Dithering"),msg, 0, this);
      msgBox.addButton(tr("Yes"), QMessageBox::AcceptRole);
      msgBox.addButton(tr("No"), QMessageBox::RejectRole);
      gif->SetDither(msgBox.exec() == QMessageBox::AcceptRole);
    }
#ifdef VTK_USE_VIDEO_FOR_WINDOWS
    if (ext==".avi") {
      vtkAVIWriter *mpg = vtkAVIWriter::New();
      vidwriter = mpg;
      mpg->SetQuality(2);
      bool ok;
      int fps = QInputDialog::getInt(this, tr("Number of frames per second"),
        tr("FPS:"), 5, 0, 1024, 1, &ok);
      if(!ok)
        fps = 5;
      mpg->SetRate(fps);
    }
#endif
#ifdef VTK_USE_FFMPEG_ENCODER
    if (ext==".avi") {
      vtkFFMPEGWriter *mpg = vtkFFMPEGWriter::New();
      vidwriter = mpg;
      mpg->SetQuality(2);
      bool ok;
      int fps = QInputDialog::getInt(this, tr("Number of frames per second"),
        tr("FPS:"), 5, 0, 1024, 1, &ok);
      if(!ok)
        fps = 5;
      mpg->SetRate(fps);
      mpg->SetBitRateTolerance(int(ceil(12.0*1024*1024/fps)));
    }
#endif
#ifdef VTK_USE_MPEG2_ENCODER
    if (ext==".mpg") {
      vtkMPEG2Writer *mpg = vtkMPEG2Writer::New();
      vidwriter = mpg;
    }
#endif

    // Take video if not null
    if(vidwriter!=NULL){
#if VTK_MAJOR_VERSION <= 5
      vidwriter->SetInput(image);
#else
      vidwriter->SetInputConnection(w2i->GetOutputPort());
#endif
      vidwriter->SetFileName(fileName.toStdString().c_str());
      vidwriter->Start();
      int nSlice = mSlicerManagers[smIndex]->GetSlicer(0)->GetTMax();
      for(int i=0; i<=nSlice; i++) {
        mSlicerManagers[smIndex]->SetNextTSlice(0);
        vtkSmartPointer<vtkWindowToImageFilter> w2i = vtkSmartPointer<vtkWindowToImageFilter>::New();
        w2i->SetInput(widget->GetRenderWindow());
        w2i->Update();
#if VTK_MAJOR_VERSION <= 5
        vidwriter->SetInput(w2i->GetOutput());
#else
        vidwriter->SetInputConnection(w2i->GetOutputPort());
#endif
        vidwriter->Write();
      }
      vidwriter->End();
      vidwriter->Delete();
      return;
    }

    QMessageBox::information(this,tr("Problem saving screenshot !"),tr("Cannot save image.\nPlease set a file extension !!!"));
  }
}
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------




void NMDosimetry::ShowLastImage()
{
    if (mSlicerManagers.size() > 1) {

      mSlicerManagers.back()->GetSlicer(0)->SetActorVisibility("image", 0, 1); //Set the Last Image visibles
     DisplayChanged(1);
    }
}

//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
int NMDosimetry::GetImageDuplicateFilenameNumber(std::string filename)
{
    int number=0;
    for(unsigned int l=0; l<mSlicerManagers.size(); l++) {
      vvSlicerManager * v = mSlicerManagers[l];
      if (v->GetBaseFileName() ==
        vtksys::SystemTools::GetFilenameName(vtksys::SystemTools::GetFilenameWithoutLastExtension(filename))) {
          number = std::max(number, v->GetBaseFileNameNumber()+1);
      }
    }
    return number;
}

void NMDosimetry::UpdateCurrentSlicer()
{
    int index = -1;
    index = mSlicerManagers.size()-1;
    mSlicerManagerCurrentIndex = index;
}
//------------------------------------------------------------------------------


void NMDosimetry::on_actionCustom_Register_triggered()
{
    Rotate =new vvToolRigidReg(this);
    vvSlicerManager *input;
    input =  mSlicerManagers.back();
    Rotate->InputIsSelected(mSlicerManagers.back());
    Rotate->show();

}

void NMDosimetry::on_pb_submit_clicked()
{
    phantom_matching_algorithm();

}

void NMDosimetry::phantom_matching_algorithm()
{

QString BMI = LE_BMI->text();

QString Age = LE_age->text();


QString gndr = cB_gender->currentText();

QString height = LE_height->text();

QString weight = LE_weight->text();

//QString activity = LE_activity->text();

QString torso_height = LE_height_torso->text();

QString lung = LE_lung->text();

QString Anteroposterior_thick = LE_anteroposterior->text();

QString LAT = LE_LAT->text();

QString effDiam = LE_effectiveDiam->text();

QString curr = QDir::currentPath();
QStringList arg_list;
//gender,age,weight,height_toTorso,lung,anteroposterior,LAT,effective_diameter

arg_list << "#!/bin/bash \n";
arg_list << curr+"/Phantom_Matching/LIBRA_MLI/phantomMatching/application/run_phantomMatching.sh  ";
arg_list << curr+"/Phantom_Matching/MATLAB/MATLAB_Runtime/v901  ";
arg_list << curr+"/data/Final_ERROR_for_software_v1.xlsx  ";
arg_list << gndr<< " ";
arg_list << Age<< " ";
arg_list << weight<< " ";
arg_list << torso_height<< " ";
arg_list << lung<< " ";
arg_list << Anteroposterior_thick << " ";
arg_list << LAT<< " ";
arg_list << effDiam << "  ";
arg_list << curr+"/data/output.txt";



//arg_list << activity<< " ";




std::ofstream pM_file("/home/afrodith/Documents/Error-Dosi/scripts/phantom_matching.sh");
if (!pM_file.is_open()) {
    std::cerr << "Error opening file '" << "/home/afrodith/Documents/Error-Dosi/scripts/phantom_matching"
              << "': " << strerror(errno) << std::endl;

}
else
{
    for(int i=0;i<arg_list.count();i++)
    {
        std::string str = arg_list.at(i).toStdString();

        pM_file << str;

    }

}

pM_file.close();


// pM_algorith = "/home/afrodith/Documents/Error-Dosi/phantom_matching";

QString path =  "sh "+QDir::currentPath();
path.append("/scripts/phantom_matching.sh");

proc->start(path);

connect(proc,SIGNAL(finished(int)),this,SLOT(afterMatching(int)));

pb_submit->setEnabled(false);

if(proc->waitForStarted())
{
    this->setCursor(Qt::WaitCursor);
    compute->SetText("Processing..");
    compute->show();
    qApp->processEvents();
}

//char *system_call = (char *)"/home/afrodith/Documents/Error-Dosi/Phantom_Matching/LIBRA_MLI/phantomMatching/application/run_phantomMatching.sh /home/afrodith/Documents/Error-Dosi/Phantom_Matching/MATLAB/MATLAB_Runtime/v901 /home/afrodith/Documents/Error-Dosi/data/Final_ERROR_for_software_v1.xlsx male 3.7 16.2 28.4 8.7 7.2 9.7 8.357 ./output.csv";
//int i;
//i = system(system_call);




}


std::istream& operator>>(std::istream& is, WordDelimiter& output)
{
   std::getline(is, output, ',');
   return is;
};




QVector<std::string> NMDosimetry:: GetNMPhantomNameFromFile(std::ifstream* p_file)
{
   std::string line;
   QVector<std::string> name_vector;
   uint32_t number_organs = 0, i = 0;

   // Read file and count number of organs
     std::getline(*p_file, line);
     // Find first character
     // Loop over the number of the characters in the line
     for (size_t j = 0; j < line.size(); ++j) {
       if (std::isspace(line[j])) i++;
       else break;
     }

     // Check if the first is a comment

      std::istringstream iss(line);
      std::vector<std::string> copy((std::istream_iterator<WordDelimiter>(iss)),
                                      std::istream_iterator<WordDelimiter>());

          for(int i=0;i<copy.size();i++)
          {
              if(i!=0)
              name_vector.push_back(copy.at(i));
          }


     i = 0; // Reinitialize i


   // move file position indicator to beginning
   p_file->clear();
   p_file->seekg(0);

   return name_vector; // Delete time column
 }


bool NMDosimetry::fileExists(QString path) {
    QFileInfo check_file(path);
    // check if path exists and if yes: Is it really a file and no directory?
    return check_file.exists() && check_file.isFile();
}



void NMDosimetry::afterMatching(int)
{

    compute->close();
    this->setCursor(Qt::ArrowCursor);


    QString curr = QDir::currentPath();
    QString str_ph=curr+"/data/output.txt";

    QByteArray ba= str_ph.toLocal8Bit();
    QVector<std::string> phantom_name;

    std::ifstream p_output_file(ba.data());
    if (!p_output_file.is_open()) {
        std::cerr << "Error opening file '" << ba.data()
                  << "': " << strerror(errno) << std::endl;

    }

    phantom_name = GetNMPhantomNameFromFile(&p_output_file);

    QString whole_path;
    QString constructed_str;
    bool sadr_completed = false;

    for(int i=0;i<phantom_name.count();i++)
    {

       if(phantom_name[i].size()>1)
       {
           constructed_str = "phantom_0"+QString::fromStdString(phantom_name[i])+".txt";
           QString sadr_copy = sadr;
           whole_path = sadr_copy.append(constructed_str);

       }
       else if (phantom_name[i].size()==1)
       {
           constructed_str = "phantom_00"+QString::fromStdString(phantom_name[i])+".txt";
           QString sadr_copy = sadr;
           whole_path = sadr_copy.append(constructed_str);
       }

       if(fileExists(whole_path))
       {
           sadr.append(constructed_str);
           sadr_completed=true;
           QString phantom_loc = QDir::currentPath()+"/data/Phantoms/";
           if(constructed_str=="phantom_006.txt")
           {
               image_phantom=phantom_loc+"Roberto/roberto_5y.mhd";
           }
           else if(constructed_str=="phantom_007.txt")
           {
                image_phantom=phantom_loc+"Roberta/Roberta_1.mhd";


           }
           else if(constructed_str=="phantom_008.txt")
           {
                image_phantom=phantom_loc+"Thelonious/Thelonious_6y_V6_1mm.mhd";


           }
           else if(constructed_str=="phantom_009.txt")
           {
                image_phantom=phantom_loc+"Eartha/Eartha_1.mhd";


           }
           else if(constructed_str=="phantom_010.txt")
           {
                image_phantom=phantom_loc+"Dizzy/Dizzy_1.mhd";


           }
           else if(constructed_str=="phantom_011.txt")
           {
                image_phantom=phantom_loc+"Billie/Billie_11y_1mm.mhd";


           }
           else if(constructed_str=="phantom_012.txt")
           {
                image_phantom=phantom_loc+"Louis/Louis_1.mhd";


           }
           else if(constructed_str=="phantom_013.txt")
           {
                image_phantom=phantom_loc+"Lois/Lois_14y.mhd";


           }
           break;
       }


    }



    if(phantom_match==nullptr)
        phantom_match=new integradeDose(this,1);
    double activity = LE_activity->text().toDouble();

if(sadr_completed){
    phantom_match->getFileNames(activityCurves,sadr,activity);

    exportedDoses = phantom_match->compute(LE_filename->text(),cB_radiopharma->currentText()); // export the calculated organ doses and  save them in a vector in order to replace the organ value in the phantom
    activityCurves.clear();
                                                                                               // note that the value that is displayed for each organ in the phantom 3d image is not the organ dose value, is a represantation. See the text file in the phantom folder.
    std::vector<std::string> str;
    QString imageName_copy = image_phantom;
    QByteArray ba2= imageName_copy.toLocal8Bit();
    std::string ptr = ba2.data();
    str.push_back(ptr);
    if(firstLoad)
    {
     LoadImages(ptr,vvImageReader::IMAGE);
     firstLoad=false;
    }
    else {
       LoadImages(ptr,vvImageReader::IMAGE);
    }

    sadr.clear();
    image_phantom.clear();
    activityCurves=nullptr;
    sadr=nullptr;

}

    pb_submit->setEnabled(true);




}

void NMDosimetry :: injectDosesInImage()
{

   // Open File to read the transformation parameters
    std::vector<vtkImageData*> Initmatrix =  mSlicerManagers.back()->GetImage()->GetVTKImages();
    std::vector<vtkImageData*> matrix =  mSlicerManagers.back()->GetImage()->GetVTKImages();//->GetTransform()[0]->GetMatrix();


    vtkSmartPointer<vtkMatrix4x4> m = vtkSmartPointer<vtkMatrix4x4>::New();

    m->Identity();
    for(int j=0; j<4; j++)
      for(int i=0; i<4; i++)
        m->SetElement(i,j,mSlicerManagers.back()->GetImage()->GetTransform()[0]->GetMatrix()->GetElement(i,j));


     qDebug() << exportedDoses[0];

     // matrix.front()->SetNumberOfScalarComponents(1);

     int* dims = matrix.at(0)->GetDimensions();
     // int dims[3]; // can't do this

     std::cout << "Dims: " << " x: " << dims[0] << " y: " << dims[1] << " z: " << dims[2] << std::endl;

     std::cout << "Number of points: " << matrix.at(0)->GetNumberOfPoints() << std::endl;
     std::cout << "Number of cells: " << matrix.at(0)->GetNumberOfCells() << std::endl;

     // Fill every entry of the image data with "2.0"
     int k=0;

     for (int z = 0; z < dims[2]; z++)
       {
       for (int y = 0; y < dims[1]; y++)
         {
         for (int x = 0; x < dims[0]; x++)
           {
             double* pixel = static_cast<double*>(matrix.at(0)->GetScalarPointer(x,y,z));
           if(k<exportedDoses.size())
           {

               pixel[0] = static_cast<double>(exportedDoses[k]);
               //matrix.at(0)->SetScalarComponentFromDouble(x,y,z,0,static_cast<double>(exportedDoses.at(k)));

           }
           else
           {
               float val = matrix.at(0)->GetScalarComponentAsFloat(x,y,z,0);
               pixel[0] = static_cast<double>(val);

           }
           k++;


           }
         }
       }

     // Retrieve the entries from the image data and print them to the screen
     for (int z = 0; z < dims[2]; z++)
       {
       for (int y = 0; y < dims[1]; y++)
         {
         for (int x = 0; x < dims[0]; x++)
           {
           double* pixel = static_cast<double*>(matrix.at(0)->GetScalarPointer(x,y,z));
           // do something with v
           std::cout << pixel[0] << " ";
           }
         std::cout << std::endl;
         }
       std::cout << std::endl;
       }



   /* int k=0;
   vtkSmartPointer<vtkMatrix4x4> mInitialMatrix = vtkSmartPointer<vtkMatrix4x4>::New();
  //  HideInputSelector();
  //  QTabWidget * tab = dynamic_cast<NMDosimetry*>(mMainWindow)->GetTab();
  //  move(tab->mapToGlobal(tab->pos()));
  //  resize(tab->width(), 0);

    //default image rotation center is the center of the image
    QString xcord,ycord,zcord;
    std::vector<double> imageorigin;
    imageorigin=mSlicerManagers.back()->GetImage()->GetOrigin();
    std::vector<int> imageSize = mSlicerManagers.back()->GetImage()->GetSize();
    std::vector<double> imageSpacing = mSlicerManagers.back()->GetImage()->GetSpacing();
     xcord=xcord.setNum(imageorigin[0]+(imageSize[0]-1)*imageSpacing[0]*0.5, 'g', 3);
     qDebug() << xcord;
    ycord=ycord.setNum(imageorigin[1]+(imageSize[1]-1)*imageSpacing[1]*0.5, 'g', 3);
    qDebug() << ycord;
    zcord=zcord.setNum(imageorigin[2]+(imageSize[2]-1)*imageSpacing[2]*0.5, 'g', 3);
    qDebug() << zcord;


    //backup original matrix
    for(int j=0; j<4; j++){
      for(int i=0; i<4; i++)
      {
        // TODO SR and BP: check on the list of transforms and not the first only
        mInitialMatrix->SetElement(i,j, mSlicerManagers.back()->GetImage()->GetTransform()[0]->GetMatrix()->GetElement(i,j));
        qDebug() << mInitialMatrix.get
      }
    }
    QString origTransformString(clitk::Get4x4MatrixDoubleAsString(mInitialMatrix).c_str(*/


//    for(int x=0;x<mSlicerManagers.back()->GetImage()->GetTransform()[0].)

//    mSlicerManagers.back()->GetImage()->GetTransform()[0]->SetMatrix(matrix);
//    mSlicerManagers.back()->GetImage()->GetTransform()[0]->Update();

//    const int width = 4;
//    const int height = 4;

//    double cImage[width*height];
//    double value = 0;
//    for(unsigned int row = 0; row < height; ++row)
//    {
//      for(unsigned int col = 0; col < width; ++col)
//      {
//        cImage[row * width + col] = exportedDoses[col];
//       // value += 10;
//      }
//    }

//    // Convert the c-style image to a vtkImageData
//    vtkSmartPointer<vtkImageImport> imageImport =
//      vtkSmartPointer<vtkImageImport>::New();
//    imageImport->SetDataSpacing(2, 2, 2);
//    imageImport->SetDataOrigin(0, 0, 0);
//    imageImport->SetWholeExtent(0, width-1, 0, height-1, 0, 0);
//    imageImport->SetDataExtentToWholeExtent();
//    imageImport->SetDataScalarTypeToUnsignedChar();
//    imageImport->SetNumberOfScalarComponents(1);
//    imageImport->SetImportVoidPointer(cImage);
//    imageImport->Update();

//    // Create an actor
//    vtkSmartPointer<vtkImageActor> actor =
//      vtkSmartPointer<vtkImageActor>::New();
//    actor->SetInputData(imageImport->GetOutput());

//    // Setup renderer
//    vtkSmartPointer<vtkRenderer> renderer =
//      vtkSmartPointer<vtkRenderer>::New();
//    renderer->AddActor(actor);
//    renderer->ResetCamera();

//    // Setup render window
//    vtkSmartPointer<vtkRenderWindow> renderWindow =
//      vtkSmartPointer<vtkRenderWindow>::New();
//    renderWindow->AddRenderer(renderer);

//    // Setup render window interactor
//    vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
//      vtkSmartPointer<vtkRenderWindowInteractor>::New();
//    vtkSmartPointer<vtkInteractorStyle> style =
//      vtkSmartPointer<vtkInteractorStyle>::New();

//    renderWindowInteractor->SetInteractorStyle(style);

//    // Render and start interaction
//    renderWindowInteractor->SetRenderWindow(renderWindow);
//    renderWindow->Render();
//    renderWindowInteractor->Initialize();

//    renderWindowInteractor->Start();

}

void NMDosimetry::on_actionreg_triggered()
{
    on_actionCustom_Register_triggered();
}

void NMDosimetry::on_pb_clear_clicked()
{
    LE_BMI->clear();
    LE_LAT->clear();
    LE_age->clear();
    LE_lung->clear();
    LE_height->clear();
    LE_weight->clear();
    LE_activity->clear();
    LE_filename->clear();
    LE_height_torso->clear();
    LE_effectiveDiam->clear();
    LE_anteroposterior->clear();
    cB_radiopharma->setCurrentIndex(-1);

}
