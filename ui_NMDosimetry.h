/********************************************************************************
** Form generated from reading UI file 'NMDosimetry.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NMDOSIMETRY_H
#define UI_NMDOSIMETRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_NMDosimetry
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
    QAction *actionCustom_Register;
    QAction *actionReset;
    QAction *actionprp;
    QAction *actionreg;
    QWidget *centralwidget;
    QPushButton *pb_submit;
    QLabel *label_2;
    QPushButton *pb_info;
    QLabel *label_15;
    QComboBox *colorMapComboBox;
    QPushButton *viewButton;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QComboBox *cB_radiopharma;
    QComboBox *cB_gender;
    QLabel *label_23;
    QLineEdit *LE_lung;
    QLabel *label_12;
    QLabel *label_10;
    QLineEdit *LE_age;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_22;
    QLineEdit *LE_height_torso;
    QLabel *label_6;
    QLineEdit *LE_height;
    QLineEdit *LE_effectiveDiam;
    QLabel *label_17;
    QLineEdit *LE_anteroposterior;
    QLabel *label_20;
    QLineEdit *LE_BMI;
    QLabel *label_16;
    QLineEdit *LE_LAT;
    QLabel *label_13;
    QLabel *label_18;
    QLineEdit *LE_weight;
    QLineEdit *LE_activity;
    QLabel *label_11;
    QLabel *label_21;
    QLabel *label_24;
    QLabel *label_4;
    QLabel *label_19;
    QLabel *label_25;
    QLabel *label_3;
    QLineEdit *LE_filename;
    QLabel *label_26;
    QPushButton *pb_clear;
    QSplitter *ESplitter;
    QWidget *NEWidget;
    QGridLayout *_15;
    QSlider *NEVerticalSlider;
    QSlider *NEHorizontalSlider;
    QVTKWidget *NEViewWidget;
    QWidget *SEWidget;
    QGridLayout *_16;
    QSlider *SEVerticalSlider;
    QSlider *SEHorizontalSlider;
    QVTKWidget *SEViewWidget;
    QSplitter *OSplitter;
    QWidget *NOWidget;
    QGridLayout *_13;
    QSlider *NOVerticalSlider;
    QSlider *NOHorizontalSlider;
    QVTKWidget *NOViewWidget;
    QWidget *SOWidget;
    QGridLayout *_14;
    QSlider *SOVerticalSlider;
    QSlider *SOHorizontalSlider;
    QVTKWidget *SOViewWidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NMDosimetry)
    {
        if (NMDosimetry->objectName().isEmpty())
            NMDosimetry->setObjectName(QString::fromUtf8("NMDosimetry"));
        NMDosimetry->resize(1461, 797);
        actionLoad_images = new QAction(NMDosimetry);
        actionLoad_images->setObjectName(QString::fromUtf8("actionLoad_images"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/common/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLoad_images->setIcon(icon);
        actionLoad_images->setIconVisibleInMenu(true);
        actionClose_image = new QAction(NMDosimetry);
        actionClose_image->setObjectName(QString::fromUtf8("actionClose_image"));
        actionExit = new QAction(NMDosimetry);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/common/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionExit->setIconVisibleInMenu(true);
        actionSave_screenshot = new QAction(NMDosimetry);
        actionSave_screenshot->setObjectName(QString::fromUtf8("actionSave_screenshot"));
        actionPickable = new QAction(NMDosimetry);
        actionPickable->setObjectName(QString::fromUtf8("actionPickable"));
        actionDragable = new QAction(NMDosimetry);
        actionDragable->setObjectName(QString::fromUtf8("actionDragable"));
        actionSet_colormap = new QAction(NMDosimetry);
        actionSet_colormap->setObjectName(QString::fromUtf8("actionSet_colormap"));
        actionIsoContours = new QAction(NMDosimetry);
        actionIsoContours->setObjectName(QString::fromUtf8("actionIsoContours"));
        actionAbouts = new QAction(NMDosimetry);
        actionAbouts->setObjectName(QString::fromUtf8("actionAbouts"));
        actionDocumentation = new QAction(NMDosimetry);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionDocumentation->setIconVisibleInMenu(true);
        actionReload_images = new QAction(NMDosimetry);
        actionReload_images->setObjectName(QString::fromUtf8("actionReload_images"));
        actionOpen_Dicom = new QAction(NMDosimetry);
        actionOpen_Dicom->setObjectName(QString::fromUtf8("actionOpen_Dicom"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/common/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Dicom->setIcon(icon2);
        actionOpen_Dicom->setIconVisibleInMenu(true);
        actionOpen_Multiple_Images_As_One = new QAction(NMDosimetry);
        actionOpen_Multiple_Images_As_One->setObjectName(QString::fromUtf8("actionOpen_Multiple_Images_As_One"));
        actionOpen_Multiple_Images_As_One->setIcon(icon2);
        actionOpen_Multiple_Images_As_One->setIconVisibleInMenu(true);
        actionSlice_Image_As_Multiple_Images = new QAction(NMDosimetry);
        actionSlice_Image_As_Multiple_Images->setObjectName(QString::fromUtf8("actionSlice_Image_As_Multiple_Images"));
        actionSlice_Image_As_Multiple_Images->setIcon(icon2);
        actionSlice_Image_As_Multiple_Images->setIconVisibleInMenu(true);
        actionOpen_one_Image_as_Multiple = new QAction(NMDosimetry);
        actionOpen_one_Image_as_Multiple->setObjectName(QString::fromUtf8("actionOpen_one_Image_as_Multiple"));
        actionSave_As = new QAction(NMDosimetry);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/common/icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionSave_As->setIconVisibleInMenu(true);
        actionAdd_VF_to_current_Image = new QAction(NMDosimetry);
        actionAdd_VF_to_current_Image->setObjectName(QString::fromUtf8("actionAdd_VF_to_current_Image"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/common/icons/cursor-uparrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_VF_to_current_Image->setIcon(icon4);
        actionAdd_VF_to_current_Image->setIconVisibleInMenu(true);
        actionNorth_West_Window = new QAction(NMDosimetry);
        actionNorth_West_Window->setObjectName(QString::fromUtf8("actionNorth_West_Window"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/common/icons/NOgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNorth_West_Window->setIcon(icon5);
        actionNorth_West_Window->setIconVisibleInMenu(true);
        actionNorth_East_Window = new QAction(NMDosimetry);
        actionNorth_East_Window->setObjectName(QString::fromUtf8("actionNorth_East_Window"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/common/icons/NEgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNorth_East_Window->setIcon(icon6);
        actionNorth_East_Window->setIconVisibleInMenu(true);
        actionSouth_West_Window = new QAction(NMDosimetry);
        actionSouth_West_Window->setObjectName(QString::fromUtf8("actionSouth_West_Window"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/common/icons/SOgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSouth_West_Window->setIcon(icon7);
        actionSouth_West_Window->setIconVisibleInMenu(true);
        actionSouth_East_Window = new QAction(NMDosimetry);
        actionSouth_East_Window->setObjectName(QString::fromUtf8("actionSouth_East_Window"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/common/icons/SEgrid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSouth_East_Window->setIcon(icon8);
        actionSouth_East_Window->setIconVisibleInMenu(true);
        actionOpen_Image_With_Time = new QAction(NMDosimetry);
        actionOpen_Image_With_Time->setObjectName(QString::fromUtf8("actionOpen_Image_With_Time"));
        actionOpen_Image_With_Time->setIcon(icon2);
        actionOpen_Image_With_Time->setIconVisibleInMenu(true);
        actionMerge_images_as_n_dim_t = new QAction(NMDosimetry);
        actionMerge_images_as_n_dim_t->setObjectName(QString::fromUtf8("actionMerge_images_as_n_dim_t"));
        actionMerge_images_as_n_dim_t->setIcon(icon2);
        actionMerge_images_as_n_dim_t->setIconVisibleInMenu(true);
        actionAdd_fusion_image = new QAction(NMDosimetry);
        actionAdd_fusion_image->setObjectName(QString::fromUtf8("actionAdd_fusion_image"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/common/icons/fusion.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_fusion_image->setIcon(icon9);
        actionAdd_fusion_image->setIconVisibleInMenu(true);
        actionSegmentation = new QAction(NMDosimetry);
        actionSegmentation->setObjectName(QString::fromUtf8("actionSegmentation"));
        actionSegmentation->setIconVisibleInMenu(true);
        actionResampler = new QAction(NMDosimetry);
        actionResampler->setObjectName(QString::fromUtf8("actionResampler"));
        actionSurface_Viewer = new QAction(NMDosimetry);
        actionSurface_Viewer->setObjectName(QString::fromUtf8("actionSurface_Viewer"));
        actionSurface_Viewer->setIconVisibleInMenu(true);
        actionDebug = new QAction(NMDosimetry);
        actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
        actionDeformable_Registration = new QAction(NMDosimetry);
        actionDeformable_Registration->setObjectName(QString::fromUtf8("actionDeformable_Registration"));
        actionDeformable_Registration->setIconVisibleInMenu(true);
        actionWarp_image_with_vector_field = new QAction(NMDosimetry);
        actionWarp_image_with_vector_field->setObjectName(QString::fromUtf8("actionWarp_image_with_vector_field"));
        actionWarp_image_with_vector_field->setIconVisibleInMenu(true);
        actionMaximum_Intensity_Projection = new QAction(NMDosimetry);
        actionMaximum_Intensity_Projection->setObjectName(QString::fromUtf8("actionMaximum_Intensity_Projection"));
        actionOpen_VTK_contour = new QAction(NMDosimetry);
        actionOpen_VTK_contour->setObjectName(QString::fromUtf8("actionOpen_VTK_contour"));
        actionOpen_VTK_contour->setIcon(icon2);
        actionOpen_VTK_contour->setIconVisibleInMenu(true);
        actionNavigation_Help = new QAction(NMDosimetry);
        actionNavigation_Help->setObjectName(QString::fromUtf8("actionNavigation_Help"));
        actionNavigation_Help->setIconVisibleInMenu(true);
        actionNavigation_Help->setPriority(QAction::NormalPriority);
        actionOpen_Dicom_Struct = new QAction(NMDosimetry);
        actionOpen_Dicom_Struct->setObjectName(QString::fromUtf8("actionOpen_Dicom_Struct"));
        actionOpen_Dicom_Struct->setIcon(icon2);
        actionOpen_Dicom_Struct->setIconVisibleInMenu(true);
        actionCompute_mid_position_image = new QAction(NMDosimetry);
        actionCompute_mid_position_image->setObjectName(QString::fromUtf8("actionCompute_mid_position_image"));
        actionCompute_mid_position_image->setIconVisibleInMenu(true);
        actionExperimental = new QAction(NMDosimetry);
        actionExperimental->setObjectName(QString::fromUtf8("actionExperimental"));
        actionRegister_vv = new QAction(NMDosimetry);
        actionRegister_vv->setObjectName(QString::fromUtf8("actionRegister_vv"));
        actionRegister_vv->setIconVisibleInMenu(true);
        actionSave_all_slices = new QAction(NMDosimetry);
        actionSave_all_slices->setObjectName(QString::fromUtf8("actionSave_all_slices"));
        actionSave_current_state = new QAction(NMDosimetry);
        actionSave_current_state->setObjectName(QString::fromUtf8("actionSave_current_state"));
        actionSave_current_state->setIcon(icon3);
        actionSave_current_state->setIconVisibleInMenu(true);
        actionRead_saved_state = new QAction(NMDosimetry);
        actionRead_saved_state->setObjectName(QString::fromUtf8("actionRead_saved_state"));
        actionRead_saved_state->setIcon(icon2);
        actionRead_saved_state->setIconVisibleInMenu(true);
        actionAdd_overlay_image_to_current_image = new QAction(NMDosimetry);
        actionAdd_overlay_image_to_current_image->setObjectName(QString::fromUtf8("actionAdd_overlay_image_to_current_image"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/common/icons/GPSup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_overlay_image_to_current_image->setIcon(icon10);
        actionAdd_overlay_image_to_current_image->setIconVisibleInMenu(true);
        actionAdd_USSequence_toCT = new QAction(NMDosimetry);
        actionAdd_USSequence_toCT->setObjectName(QString::fromUtf8("actionAdd_USSequence_toCT"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/common/icons/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_USSequence_toCT->setIcon(icon11);
        actionAdd_USSequence_toCT->setIconVisibleInMenu(true);
        actionConnect_Pacs = new QAction(NMDosimetry);
        actionConnect_Pacs->setObjectName(QString::fromUtf8("actionConnect_Pacs"));
        actionCustom_Register = new QAction(NMDosimetry);
        actionCustom_Register->setObjectName(QString::fromUtf8("actionCustom_Register"));
        actionReset = new QAction(NMDosimetry);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionprp = new QAction(NMDosimetry);
        actionprp->setObjectName(QString::fromUtf8("actionprp"));
        actionreg = new QAction(NMDosimetry);
        actionreg->setObjectName(QString::fromUtf8("actionreg"));
        centralwidget = new QWidget(NMDosimetry);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pb_submit = new QPushButton(centralwidget);
        pb_submit->setObjectName(QString::fromUtf8("pb_submit"));
        pb_submit->setGeometry(QRect(210, 660, 91, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(860, 710, 251, 17));
        pb_info = new QPushButton(centralwidget);
        pb_info->setObjectName(QString::fromUtf8("pb_info"));
        pb_info->setGeometry(QRect(500, 670, 31, 31));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/icons/icons8-about-26.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_info->setIcon(icon12);
        pb_info->setIconSize(QSize(25, 25));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(790, 25, 81, 31));
        colorMapComboBox = new QComboBox(centralwidget);
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->setObjectName(QString::fromUtf8("colorMapComboBox"));
        colorMapComboBox->setGeometry(QRect(880, 30, 111, 21));
        viewButton = new QPushButton(centralwidget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(340, 660, 101, 41));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1020, 30, 131, 21));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 481, 581));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        cB_radiopharma = new QComboBox(groupBox);
        cB_radiopharma->addItem(QString());
        cB_radiopharma->addItem(QString());
        cB_radiopharma->addItem(QString());
        cB_radiopharma->addItem(QString());
        cB_radiopharma->addItem(QString());
        cB_radiopharma->addItem(QString());
        cB_radiopharma->setObjectName(QString::fromUtf8("cB_radiopharma"));

        gridLayout->addWidget(cB_radiopharma, 12, 2, 1, 1);

        cB_gender = new QComboBox(groupBox);
        cB_gender->addItem(QString());
        cB_gender->addItem(QString());
        cB_gender->setObjectName(QString::fromUtf8("cB_gender"));

        gridLayout->addWidget(cB_gender, 0, 2, 1, 1);

        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout->addWidget(label_23, 11, 0, 1, 1);

        LE_lung = new QLineEdit(groupBox);
        LE_lung->setObjectName(QString::fromUtf8("LE_lung"));

        gridLayout->addWidget(LE_lung, 8, 2, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 5, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        LE_age = new QLineEdit(groupBox);
        LE_age->setObjectName(QString::fromUtf8("LE_age"));

        gridLayout->addWidget(LE_age, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 12, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 7, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 10, 4, 1, 1);

        LE_height_torso = new QLineEdit(groupBox);
        LE_height_torso->setObjectName(QString::fromUtf8("LE_height_torso"));

        gridLayout->addWidget(LE_height_torso, 7, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 2);

        LE_height = new QLineEdit(groupBox);
        LE_height->setObjectName(QString::fromUtf8("LE_height"));

        gridLayout->addWidget(LE_height, 4, 2, 1, 1);

        LE_effectiveDiam = new QLineEdit(groupBox);
        LE_effectiveDiam->setObjectName(QString::fromUtf8("LE_effectiveDiam"));

        gridLayout->addWidget(LE_effectiveDiam, 11, 2, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 6, 0, 1, 1);

        LE_anteroposterior = new QLineEdit(groupBox);
        LE_anteroposterior->setObjectName(QString::fromUtf8("LE_anteroposterior"));

        gridLayout->addWidget(LE_anteroposterior, 9, 2, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 9, 4, 1, 1);

        LE_BMI = new QLineEdit(groupBox);
        LE_BMI->setObjectName(QString::fromUtf8("LE_BMI"));

        gridLayout->addWidget(LE_BMI, 6, 2, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 4, 4, 1, 1);

        LE_LAT = new QLineEdit(groupBox);
        LE_LAT->setObjectName(QString::fromUtf8("LE_LAT"));

        gridLayout->addWidget(LE_LAT, 10, 2, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 8, 4, 1, 1);

        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 5, 4, 1, 1);

        LE_weight = new QLineEdit(groupBox);
        LE_weight->setObjectName(QString::fromUtf8("LE_weight"));

        gridLayout->addWidget(LE_weight, 5, 2, 1, 1);

        LE_activity = new QLineEdit(groupBox);
        LE_activity->setObjectName(QString::fromUtf8("LE_activity"));

        gridLayout->addWidget(LE_activity, 14, 2, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 10, 0, 1, 1);

        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 11, 4, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 14, 0, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 6, 4, 1, 1);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 15, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 14, 4, 1, 1);

        LE_filename = new QLineEdit(groupBox);
        LE_filename->setObjectName(QString::fromUtf8("LE_filename"));

        gridLayout->addWidget(LE_filename, 15, 2, 1, 1);

        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 15, 4, 1, 1);

        pb_clear = new QPushButton(centralwidget);
        pb_clear->setObjectName(QString::fromUtf8("pb_clear"));
        pb_clear->setGeometry(QRect(60, 660, 91, 41));
        ESplitter = new QSplitter(centralwidget);
        ESplitter->setObjectName(QString::fromUtf8("ESplitter"));
        ESplitter->setGeometry(QRect(990, 60, 381, 641));
        ESplitter->setOrientation(Qt::Vertical);
        NEWidget = new QWidget(ESplitter);
        NEWidget->setObjectName(QString::fromUtf8("NEWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NEWidget->sizePolicy().hasHeightForWidth());
        NEWidget->setSizePolicy(sizePolicy);
        _15 = new QGridLayout(NEWidget);
        _15->setSpacing(2);
        _15->setObjectName(QString::fromUtf8("_15"));
        _15->setContentsMargins(2, 2, 2, 2);
        NEVerticalSlider = new QSlider(NEWidget);
        NEVerticalSlider->setObjectName(QString::fromUtf8("NEVerticalSlider"));
        NEVerticalSlider->setOrientation(Qt::Vertical);

        _15->addWidget(NEVerticalSlider, 0, 1, 1, 1);

        NEHorizontalSlider = new QSlider(NEWidget);
        NEHorizontalSlider->setObjectName(QString::fromUtf8("NEHorizontalSlider"));
        NEHorizontalSlider->setOrientation(Qt::Horizontal);

        _15->addWidget(NEHorizontalSlider, 1, 0, 1, 1);

        NEViewWidget = new QVTKWidget(NEWidget);
        NEViewWidget->setObjectName(QString::fromUtf8("NEViewWidget"));
        NEViewWidget->setMouseTracking(true);

        _15->addWidget(NEViewWidget, 0, 0, 1, 1);

        ESplitter->addWidget(NEWidget);
        SEWidget = new QWidget(ESplitter);
        SEWidget->setObjectName(QString::fromUtf8("SEWidget"));
        sizePolicy.setHeightForWidth(SEWidget->sizePolicy().hasHeightForWidth());
        SEWidget->setSizePolicy(sizePolicy);
        _16 = new QGridLayout(SEWidget);
        _16->setSpacing(2);
        _16->setObjectName(QString::fromUtf8("_16"));
        _16->setContentsMargins(2, 2, 2, 2);
        SEVerticalSlider = new QSlider(SEWidget);
        SEVerticalSlider->setObjectName(QString::fromUtf8("SEVerticalSlider"));
        SEVerticalSlider->setOrientation(Qt::Vertical);

        _16->addWidget(SEVerticalSlider, 0, 1, 1, 1);

        SEHorizontalSlider = new QSlider(SEWidget);
        SEHorizontalSlider->setObjectName(QString::fromUtf8("SEHorizontalSlider"));
        SEHorizontalSlider->setOrientation(Qt::Horizontal);

        _16->addWidget(SEHorizontalSlider, 1, 0, 1, 1);

        SEViewWidget = new QVTKWidget(SEWidget);
        SEViewWidget->setObjectName(QString::fromUtf8("SEViewWidget"));
        sizePolicy.setHeightForWidth(SEViewWidget->sizePolicy().hasHeightForWidth());
        SEViewWidget->setSizePolicy(sizePolicy);
        SEViewWidget->setMouseTracking(true);

        _16->addWidget(SEViewWidget, 0, 0, 1, 1);

        ESplitter->addWidget(SEWidget);
        OSplitter = new QSplitter(centralwidget);
        OSplitter->setObjectName(QString::fromUtf8("OSplitter"));
        OSplitter->setGeometry(QRect(590, 60, 401, 641));
        OSplitter->setOrientation(Qt::Vertical);
        NOWidget = new QWidget(OSplitter);
        NOWidget->setObjectName(QString::fromUtf8("NOWidget"));
        sizePolicy.setHeightForWidth(NOWidget->sizePolicy().hasHeightForWidth());
        NOWidget->setSizePolicy(sizePolicy);
        _13 = new QGridLayout(NOWidget);
        _13->setObjectName(QString::fromUtf8("_13"));
        _13->setHorizontalSpacing(2);
        _13->setContentsMargins(2, 2, 2, 2);
        NOVerticalSlider = new QSlider(NOWidget);
        NOVerticalSlider->setObjectName(QString::fromUtf8("NOVerticalSlider"));
        NOVerticalSlider->setOrientation(Qt::Vertical);

        _13->addWidget(NOVerticalSlider, 0, 1, 1, 1);

        NOHorizontalSlider = new QSlider(NOWidget);
        NOHorizontalSlider->setObjectName(QString::fromUtf8("NOHorizontalSlider"));
        NOHorizontalSlider->setOrientation(Qt::Horizontal);

        _13->addWidget(NOHorizontalSlider, 1, 0, 1, 1);

        NOViewWidget = new QVTKWidget(NOWidget);
        NOViewWidget->setObjectName(QString::fromUtf8("NOViewWidget"));
        NOViewWidget->setMouseTracking(true);

        _13->addWidget(NOViewWidget, 0, 0, 1, 1);

        OSplitter->addWidget(NOWidget);
        SOWidget = new QWidget(OSplitter);
        SOWidget->setObjectName(QString::fromUtf8("SOWidget"));
        sizePolicy.setHeightForWidth(SOWidget->sizePolicy().hasHeightForWidth());
        SOWidget->setSizePolicy(sizePolicy);
        SOWidget->setFocusPolicy(Qt::NoFocus);
        _14 = new QGridLayout(SOWidget);
        _14->setSpacing(2);
        _14->setObjectName(QString::fromUtf8("_14"));
        _14->setContentsMargins(2, 2, 2, 2);
        SOVerticalSlider = new QSlider(SOWidget);
        SOVerticalSlider->setObjectName(QString::fromUtf8("SOVerticalSlider"));
        SOVerticalSlider->setOrientation(Qt::Vertical);

        _14->addWidget(SOVerticalSlider, 0, 1, 1, 1);

        SOHorizontalSlider = new QSlider(SOWidget);
        SOHorizontalSlider->setObjectName(QString::fromUtf8("SOHorizontalSlider"));
        SOHorizontalSlider->setOrientation(Qt::Horizontal);

        _14->addWidget(SOHorizontalSlider, 1, 0, 1, 1);

        SOViewWidget = new QVTKWidget(SOWidget);
        SOViewWidget->setObjectName(QString::fromUtf8("SOViewWidget"));
        SOViewWidget->setMouseTracking(true);

        _14->addWidget(SOViewWidget, 0, 0, 1, 1);

        OSplitter->addWidget(SOWidget);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(560, 10, 211, 17));
        NMDosimetry->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NMDosimetry);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1461, 22));
        menubar->setDefaultUp(false);
        NMDosimetry->setMenuBar(menubar);
        statusbar = new QStatusBar(NMDosimetry);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NMDosimetry->setStatusBar(statusbar);

        retranslateUi(NMDosimetry);

        cB_radiopharma->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(NMDosimetry);
    } // setupUi

    void retranslateUi(QMainWindow *NMDosimetry)
    {
        NMDosimetry->setWindowTitle(QApplication::translate("NMDosimetry", "NMDosimetry", nullptr));
        actionLoad_images->setText(QApplication::translate("NMDosimetry", "Open image(s)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLoad_images->setShortcut(QApplication::translate("NMDosimetry", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose_image->setText(QApplication::translate("NMDosimetry", "Close images", nullptr));
        actionExit->setText(QApplication::translate("NMDosimetry", "Exit", nullptr));
        actionSave_screenshot->setText(QApplication::translate("NMDosimetry", "Save screenshot", nullptr));
        actionPickable->setText(QApplication::translate("NMDosimetry", "pickable", nullptr));
        actionDragable->setText(QApplication::translate("NMDosimetry", "dragable", nullptr));
        actionSet_colormap->setText(QApplication::translate("NMDosimetry", "Set colormap", nullptr));
        actionIsoContours->setText(QApplication::translate("NMDosimetry", "IsoContours", nullptr));
        actionAbouts->setText(QApplication::translate("NMDosimetry", "About QtVTKRender2D", nullptr));
        actionDocumentation->setText(QApplication::translate("NMDosimetry", "About", nullptr));
        actionReload_images->setText(QApplication::translate("NMDosimetry", "Reload images", nullptr));
        actionOpen_Dicom->setText(QApplication::translate("NMDosimetry", "Open Dicom", nullptr));
        actionOpen_Multiple_Images_As_One->setText(QApplication::translate("NMDosimetry", "Merge several nD images into a single (n+1)D image", nullptr));
        actionSlice_Image_As_Multiple_Images->setText(QApplication::translate("NMDosimetry", "Slice a nD image into several (n-1)D images", nullptr));
        actionOpen_one_Image_as_Multiple->setText(QApplication::translate("NMDosimetry", "Open One Image As Multiple", nullptr));
        actionSave_As->setText(QApplication::translate("NMDosimetry", "Save current image", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("NMDosimetry", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionAdd_VF_to_current_Image->setText(QApplication::translate("NMDosimetry", "Add deformation field to current image", nullptr));
        actionNorth_West_Window->setText(QApplication::translate("NMDosimetry", "Save image in TL", nullptr));
        actionNorth_East_Window->setText(QApplication::translate("NMDosimetry", "Save image in TR", nullptr));
        actionSouth_West_Window->setText(QApplication::translate("NMDosimetry", "Save image in BL", nullptr));
        actionSouth_East_Window->setText(QApplication::translate("NMDosimetry", "Save image in BR", nullptr));
        actionOpen_Image_With_Time->setText(QApplication::translate("NMDosimetry", "Open a nD image as a (n-1)D + t image", nullptr));
        actionMerge_images_as_n_dim_t->setText(QApplication::translate("NMDosimetry", "Open several nD images into a single nD+t image", nullptr));
        actionAdd_fusion_image->setText(QApplication::translate("NMDosimetry", "Add fusion image to current image", nullptr));
        actionSegmentation->setText(QApplication::translate("NMDosimetry", "Segmentation", nullptr));
        actionResampler->setText(QApplication::translate("NMDosimetry", "Resample", nullptr));
        actionSurface_Viewer->setText(QApplication::translate("NMDosimetry", "Surface Viewer", nullptr));
        actionDebug->setText(QApplication::translate("NMDosimetry", "joelDebug", nullptr));
        actionDeformable_Registration->setText(QApplication::translate("NMDosimetry", "Deformable Registration", nullptr));
        actionWarp_image_with_vector_field->setText(QApplication::translate("NMDosimetry", "Verify Registration", nullptr));
        actionMaximum_Intensity_Projection->setText(QApplication::translate("NMDosimetry", "Maximum Intensity Projection", nullptr));
        actionOpen_VTK_contour->setText(QApplication::translate("NMDosimetry", "Open VTK or OBJ contour", nullptr));
        actionNavigation_Help->setText(QApplication::translate("NMDosimetry", "Navigation Help", nullptr));
        actionOpen_Dicom_Struct->setText(QApplication::translate("NMDosimetry", "Open Dicom-Struct", nullptr));
        actionCompute_mid_position_image->setText(QApplication::translate("NMDosimetry", "Compute mid-position image", nullptr));
        actionExperimental->setText(QApplication::translate("NMDosimetry", "Experimental...", nullptr));
        actionRegister_vv->setText(QApplication::translate("NMDosimetry", "Register vv", nullptr));
        actionSave_all_slices->setText(QApplication::translate("NMDosimetry", "Save all slices (Top-Left view)", nullptr));
        actionSave_current_state->setText(QApplication::translate("NMDosimetry", "Save current state", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_current_state->setToolTip(QApplication::translate("NMDosimetry", "Save current window and file states", nullptr));
#endif // QT_NO_TOOLTIP
        actionRead_saved_state->setText(QApplication::translate("NMDosimetry", "Read Saved State", nullptr));
        actionAdd_overlay_image_to_current_image->setText(QApplication::translate("NMDosimetry", "Add overlay image to current image", nullptr));
        actionAdd_USSequence_toCT->setText(QApplication::translate("NMDosimetry", "Test / Fusion of US & CT sequences", nullptr));
        actionConnect_Pacs->setText(QApplication::translate("NMDosimetry", "Connect Pacs", nullptr));
        actionCustom_Register->setText(QApplication::translate("NMDosimetry", "Custom Register", nullptr));
        actionReset->setText(QApplication::translate("NMDosimetry", "Reset", nullptr));
        actionprp->setText(QApplication::translate("NMDosimetry", "prpO", nullptr));
        actionreg->setText(QApplication::translate("NMDosimetry", "reg", nullptr));
        pb_submit->setText(QApplication::translate("NMDosimetry", "Submit", nullptr));
        label_2->setText(QApplication::translate("NMDosimetry", "<html><head/><body><p align=\"center\">Model Viewer</p></body></html>", nullptr));
        pb_info->setText(QString());
        label_15->setText(QApplication::translate("NMDosimetry", "Colormap :", nullptr));
        colorMapComboBox->setItemText(0, QApplication::translate("NMDosimetry", "GrayScale", nullptr));
        colorMapComboBox->setItemText(1, QApplication::translate("NMDosimetry", "Heat", nullptr));
        colorMapComboBox->setItemText(2, QApplication::translate("NMDosimetry", "Cold", nullptr));
        colorMapComboBox->setItemText(3, QApplication::translate("NMDosimetry", "Dosimetry", nullptr));
        colorMapComboBox->setItemText(4, QApplication::translate("NMDosimetry", "Full Color", nullptr));
        colorMapComboBox->setItemText(5, QApplication::translate("NMDosimetry", "Segmentation", nullptr));

        colorMapComboBox->setCurrentText(QApplication::translate("NMDosimetry", "GrayScale", nullptr));
        viewButton->setText(QApplication::translate("NMDosimetry", "Enlarge", nullptr));
        comboBox->setItemText(0, QApplication::translate("NMDosimetry", "Anatomy", nullptr));
        comboBox->setItemText(1, QApplication::translate("NMDosimetry", "Dose", nullptr));
        comboBox->setItemText(2, QApplication::translate("NMDosimetry", "Fusion", nullptr));

        groupBox->setTitle(QApplication::translate("NMDosimetry", "Patient Information:", nullptr));
        label_8->setText(QApplication::translate("NMDosimetry", "Anteroposterior Thickness:", nullptr));
        cB_radiopharma->setItemText(0, QApplication::translate("NMDosimetry", "131I_NaI_p1", nullptr));
        cB_radiopharma->setItemText(1, QApplication::translate("NMDosimetry", "131I_NaI_p2", nullptr));
        cB_radiopharma->setItemText(2, QApplication::translate("NMDosimetry", "153Sm_EDTMP", nullptr));
        cB_radiopharma->setItemText(3, QApplication::translate("NMDosimetry", "131I_mIBG", nullptr));
        cB_radiopharma->setItemText(4, QApplication::translate("NMDosimetry", "I123_mIBG", nullptr));
        cB_radiopharma->setItemText(5, QApplication::translate("NMDosimetry", "Tc99m_MDP", nullptr));

        cB_gender->setItemText(0, QApplication::translate("NMDosimetry", "Male", nullptr));
        cB_gender->setItemText(1, QApplication::translate("NMDosimetry", "Female", nullptr));

        label_23->setText(QApplication::translate("NMDosimetry", "Effective Diameter:", nullptr));
        label_12->setText(QApplication::translate("NMDosimetry", "Weight:", nullptr));
        label_10->setText(QApplication::translate("NMDosimetry", "Age:", nullptr));
        label_5->setText(QApplication::translate("NMDosimetry", "Radio Pharmaceutical:", nullptr));
        label_9->setText(QApplication::translate("NMDosimetry", "Gender:", nullptr));
        label_14->setText(QApplication::translate("NMDosimetry", "cm", nullptr));
        label_7->setText(QApplication::translate("NMDosimetry", "Lung's Length:", nullptr));
        label_22->setText(QApplication::translate("NMDosimetry", "cm", nullptr));
        label_6->setText(QApplication::translate("NMDosimetry", "Height Torso to Top:", nullptr));
        label_17->setText(QApplication::translate("NMDosimetry", "BMI:", nullptr));
        label_20->setText(QApplication::translate("NMDosimetry", "cm", nullptr));
        label_16->setText(QApplication::translate("NMDosimetry", "cm", nullptr));
        label_13->setText(QApplication::translate("NMDosimetry", "cm", nullptr));
        label_18->setText(QApplication::translate("NMDosimetry", "kg", nullptr));
        label_11->setText(QApplication::translate("NMDosimetry", "Total Height:", nullptr));
        label_21->setText(QApplication::translate("NMDosimetry", "LAT:", nullptr));
        label_24->setText(QApplication::translate("NMDosimetry", "cm", nullptr));
        label_4->setText(QApplication::translate("NMDosimetry", "Activity:", nullptr));
        label_19->setText(QApplication::translate("NMDosimetry", "kg/m\302\262", nullptr));
        label_25->setText(QApplication::translate("NMDosimetry", "Export PDF Filename:", nullptr));
        label_3->setText(QApplication::translate("NMDosimetry", "MBq", nullptr));
        label_26->setText(QApplication::translate("NMDosimetry", ".pdf", nullptr));
        pb_clear->setText(QApplication::translate("NMDosimetry", "Clear", nullptr));
        label->setText(QApplication::translate("NMDosimetry", "<html><head/><body><p align=\"center\">NM Dosimetry</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NMDosimetry: public Ui_NMDosimetry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NMDOSIMETRY_H
