#ifndef CTDOSIMETRY_H
#define CTDOSIMETRY_H

#include "ui_CTDosimetry.h"
#include <QObject>
#include <QMainWindow>
#include <QCloseEvent>
#include <QDialog>
#include <QMainWindow>
#include <QProcess>
#include <QDir>
#include <QMenuBar>
#include "integradedose.h"
#include <iostream>
#include <vector>
#include <QDropEvent>
#include <QSlider>
#include "vtkVersion.h"
#include "VV/common/vvImageReader.h"
#include "VV/vv/vvMesh.h"
#include "VV/vv/vvInfoPanel.h"
#include "VV/vv/vvToolRigidReg.h"
#include "VV/common/clitkMemoryUsage.h"

#include "vtkSmartPointer.h"
#include "QVTKWidget.h"


#include "VV/common/clitkCommon.h"
#include "VV/common/vvImage.h"
#include <qmainwindow.h>

#include<QTreeWidgetItem>


class vtkImageData;
class vtkRenderer;
class vtkMatrix4x4;
class vvDicomSeriesSelector;
class vvSlicer;

class vvSlicerManager;




class CTDosimetry:public QMainWindow , private Ui::CTDosimetry
{
   Q_OBJECT

public:
     CTDosimetry(QMainWindow *parent=nullptr);
    ~CTDosimetry();

integradeDose *phantom_match;
QString currentDir;
QString activityCurves;
QString sadr;
QProcess *proc;

vvToolRigidReg *Rotate;
vvInfoPanel *infoPanel;
QWidget *panelArea;

std::vector<vvSlicerManager*> mSlicerManagers;
int mSlicerManagerCurrentIndex;

QString mInputPathName;

void LoadImages(std::vector<std::string> filenames, vvImageReader::LoadedImageType type);
vvSlicerManager *AddImage(vvImage::Pointer image,std::string filename);
void AddField(QString file,int index);
bool CheckAddedImage(int index, QString imageType);


void ShowLastImage();




virtual void UpdateCurrentSlicer();



public slots:


void OpenImages();
void OpenRecentImage();
void OpenDicom();

void SaveAs();
void CurrentImageChanged(std::string id);
void CurrentPickedImageChanged(std::string id);
void ImageInfoChanged();
void ChangeViewMode();

void CloseImage();
void phantom_matching_algorithm();


void MousePositionChanged(int visibility, double x, double y, double z, double X, double Y, double Z , double value);

void UpdateSlice(int slicer, int slice);
void UpdateTSlice(int slicer, int slice, int code=-1);
void UpdateSliceRange(int slicer, int min, int max, int tmin, int tmax);

void UpdateColorMap();


void UpdateLinkManager(std::string id, int slicer, double x, double y, double z, int temps);
void UpdateLinkedNavigation(std::string id, vvSlicerManager *sm, vvSlicer* refSlicer);

void ChangeImageWithIndexOffset(vvSlicerManager *sm, int slicer, int offset);

///Generic method called when any one of the horizontal sliders is moved
void HorizontalSliderMoved(int value,int column, int slicer_index);
void NOHorizontalSliderMoved();
void NEHorizontalSliderMoved();
void SOHorizontalSliderMoved();
void SEHorizontalSliderMoved();

void NOVerticalSliderChanged();
void NEVerticalSliderChanged();
void SOVerticalSliderChanged();
void SEVerticalSliderChanged();

void SaveNEScreenshot();
void SaveNOScreenshot();
void SaveSEScreenshot();
void SaveSOScreenshot();
void SaveScreenshotAllSlices();

void UpdateMemoryUsage();




signals:
void closed();
void AnImageIsBeingClosed(vvSlicerManager *);
void SelectedImageHasChanged(vvSlicerManager *);




protected:
 virtual void closeEvent(QCloseEvent* e) override;


// Drag and drop event handlers
virtual void dragEnterEvent(QDragEnterEvent *event);
virtual void dropEvent(QDropEvent *event);
virtual bool eventFilter(QObject *obj, QEvent *event);



private slots:

//void on_actionCustom_Register_triggered();



void on_cB_protocol_currentIndexChanged(int index);

void on_pb_submit_clicked();

private:

    vvDicomSeriesSelector *dicomSeriesSelector;



    bool viewMode;


    //functions

    ///Adds a vector field to slicer manager index

    void AddFieldEntry(QString filename,int index,bool from_disk);
    void InitDisplay();
    ///Sets the render window and LUT for the last SlicerManager
    void InitSlicers();
    void DisplaySliders(int slicer, int window);
    QString GetSizeInBytes(unsigned long size);
    QString GetVectorDoubleAsString(std::vector<double> vectorDouble);
    QString GetVectorIntAsString(std::vector<int> vectorInt);
    #if (VTK_MAJOR_VERSION == 8 && VTK_MINOR_VERSION >= 2) || VTK_MAJOR_VERSION >= 9
    void SaveScreenshot(QVTKOpenGLNativeWidget *widget);
    #else
    void SaveScreenshot(QVTKWidget *widget);
    #endif
    int GetImageDuplicateFilenameNumber(std::string filename);



    std::vector<QSlider*> horizontalSliders;
    std::vector<QSlider*> verticalSliders;


    std::string mCurrentSelectedImageId;
    std::string mCurrentPickedImageId;
    unsigned int mCurrentPickedImageIndex;






};





#endif // CTDOSIMETRY_H
