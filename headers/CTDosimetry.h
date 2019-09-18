#ifndef CTDOSIMETRY_H
#define CTDOSIMETRY_H

#include "ui_CTDosimetry.h"
#include <QDialog>
#include <QMainWindow>
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

#include "VV/vv/vvProgressDialog.h"

#include "vtkSmartPointer.h"
#include "QVTKWidget.h"


#include "VV/common/clitkCommon.h"
#include "VV/common/vvImage.h"
#include <qmainwindow.h>
#include <QProcess>

#include<QTreeWidgetItem>



class vtkImageData;
class vtkRenderer;
class vtkMatrix4x4;
class vvDicomSeriesSelector;
class vvSlicer;



class vvSlicerManager;


//namespace Ui {
//class CTDosimetry;
//}

class CTDosimetry:public QMainWindow ,private Ui::CTDosimetry
{
    Q_OBJECT

public:
     CTDosimetry(QMainWindow* parent=nullptr);
    ~CTDosimetry();
    integradeDose *phantom_match;
    QString currentDir;
    int totalEnergy;
    int  mAs;
    QString sadr;
    QString image_phantom;

    QVector<double> exportedDoses;

    bool firstLoad=true;

    QProcess *proc;

    vvProgressDialog *compute;

    vvToolRigidReg *Rotate;
    vvInfoPanel *infoPanel;
    QWidget *panelArea;

    std::vector<vvSlicerManager*> mSlicerManagers;

    int mSlicerManagerCurrentIndex;

    QString mInputPathName;

    void LoadImages(std::string filenames, vvImageReader::LoadedImageType type);

    void DisplayChanged(int index);




    ///This is used to show an image when opened or computed
    void ShowLastImage();




    virtual void UpdateCurrentSlicer();



    public slots:


    void OpenImages();
    void OpenDicom();

    ///Open a vtkPolyData surface mesh and display it over the current image

    void SaveAs();
    void ImageInfoChanged();
    void ChangeViewMode();

    void CloseImage();


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


    void afterMatching(int);


signals:
    void AnImageIsBeingClosed(vvSlicerManager *);
    void SelectedImageHasChanged(vvSlicerManager *);

private slots:


    void on_actionCustom_Register_triggered();

    void on_pb_submit_clicked();
    void phantom_matching_algorithm();
    bool fileExists(QString);





    void on_cB_kev_currentIndexChanged(int index);

    void on_cB_protocol_currentIndexChanged(int index);

protected:



// Drag and drop event handlers
virtual void dragEnterEvent(QDragEnterEvent *event);
virtual void dropEvent(QDropEvent *event);
virtual bool eventFilter(QObject *obj, QEvent *event);


private:

    vvDicomSeriesSelector *dicomSeriesSelector;



    bool viewMode;


    //functions

    ///Adds a vector field to slicer manager index

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

    QMenu contextMenu;
    QMenu* recentlyOpenedFilesMenu;
    //QMenu *AddSubImageMenu;
    std::vector<QAction*> contextActions;
    std::vector<QSlider*> horizontalSliders;
    std::vector<QSlider*> verticalSliders;
    int mFrameRate;





    int mCurrentTime;

};








#endif // CTDOSIMETRY_H
