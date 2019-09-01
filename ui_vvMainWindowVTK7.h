/********************************************************************************
** Form generated from reading UI file 'vvMainWindowVTK7.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVMAINWINDOWVTK7_H
#define UI_VVMAINWINDOWVTK7_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"
#include "VV/vv/vvInfoPanel.h"
#include "VV/vv/vvOverlayPanel.h"

QT_BEGIN_NAMESPACE

class Ui_vvMainWindow
{
public:
    QAction *actionLoad_images;
    QAction *actionClose_image;
    QAction *actionExit;
    QAction *actionSave_screenshot;
    QAction *actionPickable;
    QAction *actionDragable;
    QAction *actionSet_colormap;
    QAction *actionIsoContours;
    QAction *actionAbouts;
    QAction *actionDocumentation;
    QAction *actionReload_images;
    QAction *actionOpen_Dicom;
    QAction *actionOpen_Multiple_Images_As_One;
    QAction *actionSlice_Image_As_Multiple_Images;
    QAction *actionOpen_one_Image_as_Multiple;
    QAction *actionSave_As;
    QAction *actionAdd_VF_to_current_Image;
    QAction *actionNorth_West_Window;
    QAction *actionNorth_East_Window;
    QAction *actionSouth_West_Window;
    QAction *actionSouth_East_Window;
    QAction *actionOpen_Image_With_Time;
    QAction *actionMerge_images_as_n_dim_t;
    QAction *actionAdd_fusion_image;
    QAction *actionSegmentation;
    QAction *actionResampler;
    QAction *actionSurface_Viewer;
    QAction *actionDebug;
    QAction *actionDeformable_Registration;
    QAction *actionWarp_image_with_vector_field;
    QAction *actionMaximum_Intensity_Projection;
    QAction *actionOpen_VTK_contour;
    QAction *actionNavigation_Help;
    QAction *actionOpen_Dicom_Struct;
    QAction *actionCompute_mid_position_image;
    QAction *actionExperimental;
    QAction *actionRegister_vv;
    QAction *actionSave_all_slices;
    QAction *actionSave_current_state;
    QAction *actionRead_saved_state;
    QAction *actionAdd_overlay_image_to_current_image;
    QAction *actionAdd_USSequence_toCT;
    QAction *actionConnect_Pacs;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QPushButton *goToCursorPushButton;
    QFrame *line;
    QPushButton *playButton;
    QFrame *line_2;
    QLabel *windowLabel;
    QDoubleSpinBox *windowSpinBox;
    QPushButton *inverseButton;
    QLabel *levelLabel;
    QDoubleSpinBox *levelSpinBox;
    QLabel *label;
    QComboBox *presetComboBox;
    QLabel *label_4;
    QComboBox *colorMapComboBox;
    QPushButton *viewButton;
    QSpinBox *frameRateSpinBox;
    QLabel *frameRateLabel;
    QPushButton *applyWindowLevelToAllButton;
    QComboBox *slicingPresetComboBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *DataTab;
    QGridLayout *gridLayout2;
    QTreeWidget *DataTree;
    QWidget *VFtab;
    QGridLayout *gridLayout3;
    vvOverlayPanel *overlayPanel;
    QWidget *ROItab;
    QGridLayout *gridLayout_2;
    QWidget *LinkTab;
    QGridLayout *gridLayout4;
    QWidget *Landmarkstab;
    QGridLayout *gridLayout5;
    vvInfoPanel *infoPanel;
    QSplitter *splitter_3;
    QSplitter *OSplitter;
    QWidget *NOWidget;
    QGridLayout *gridLayout6;
    QVTKWidget *NOViewWidget;
    QSlider *NOVerticalSlider;
    QSlider *NOHorizontalSlider;
    QWidget *SOWidget;
    QGridLayout *gridLayout7;
    QVTKWidget *SOViewWidget;
    QSlider *SOVerticalSlider;
    QSlider *SOHorizontalSlider;
    QSplitter *ESplitter;
    QWidget *NEWidget;
    QGridLayout *gridLayout8;
    QVTKWidget *NEViewWidget;
    QSlider *NEVerticalSlider;
    QSlider *NEHorizontalSlider;
    QWidget *SEWidget;
    QGridLayout *gridLayout9;
    QVTKWidget *SEViewWidget;
    QSlider *SEVerticalSlider;
    QSlider *SEHorizontalSlider;
    QMenuBar *menubar;
    QMenu *menuHelp;
    QMenu *menuOverlay;
    QMenu *menuScreenshots;
    QMenu *menuExperimental;
    QMenu *menuTools;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *vvMainWindow)
    {
        if (vvMainWindow->objectName().isEmpty())
            vvMainWindow->setObjectName(QString::fromUtf8("vvMainWindow"));
        vvMainWindow->setEnabled(true);
        vvMainWindow->resize(1008, 758);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vvMainWindow->sizePolicy().hasHeightForWidth());
        vvMainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/common/icons/ducky.png"), QSize(), QIcon::Normal, QIcon::Off);
        vvMainWindow->setWindowIcon(icon);
        actionLoad_images = new QAction(vvMainWindow);
        actionLoad_images->setObjectName(QString::fromUtf8("actionLoad_images"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/common/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_images->setIcon(icon1);
        actionLoad_images->setIconVisibleInMenu(true);
        actionClose_image = new QAction(vvMainWindow);
        actionClose_image->setObjectName(QString::fromUtf8("actionClose_image"));
        actionExit = new QAction(vvMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/common/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionExit->setIconVisibleInMenu(true);
        actionSave_screenshot = new QAction(vvMainWindow);
        actionSave_screenshot->setObjectName(QString::fromUtf8("actionSave_screenshot"));
        actionPickable = new QAction(vvMainWindow);
        actionPickable->setObjectName(QString::fromUtf8("actionPickable"));
        actionDragable = new QAction(vvMainWindow);
        actionDragable->setObjectName(QString::fromUtf8("actionDragable"));
        actionSet_colormap = new QAction(vvMainWindow);
        actionSet_colormap->setObjectName(QString::fromUtf8("actionSet_colormap"));
        actionIsoContours = new QAction(vvMainWindow);
        actionIsoContours->setObjectName(QString::fromUtf8("actionIsoContours"));
        actionAbouts = new QAction(vvMainWindow);
        actionAbouts->setObjectName(QString::fromUtf8("actionAbouts"));
        actionDocumentation = new QAction(vvMainWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionDocumentation->setIconVisibleInMenu(true);
        actionReload_images = new QAction(vvMainWindow);
        actionReload_images->setObjectName(QString::fromUtf8("actionReload_images"));
        actionOpen_Dicom = new QAction(vvMainWindow);
        actionOpen_Dicom->setObjectName(QString::fromUtf8("actionOpen_Dicom"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/common/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Dicom->setIcon(icon3);
        actionOpen_Dicom->setIconVisibleInMenu(true);
        actionOpen_Multiple_Images_As_One = new QAction(vvMainWindow);
        actionOpen_Multiple_Images_As_One->setObjectName(QString::fromUtf8("actionOpen_Multiple_Images_As_One"));
        actionOpen_Multiple_Images_As_One->setIcon(icon3);
        actionOpen_Multiple_Images_As_One->setIconVisibleInMenu(true);
        actionSlice_Image_As_Multiple_Images = new QAction(vvMainWindow);
        actionSlice_Image_As_Multiple_Images->setObjectName(QString::fromUtf8("actionSlice_Image_As_Multiple_Images"));
        actionSlice_Image_As_Multiple_Images->setIcon(icon3);
        actionSlice_Image_As_Multiple_Images->setIconVisibleInMenu(true);
        actionOpen_one_Image_as_Multiple = new QAction(vvMainWindow);
        actionOpen_one_Image_as_Multiple->setObjectName(QString::fromUtf8("actionOpen_one_Image_as_Multiple"));
        actionSave_As = new QAction(vvMainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/common/icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        actionSave_As->setIconVisibleInMenu(true);
        actionAdd_VF_to_current_Image = new QAction(vvMainWindow);
        actionAdd_VF_to_current_Image->setObjectName(QString::fromUtf8("actionAdd_VF_to_current_Image"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/common/icons/cursor-uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_VF_to_current_Image->setIcon(icon5);
        actionAdd_VF_to_current_Image->setIconVisibleInMenu(true);
        actionNorth_West_Window = new QAction(vvMainWindow);
        actionNorth_West_Window->setObjectName(QString::fromUtf8("actionNorth_West_Window"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/common/icons/NOgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNorth_West_Window->setIcon(icon6);
        actionNorth_West_Window->setIconVisibleInMenu(true);
        actionNorth_East_Window = new QAction(vvMainWindow);
        actionNorth_East_Window->setObjectName(QString::fromUtf8("actionNorth_East_Window"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/common/icons/NEgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNorth_East_Window->setIcon(icon7);
        actionNorth_East_Window->setIconVisibleInMenu(true);
        actionSouth_West_Window = new QAction(vvMainWindow);
        actionSouth_West_Window->setObjectName(QString::fromUtf8("actionSouth_West_Window"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/common/icons/SOgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSouth_West_Window->setIcon(icon8);
        actionSouth_West_Window->setIconVisibleInMenu(true);
        actionSouth_East_Window = new QAction(vvMainWindow);
        actionSouth_East_Window->setObjectName(QString::fromUtf8("actionSouth_East_Window"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/common/icons/SEgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSouth_East_Window->setIcon(icon9);
        actionSouth_East_Window->setIconVisibleInMenu(true);
        actionOpen_Image_With_Time = new QAction(vvMainWindow);
        actionOpen_Image_With_Time->setObjectName(QString::fromUtf8("actionOpen_Image_With_Time"));
        actionOpen_Image_With_Time->setIcon(icon3);
        actionOpen_Image_With_Time->setIconVisibleInMenu(true);
        actionMerge_images_as_n_dim_t = new QAction(vvMainWindow);
        actionMerge_images_as_n_dim_t->setObjectName(QString::fromUtf8("actionMerge_images_as_n_dim_t"));
        actionMerge_images_as_n_dim_t->setIcon(icon3);
        actionMerge_images_as_n_dim_t->setIconVisibleInMenu(true);
        actionAdd_fusion_image = new QAction(vvMainWindow);
        actionAdd_fusion_image->setObjectName(QString::fromUtf8("actionAdd_fusion_image"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/common/icons/fusion.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_fusion_image->setIcon(icon10);
        actionAdd_fusion_image->setIconVisibleInMenu(true);
        actionSegmentation = new QAction(vvMainWindow);
        actionSegmentation->setObjectName(QString::fromUtf8("actionSegmentation"));
        actionSegmentation->setIconVisibleInMenu(true);
        actionResampler = new QAction(vvMainWindow);
        actionResampler->setObjectName(QString::fromUtf8("actionResampler"));
        actionSurface_Viewer = new QAction(vvMainWindow);
        actionSurface_Viewer->setObjectName(QString::fromUtf8("actionSurface_Viewer"));
        actionSurface_Viewer->setIconVisibleInMenu(true);
        actionDebug = new QAction(vvMainWindow);
        actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
        actionDeformable_Registration = new QAction(vvMainWindow);
        actionDeformable_Registration->setObjectName(QString::fromUtf8("actionDeformable_Registration"));
        actionDeformable_Registration->setIconVisibleInMenu(true);
        actionWarp_image_with_vector_field = new QAction(vvMainWindow);
        actionWarp_image_with_vector_field->setObjectName(QString::fromUtf8("actionWarp_image_with_vector_field"));
        actionWarp_image_with_vector_field->setIconVisibleInMenu(true);
        actionMaximum_Intensity_Projection = new QAction(vvMainWindow);
        actionMaximum_Intensity_Projection->setObjectName(QString::fromUtf8("actionMaximum_Intensity_Projection"));
        actionOpen_VTK_contour = new QAction(vvMainWindow);
        actionOpen_VTK_contour->setObjectName(QString::fromUtf8("actionOpen_VTK_contour"));
        actionOpen_VTK_contour->setIcon(icon3);
        actionOpen_VTK_contour->setIconVisibleInMenu(true);
        actionNavigation_Help = new QAction(vvMainWindow);
        actionNavigation_Help->setObjectName(QString::fromUtf8("actionNavigation_Help"));
        actionNavigation_Help->setIconVisibleInMenu(true);
        actionNavigation_Help->setPriority(QAction::NormalPriority);
        actionOpen_Dicom_Struct = new QAction(vvMainWindow);
        actionOpen_Dicom_Struct->setObjectName(QString::fromUtf8("actionOpen_Dicom_Struct"));
        actionOpen_Dicom_Struct->setIcon(icon3);
        actionOpen_Dicom_Struct->setIconVisibleInMenu(true);
        actionCompute_mid_position_image = new QAction(vvMainWindow);
        actionCompute_mid_position_image->setObjectName(QString::fromUtf8("actionCompute_mid_position_image"));
        actionCompute_mid_position_image->setIconVisibleInMenu(true);
        actionExperimental = new QAction(vvMainWindow);
        actionExperimental->setObjectName(QString::fromUtf8("actionExperimental"));
        actionRegister_vv = new QAction(vvMainWindow);
        actionRegister_vv->setObjectName(QString::fromUtf8("actionRegister_vv"));
        actionRegister_vv->setIconVisibleInMenu(true);
        actionSave_all_slices = new QAction(vvMainWindow);
        actionSave_all_slices->setObjectName(QString::fromUtf8("actionSave_all_slices"));
        actionSave_current_state = new QAction(vvMainWindow);
        actionSave_current_state->setObjectName(QString::fromUtf8("actionSave_current_state"));
        actionSave_current_state->setIcon(icon4);
        actionSave_current_state->setIconVisibleInMenu(true);
        actionRead_saved_state = new QAction(vvMainWindow);
        actionRead_saved_state->setObjectName(QString::fromUtf8("actionRead_saved_state"));
        actionRead_saved_state->setIcon(icon3);
        actionRead_saved_state->setIconVisibleInMenu(true);
        actionAdd_overlay_image_to_current_image = new QAction(vvMainWindow);
        actionAdd_overlay_image_to_current_image->setObjectName(QString::fromUtf8("actionAdd_overlay_image_to_current_image"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/common/icons/GPSup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_overlay_image_to_current_image->setIcon(icon11);
        actionAdd_overlay_image_to_current_image->setIconVisibleInMenu(true);
        actionAdd_USSequence_toCT = new QAction(vvMainWindow);
        actionAdd_USSequence_toCT->setObjectName(QString::fromUtf8("actionAdd_USSequence_toCT"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/common/icons/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_USSequence_toCT->setIcon(icon12);
        actionAdd_USSequence_toCT->setIconVisibleInMenu(true);
        actionConnect_Pacs = new QAction(vvMainWindow);
        actionConnect_Pacs->setObjectName(QString::fromUtf8("actionConnect_Pacs"));
        centralwidget = new QWidget(vvMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMinimumSize(QSize(16, 36));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame);
        gridLayout1->setSpacing(2);
        gridLayout1->setContentsMargins(2, 2, 2, 2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        goToCursorPushButton = new QPushButton(frame);
        goToCursorPushButton->setObjectName(QString::fromUtf8("goToCursorPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(goToCursorPushButton->sizePolicy().hasHeightForWidth());
        goToCursorPushButton->setSizePolicy(sizePolicy2);
        goToCursorPushButton->setMaximumSize(QSize(24, 24));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/common/icons/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        goToCursorPushButton->setIcon(icon13);

        gridLayout1->addWidget(goToCursorPushButton, 0, 0, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setFrameShape(QFrame::VLine);

        gridLayout1->addWidget(line, 0, 1, 1, 1);

        playButton = new QPushButton(frame);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        sizePolicy2.setHeightForWidth(playButton->sizePolicy().hasHeightForWidth());
        playButton->setSizePolicy(sizePolicy2);
        playButton->setMaximumSize(QSize(24, 24));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/common/icons/player_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playButton->setIcon(icon14);

        gridLayout1->addWidget(playButton, 0, 2, 1, 1);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line_2, 0, 5, 1, 1);

        windowLabel = new QLabel(frame);
        windowLabel->setObjectName(QString::fromUtf8("windowLabel"));

        gridLayout1->addWidget(windowLabel, 0, 7, 1, 1);

        windowSpinBox = new QDoubleSpinBox(frame);
        windowSpinBox->setObjectName(QString::fromUtf8("windowSpinBox"));
        windowSpinBox->setDecimals(6);
        windowSpinBox->setMinimum(-66000.000000000000000);
        windowSpinBox->setMaximum(66000.000000000000000);
        windowSpinBox->setSingleStep(10.000000000000000);

        gridLayout1->addWidget(windowSpinBox, 0, 8, 1, 1);

        inverseButton = new QPushButton(frame);
        inverseButton->setObjectName(QString::fromUtf8("inverseButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(inverseButton->sizePolicy().hasHeightForWidth());
        inverseButton->setSizePolicy(sizePolicy3);
        inverseButton->setMaximumSize(QSize(24, 16777215));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/common/icons/invertcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        inverseButton->setIcon(icon15);

        gridLayout1->addWidget(inverseButton, 0, 9, 1, 1);

        levelLabel = new QLabel(frame);
        levelLabel->setObjectName(QString::fromUtf8("levelLabel"));

        gridLayout1->addWidget(levelLabel, 0, 10, 1, 1);

        levelSpinBox = new QDoubleSpinBox(frame);
        levelSpinBox->setObjectName(QString::fromUtf8("levelSpinBox"));
        levelSpinBox->setDecimals(6);
        levelSpinBox->setMinimum(-66000.000000000000000);
        levelSpinBox->setMaximum(66000.000000000000000);
        levelSpinBox->setSingleStep(10.000000000000000);

        gridLayout1->addWidget(levelSpinBox, 0, 11, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 12, 1, 1);

        presetComboBox = new QComboBox(frame);
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->addItem(QString());
        presetComboBox->setObjectName(QString::fromUtf8("presetComboBox"));
        sizePolicy3.setHeightForWidth(presetComboBox->sizePolicy().hasHeightForWidth());
        presetComboBox->setSizePolicy(sizePolicy3);
        presetComboBox->setMaximumSize(QSize(100, 16777215));

        gridLayout1->addWidget(presetComboBox, 0, 13, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 0, 14, 1, 1);

        colorMapComboBox = new QComboBox(frame);
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->setObjectName(QString::fromUtf8("colorMapComboBox"));

        gridLayout1->addWidget(colorMapComboBox, 0, 15, 1, 1);

        viewButton = new QPushButton(frame);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        sizePolicy2.setHeightForWidth(viewButton->sizePolicy().hasHeightForWidth());
        viewButton->setSizePolicy(sizePolicy2);
        viewButton->setMaximumSize(QSize(24, 24));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/common/icons/adjustsize.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewButton->setIcon(icon16);

        gridLayout1->addWidget(viewButton, 0, 21, 1, 1);

        frameRateSpinBox = new QSpinBox(frame);
        frameRateSpinBox->setObjectName(QString::fromUtf8("frameRateSpinBox"));
        frameRateSpinBox->setMinimum(1);
        frameRateSpinBox->setMaximum(100);
        frameRateSpinBox->setValue(10);

        gridLayout1->addWidget(frameRateSpinBox, 0, 4, 1, 1);

        frameRateLabel = new QLabel(frame);
        frameRateLabel->setObjectName(QString::fromUtf8("frameRateLabel"));

        gridLayout1->addWidget(frameRateLabel, 0, 3, 1, 1);

        applyWindowLevelToAllButton = new QPushButton(frame);
        applyWindowLevelToAllButton->setObjectName(QString::fromUtf8("applyWindowLevelToAllButton"));
        applyWindowLevelToAllButton->setEnabled(true);
        applyWindowLevelToAllButton->setMaximumSize(QSize(24, 16777215));

        gridLayout1->addWidget(applyWindowLevelToAllButton, 0, 16, 1, 1);

        slicingPresetComboBox = new QComboBox(frame);
        slicingPresetComboBox->addItem(QString());
        slicingPresetComboBox->addItem(QString());
        slicingPresetComboBox->setObjectName(QString::fromUtf8("slicingPresetComboBox"));

        gridLayout1->addWidget(slicingPresetComboBox, 0, 19, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 18, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer, 0, 17, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy4);
        DataTab = new QWidget();
        DataTab->setObjectName(QString::fromUtf8("DataTab"));
        gridLayout2 = new QGridLayout(DataTab);
        gridLayout2->setSpacing(2);
        gridLayout2->setContentsMargins(2, 2, 2, 2);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        DataTree = new QTreeWidget(DataTab);
        DataTree->setObjectName(QString::fromUtf8("DataTree"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(DataTree->sizePolicy().hasHeightForWidth());
        DataTree->setSizePolicy(sizePolicy5);
        DataTree->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        DataTree->setProperty("showDropIndicator", QVariant(false));
        DataTree->setTextElideMode(Qt::ElideLeft);
        DataTree->setItemsExpandable(true);
        DataTree->setColumnCount(7);

        gridLayout2->addWidget(DataTree, 0, 0, 1, 1);

        tabWidget->addTab(DataTab, QString());
        VFtab = new QWidget();
        VFtab->setObjectName(QString::fromUtf8("VFtab"));
        sizePolicy.setHeightForWidth(VFtab->sizePolicy().hasHeightForWidth());
        VFtab->setSizePolicy(sizePolicy);
        gridLayout3 = new QGridLayout(VFtab);
        gridLayout3->setSpacing(2);
        gridLayout3->setContentsMargins(2, 2, 2, 2);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        overlayPanel = new vvOverlayPanel(VFtab);
        overlayPanel->setObjectName(QString::fromUtf8("overlayPanel"));
        sizePolicy.setHeightForWidth(overlayPanel->sizePolicy().hasHeightForWidth());
        overlayPanel->setSizePolicy(sizePolicy);

        gridLayout3->addWidget(overlayPanel, 0, 0, 1, 1);

        tabWidget->addTab(VFtab, QString());
        ROItab = new QWidget();
        ROItab->setObjectName(QString::fromUtf8("ROItab"));
        gridLayout_2 = new QGridLayout(ROItab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget->addTab(ROItab, QString());
        LinkTab = new QWidget();
        LinkTab->setObjectName(QString::fromUtf8("LinkTab"));
        sizePolicy.setHeightForWidth(LinkTab->sizePolicy().hasHeightForWidth());
        LinkTab->setSizePolicy(sizePolicy);
        gridLayout4 = new QGridLayout(LinkTab);
        gridLayout4->setSpacing(2);
        gridLayout4->setContentsMargins(2, 2, 2, 2);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        linkPanel = new vvLinkPanel(LinkTab);
        linkPanel->setObjectName(QString::fromUtf8("linkPanel"));
        sizePolicy.setHeightForWidth(linkPanel->sizePolicy().hasHeightForWidth());
        linkPanel->setSizePolicy(sizePolicy);

        gridLayout4->addWidget(linkPanel, 0, 0, 1, 1);

        tabWidget->addTab(LinkTab, QString());
        Landmarkstab = new QWidget();
        Landmarkstab->setObjectName(QString::fromUtf8("Landmarkstab"));
        sizePolicy.setHeightForWidth(Landmarkstab->sizePolicy().hasHeightForWidth());
        Landmarkstab->setSizePolicy(sizePolicy);
        gridLayout5 = new QGridLayout(Landmarkstab);
        gridLayout5->setSpacing(2);
        gridLayout5->setContentsMargins(2, 2, 2, 2);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        landmarksPanel = new vvLandmarksPanel(Landmarkstab);
        landmarksPanel->setObjectName(QString::fromUtf8("landmarksPanel"));
        sizePolicy.setHeightForWidth(landmarksPanel->sizePolicy().hasHeightForWidth());
        landmarksPanel->setSizePolicy(sizePolicy);

        gridLayout5->addWidget(landmarksPanel, 0, 0, 1, 1);

        tabWidget->addTab(Landmarkstab, QString());
        splitter->addWidget(tabWidget);
        infoPanel = new vvInfoPanel(splitter);
        infoPanel->setObjectName(QString::fromUtf8("infoPanel"));
        infoPanel->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(infoPanel->sizePolicy().hasHeightForWidth());
        infoPanel->setSizePolicy(sizePolicy6);
        splitter->addWidget(infoPanel);
        splitter_4->addWidget(splitter);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy7);
        splitter_3->setOrientation(Qt::Horizontal);
        OSplitter = new QSplitter(splitter_3);
        OSplitter->setObjectName(QString::fromUtf8("OSplitter"));
        OSplitter->setOrientation(Qt::Vertical);
        NOWidget = new QWidget(OSplitter);
        NOWidget->setObjectName(QString::fromUtf8("NOWidget"));
        sizePolicy.setHeightForWidth(NOWidget->sizePolicy().hasHeightForWidth());
        NOWidget->setSizePolicy(sizePolicy);
        gridLayout6 = new QGridLayout(NOWidget);
        gridLayout6->setContentsMargins(2, 2, 2, 2);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        gridLayout6->setHorizontalSpacing(2);
        NOViewWidget = new QVTKWidget(NOWidget);
        NOViewWidget->setObjectName(QString::fromUtf8("NOViewWidget"));
        NOViewWidget->setMouseTracking(true);

        gridLayout6->addWidget(NOViewWidget, 0, 0, 1, 1);

        NOVerticalSlider = new QSlider(NOWidget);
        NOVerticalSlider->setObjectName(QString::fromUtf8("NOVerticalSlider"));
        NOVerticalSlider->setOrientation(Qt::Vertical);

        gridLayout6->addWidget(NOVerticalSlider, 0, 1, 1, 1);

        NOHorizontalSlider = new QSlider(NOWidget);
        NOHorizontalSlider->setObjectName(QString::fromUtf8("NOHorizontalSlider"));
        NOHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout6->addWidget(NOHorizontalSlider, 1, 0, 1, 1);

        OSplitter->addWidget(NOWidget);
        SOWidget = new QWidget(OSplitter);
        SOWidget->setObjectName(QString::fromUtf8("SOWidget"));
        sizePolicy.setHeightForWidth(SOWidget->sizePolicy().hasHeightForWidth());
        SOWidget->setSizePolicy(sizePolicy);
        SOWidget->setFocusPolicy(Qt::NoFocus);
        gridLayout7 = new QGridLayout(SOWidget);
        gridLayout7->setSpacing(2);
        gridLayout7->setContentsMargins(2, 2, 2, 2);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        SOViewWidget = new QVTKWidget(SOWidget);
        SOViewWidget->setObjectName(QString::fromUtf8("SOViewWidget"));
        SOViewWidget->setMouseTracking(true);

        gridLayout7->addWidget(SOViewWidget, 0, 0, 1, 1);

        SOVerticalSlider = new QSlider(SOWidget);
        SOVerticalSlider->setObjectName(QString::fromUtf8("SOVerticalSlider"));
        SOVerticalSlider->setOrientation(Qt::Vertical);

        gridLayout7->addWidget(SOVerticalSlider, 0, 1, 1, 1);

        SOHorizontalSlider = new QSlider(SOWidget);
        SOHorizontalSlider->setObjectName(QString::fromUtf8("SOHorizontalSlider"));
        SOHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout7->addWidget(SOHorizontalSlider, 1, 0, 1, 1);

        OSplitter->addWidget(SOWidget);
        splitter_3->addWidget(OSplitter);
        ESplitter = new QSplitter(splitter_3);
        ESplitter->setObjectName(QString::fromUtf8("ESplitter"));
        ESplitter->setOrientation(Qt::Vertical);
        NEWidget = new QWidget(ESplitter);
        NEWidget->setObjectName(QString::fromUtf8("NEWidget"));
        sizePolicy.setHeightForWidth(NEWidget->sizePolicy().hasHeightForWidth());
        NEWidget->setSizePolicy(sizePolicy);
        gridLayout8 = new QGridLayout(NEWidget);
        gridLayout8->setSpacing(2);
        gridLayout8->setContentsMargins(2, 2, 2, 2);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        NEViewWidget = new QVTKWidget(NEWidget);
        NEViewWidget->setObjectName(QString::fromUtf8("NEViewWidget"));
        NEViewWidget->setMouseTracking(true);

        gridLayout8->addWidget(NEViewWidget, 0, 0, 1, 1);

        NEVerticalSlider = new QSlider(NEWidget);
        NEVerticalSlider->setObjectName(QString::fromUtf8("NEVerticalSlider"));
        NEVerticalSlider->setOrientation(Qt::Vertical);

        gridLayout8->addWidget(NEVerticalSlider, 0, 1, 1, 1);

        NEHorizontalSlider = new QSlider(NEWidget);
        NEHorizontalSlider->setObjectName(QString::fromUtf8("NEHorizontalSlider"));
        NEHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout8->addWidget(NEHorizontalSlider, 1, 0, 1, 1);

        ESplitter->addWidget(NEWidget);
        SEWidget = new QWidget(ESplitter);
        SEWidget->setObjectName(QString::fromUtf8("SEWidget"));
        sizePolicy.setHeightForWidth(SEWidget->sizePolicy().hasHeightForWidth());
        SEWidget->setSizePolicy(sizePolicy);
        gridLayout9 = new QGridLayout(SEWidget);
        gridLayout9->setSpacing(2);
        gridLayout9->setContentsMargins(2, 2, 2, 2);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        SEViewWidget = new QVTKWidget(SEWidget);
        SEViewWidget->setObjectName(QString::fromUtf8("SEViewWidget"));
        sizePolicy.setHeightForWidth(SEViewWidget->sizePolicy().hasHeightForWidth());
        SEViewWidget->setSizePolicy(sizePolicy);
        SEViewWidget->setMouseTracking(true);

        gridLayout9->addWidget(SEViewWidget, 0, 0, 1, 1);

        SEVerticalSlider = new QSlider(SEWidget);
        SEVerticalSlider->setObjectName(QString::fromUtf8("SEVerticalSlider"));
        SEVerticalSlider->setOrientation(Qt::Vertical);

        gridLayout9->addWidget(SEVerticalSlider, 0, 1, 1, 1);

        SEHorizontalSlider = new QSlider(SEWidget);
        SEHorizontalSlider->setObjectName(QString::fromUtf8("SEHorizontalSlider"));
        SEHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout9->addWidget(SEHorizontalSlider, 1, 0, 1, 1);

        ESplitter->addWidget(SEWidget);
        splitter_3->addWidget(ESplitter);
        splitter_4->addWidget(splitter_3);

        gridLayout->addWidget(splitter_4, 1, 0, 1, 1);

        vvMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(vvMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1008, 27));
        menubar->setDefaultUp(false);
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOverlay = new QMenu(menubar);
        menuOverlay->setObjectName(QString::fromUtf8("menuOverlay"));
        menuScreenshots = new QMenu(menubar);
        menuScreenshots->setObjectName(QString::fromUtf8("menuScreenshots"));
        menuExperimental = new QMenu(menubar);
        menuExperimental->setObjectName(QString::fromUtf8("menuExperimental"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        vvMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(vvMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        vvMainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(presetComboBox, windowSpinBox);
        QWidget::setTabOrder(windowSpinBox, levelSpinBox);
        QWidget::setTabOrder(levelSpinBox, NOViewWidget);
        QWidget::setTabOrder(NOViewWidget, NOVerticalSlider);
        QWidget::setTabOrder(NOVerticalSlider, NOHorizontalSlider);
        QWidget::setTabOrder(NOHorizontalSlider, SOVerticalSlider);
        QWidget::setTabOrder(SOVerticalSlider, SOHorizontalSlider);
        QWidget::setTabOrder(SOHorizontalSlider, NEVerticalSlider);
        QWidget::setTabOrder(NEVerticalSlider, NEHorizontalSlider);
        QWidget::setTabOrder(NEHorizontalSlider, SEVerticalSlider);
        QWidget::setTabOrder(SEVerticalSlider, SEHorizontalSlider);
        QWidget::setTabOrder(SEHorizontalSlider, viewButton);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOverlay->menuAction());
        menubar->addAction(menuScreenshots->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuExperimental->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionNavigation_Help);
        menuHelp->addAction(actionDocumentation);
        menuHelp->addAction(actionRegister_vv);
        menuOverlay->addAction(actionAdd_VF_to_current_Image);
        menuOverlay->addAction(actionAdd_overlay_image_to_current_image);
        menuOverlay->addAction(actionAdd_fusion_image);
        menuOverlay->addAction(actionAdd_USSequence_toCT);
        menuScreenshots->addAction(actionNorth_West_Window);
        menuScreenshots->addAction(actionNorth_East_Window);
        menuScreenshots->addAction(actionSouth_West_Window);
        menuScreenshots->addAction(actionSouth_East_Window);
        menuScreenshots->addSeparator();
        menuScreenshots->addAction(actionSave_all_slices);
        menuExperimental->addAction(actionSurface_Viewer);
        menuExperimental->addAction(actionDeformable_Registration);
        menuExperimental->addAction(actionSegmentation);
        menuExperimental->addAction(actionWarp_image_with_vector_field);
        menuExperimental->addAction(actionCompute_mid_position_image);
        menuFile->addAction(actionLoad_images);
        menuFile->addAction(actionOpen_Image_With_Time);
        menuFile->addAction(actionMerge_images_as_n_dim_t);
        menuFile->addSeparator();
        menuFile->addAction(actionSlice_Image_As_Multiple_Images);
        menuFile->addAction(actionOpen_Multiple_Images_As_One);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_Dicom);
        menuFile->addAction(actionOpen_VTK_contour);
        menuFile->addAction(actionConnect_Pacs);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionRead_saved_state);
        menuFile->addAction(actionSave_current_state);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuFile->addSeparator();

        retranslateUi(vvMainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(vvMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *vvMainWindow)
    {
        vvMainWindow->setWindowTitle(QApplication::translate("vvMainWindow", "vv : the 4D Slicer", nullptr));
#ifndef QT_NO_STATUSTIP
        vvMainWindow->setStatusTip(QApplication::translate("vvMainWindow", "Type 'F1' on image to display help on navigation", nullptr));
#endif // QT_NO_STATUSTIP
        actionLoad_images->setText(QApplication::translate("vvMainWindow", "Open image(s)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLoad_images->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose_image->setText(QApplication::translate("vvMainWindow", "Close images", nullptr));
        actionExit->setText(QApplication::translate("vvMainWindow", "Exit", nullptr));
        actionSave_screenshot->setText(QApplication::translate("vvMainWindow", "Save screenshot", nullptr));
        actionPickable->setText(QApplication::translate("vvMainWindow", "pickable", nullptr));
        actionDragable->setText(QApplication::translate("vvMainWindow", "dragable", nullptr));
        actionSet_colormap->setText(QApplication::translate("vvMainWindow", "Set colormap", nullptr));
        actionIsoContours->setText(QApplication::translate("vvMainWindow", "IsoContours", nullptr));
        actionAbouts->setText(QApplication::translate("vvMainWindow", "About QtVTKRender2D", nullptr));
        actionDocumentation->setText(QApplication::translate("vvMainWindow", "About", nullptr));
        actionReload_images->setText(QApplication::translate("vvMainWindow", "Reload images", nullptr));
        actionOpen_Dicom->setText(QApplication::translate("vvMainWindow", "Open Dicom", nullptr));
        actionOpen_Multiple_Images_As_One->setText(QApplication::translate("vvMainWindow", "Merge several nD images into a single (n+1)D image", nullptr));
        actionSlice_Image_As_Multiple_Images->setText(QApplication::translate("vvMainWindow", "Slice a nD image into several (n-1)D images", nullptr));
        actionOpen_one_Image_as_Multiple->setText(QApplication::translate("vvMainWindow", "Open One Image As Multiple", nullptr));
        actionSave_As->setText(QApplication::translate("vvMainWindow", "Save current image", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("vvMainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionAdd_VF_to_current_Image->setText(QApplication::translate("vvMainWindow", "Add deformation field to current image", nullptr));
        actionNorth_West_Window->setText(QApplication::translate("vvMainWindow", "Save image in TL", nullptr));
        actionNorth_East_Window->setText(QApplication::translate("vvMainWindow", "Save image in TR", nullptr));
        actionSouth_West_Window->setText(QApplication::translate("vvMainWindow", "Save image in BL", nullptr));
        actionSouth_East_Window->setText(QApplication::translate("vvMainWindow", "Save image in BR", nullptr));
        actionOpen_Image_With_Time->setText(QApplication::translate("vvMainWindow", "Open a nD image as a (n-1)D + t image", nullptr));
        actionMerge_images_as_n_dim_t->setText(QApplication::translate("vvMainWindow", "Open several nD images into a single nD+t image", nullptr));
        actionAdd_fusion_image->setText(QApplication::translate("vvMainWindow", "Add fusion image to current image", nullptr));
        actionSegmentation->setText(QApplication::translate("vvMainWindow", "Segmentation", nullptr));
        actionResampler->setText(QApplication::translate("vvMainWindow", "Resample", nullptr));
        actionSurface_Viewer->setText(QApplication::translate("vvMainWindow", "Surface Viewer", nullptr));
        actionDebug->setText(QApplication::translate("vvMainWindow", "joelDebug", nullptr));
        actionDeformable_Registration->setText(QApplication::translate("vvMainWindow", "Deformable Registration", nullptr));
        actionWarp_image_with_vector_field->setText(QApplication::translate("vvMainWindow", "Verify Registration", nullptr));
        actionMaximum_Intensity_Projection->setText(QApplication::translate("vvMainWindow", "Maximum Intensity Projection", nullptr));
        actionOpen_VTK_contour->setText(QApplication::translate("vvMainWindow", "Open VTK or OBJ contour", nullptr));
        actionNavigation_Help->setText(QApplication::translate("vvMainWindow", "Navigation Help", nullptr));
        actionOpen_Dicom_Struct->setText(QApplication::translate("vvMainWindow", "Open Dicom-Struct", nullptr));
        actionCompute_mid_position_image->setText(QApplication::translate("vvMainWindow", "Compute mid-position image", nullptr));
        actionExperimental->setText(QApplication::translate("vvMainWindow", "Experimental...", nullptr));
        actionRegister_vv->setText(QApplication::translate("vvMainWindow", "Register vv", nullptr));
        actionSave_all_slices->setText(QApplication::translate("vvMainWindow", "Save all slices (Top-Left view)", nullptr));
        actionSave_current_state->setText(QApplication::translate("vvMainWindow", "Save current state", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_current_state->setToolTip(QApplication::translate("vvMainWindow", "Save current window and file states", nullptr));
#endif // QT_NO_TOOLTIP
        actionRead_saved_state->setText(QApplication::translate("vvMainWindow", "Read Saved State", nullptr));
        actionAdd_overlay_image_to_current_image->setText(QApplication::translate("vvMainWindow", "Add overlay image to current image", nullptr));
        actionAdd_USSequence_toCT->setText(QApplication::translate("vvMainWindow", "Test / Fusion of US & CT sequences", nullptr));
        actionConnect_Pacs->setText(QApplication::translate("vvMainWindow", "Connect Pacs", nullptr));
#ifndef QT_NO_STATUSTIP
        centralwidget->setStatusTip(QApplication::translate("vvMainWindow", "Type 'F1' on image to display help on navigation", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        goToCursorPushButton->setToolTip(QApplication::translate("vvMainWindow", "Go to cursor", nullptr));
#endif // QT_NO_TOOLTIP
        goToCursorPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("vvMainWindow", "Play Current Image", nullptr));
#endif // QT_NO_TOOLTIP
        playButton->setText(QString());
        windowLabel->setText(QApplication::translate("vvMainWindow", "Window :", nullptr));
#ifndef QT_NO_TOOLTIP
        inverseButton->setToolTip(QApplication::translate("vvMainWindow", "Inverse colors", nullptr));
#endif // QT_NO_TOOLTIP
        inverseButton->setText(QString());
        levelLabel->setText(QApplication::translate("vvMainWindow", " Level :", nullptr));
        label->setText(QApplication::translate("vvMainWindow", "Preset :", nullptr));
        presetComboBox->setItemText(0, QApplication::translate("vvMainWindow", "Auto Scale", nullptr));
        presetComboBox->setItemText(1, QApplication::translate("vvMainWindow", "Hounsfield Full Scale", nullptr));
        presetComboBox->setItemText(2, QApplication::translate("vvMainWindow", "Soft Tissue", nullptr));
        presetComboBox->setItemText(3, QApplication::translate("vvMainWindow", "Lungs", nullptr));
        presetComboBox->setItemText(4, QApplication::translate("vvMainWindow", "Bones", nullptr));
        presetComboBox->setItemText(5, QApplication::translate("vvMainWindow", "Head/Brain", nullptr));
        presetComboBox->setItemText(6, QApplication::translate("vvMainWindow", "[0,1] Scale", nullptr));
        presetComboBox->setItemText(7, QApplication::translate("vvMainWindow", "User Scale", nullptr));
        presetComboBox->setItemText(8, QApplication::translate("vvMainWindow", "Ventilation Image", nullptr));

        label_4->setText(QApplication::translate("vvMainWindow", "Colormap :", nullptr));
        colorMapComboBox->setItemText(0, QApplication::translate("vvMainWindow", "B&W", nullptr));
        colorMapComboBox->setItemText(1, QApplication::translate("vvMainWindow", "Heat", nullptr));
        colorMapComboBox->setItemText(2, QApplication::translate("vvMainWindow", "Cold", nullptr));
        colorMapComboBox->setItemText(3, QApplication::translate("vvMainWindow", "Dosimetry", nullptr));
        colorMapComboBox->setItemText(4, QApplication::translate("vvMainWindow", "Full Color", nullptr));
        colorMapComboBox->setItemText(5, QApplication::translate("vvMainWindow", "Segmentation", nullptr));
        colorMapComboBox->setItemText(6, QApplication::translate("vvMainWindow", "Ventilation", nullptr));

#ifndef QT_NO_TOOLTIP
        viewButton->setToolTip(QApplication::translate("vvMainWindow", "Expand window", nullptr));
#endif // QT_NO_TOOLTIP
        viewButton->setText(QString());
        frameRateLabel->setText(QApplication::translate("vvMainWindow", "Speed : ", nullptr));
#ifndef QT_NO_TOOLTIP
        applyWindowLevelToAllButton->setToolTip(QApplication::translate("vvMainWindow", "Apply windowing to all images", nullptr));
#endif // QT_NO_TOOLTIP
        applyWindowLevelToAllButton->setText(QApplication::translate("vvMainWindow", "All", nullptr));
        slicingPresetComboBox->setItemText(0, QApplication::translate("vvMainWindow", "World", nullptr));
        slicingPresetComboBox->setItemText(1, QApplication::translate("vvMainWindow", "Voxels", nullptr));

        label_2->setText(QApplication::translate("vvMainWindow", "Slice to", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = DataTree->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("vvMainWindow", "8", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("vvMainWindow", "6", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("vvMainWindow", "Data", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("vvMainWindow", "4", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("vvMainWindow", "3", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("vvMainWindow", "2", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("vvMainWindow", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DataTab), QApplication::translate("vvMainWindow", "Images", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(VFtab), QApplication::translate("vvMainWindow", "Overlay", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ROItab), QApplication::translate("vvMainWindow", "ROI", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(LinkTab), QApplication::translate("vvMainWindow", "Link", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Landmarkstab), QApplication::translate("vvMainWindow", "Landmarks", nullptr));
        menuHelp->setTitle(QApplication::translate("vvMainWindow", "Help", nullptr));
        menuOverlay->setTitle(QApplication::translate("vvMainWindow", "Overlay", nullptr));
        menuScreenshots->setTitle(QApplication::translate("vvMainWindow", "Screenshots", nullptr));
        menuExperimental->setTitle(QApplication::translate("vvMainWindow", "Experimental", nullptr));
        menuTools->setTitle(QApplication::translate("vvMainWindow", "Tools", nullptr));
        menuFile->setTitle(QApplication::translate("vvMainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvMainWindow: public Ui_vvMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVMAINWINDOWVTK7_H
