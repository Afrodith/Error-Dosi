/********************************************************************************
** Form generated from reading UI file 'CTDosimetry.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTDOSIMETRY_H
#define UI_CTDOSIMETRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_CTDosimetry
{
public:
    QWidget *centralwidget;
    QLabel *label_7;
    QPushButton *pb_submit;
    QComboBox *comboBox;
    QLabel *label_15;
    QLabel *label_5;
    QLabel *label;
    QComboBox *cB_kev;
    QLabel *label_6;
    QComboBox *cB_protocol;
    QPushButton *pb_info;
    QLabel *label_2;
    QPushButton *viewButton;
    QComboBox *colorMapComboBox;
    QComboBox *cB_man;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_42;
    QLabel *label_44;
    QLineEdit *LE_weight;
    QLabel *label_50;
    QLabel *label_38;
    QLabel *label_40;
    QLabel *label_37;
    QLabel *label_4;
    QLineEdit *LE_anteroposterior;
    QLabel *label_46;
    QLabel *label_49;
    QLineEdit *LE_lung;
    QLabel *label_11;
    QLineEdit *LE_CTDi;
    QLabel *label_47;
    QLabel *label_13;
    QLineEdit *LE_LAT;
    QLabel *label_39;
    QLabel *label_3;
    QLabel *label_36;
    QLineEdit *LE_effectiveDiam;
    QLineEdit *LE_age;
    QLineEdit *LE_mAs;
    QLabel *label_9;
    QLabel *label_45;
    QLineEdit *LE_BMI;
    QLabel *label_43;
    QLineEdit *LE_filename;
    QLineEdit *LE_height;
    QLineEdit *LE_height_torso;
    QLabel *label_41;
    QLabel *label_25;
    QComboBox *cB_gender;
    QLabel *label_8;
    QLabel *label_10;
    QSplitter *OSplitter;
    QWidget *NOWidget;
    QGridLayout *_19;
    QSlider *NOHorizontalSlider;
    QSlider *NOVerticalSlider;
    QVTKWidget *NOViewWidget;
    QWidget *SOWidget;
    QGridLayout *_20;
    QVTKWidget *SOViewWidget;
    QSlider *SOVerticalSlider;
    QSlider *SOHorizontalSlider;
    QSplitter *ESplitter;
    QWidget *NEWidget;
    QGridLayout *_17;
    QVTKWidget *NEViewWidget;
    QSlider *NEVerticalSlider;
    QSlider *NEHorizontalSlider;
    QWidget *SEWidget;
    QGridLayout *_18;
    QVTKWidget *SEViewWidget;
    QSlider *SEVerticalSlider;
    QSlider *SEHorizontalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CTDosimetry)
    {
        if (CTDosimetry->objectName().isEmpty())
            CTDosimetry->setObjectName(QString::fromUtf8("CTDosimetry"));
        CTDosimetry->resize(1280, 832);
        centralwidget = new QWidget(CTDosimetry);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(410, 500, 67, 17));
        pb_submit = new QPushButton(centralwidget);
        pb_submit->setObjectName(QString::fromUtf8("pb_submit"));
        pb_submit->setEnabled(true);
        pb_submit->setGeometry(QRect(140, 600, 91, 41));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(880, 40, 111, 21));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(590, 40, 81, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 500, 171, 17));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 10, 211, 17));
        cB_kev = new QComboBox(centralwidget);
        cB_kev->addItem(QString());
        cB_kev->addItem(QString());
        cB_kev->setObjectName(QString::fromUtf8("cB_kev"));
        cB_kev->setGeometry(QRect(410, 520, 125, 25));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(240, 500, 121, 17));
        cB_protocol = new QComboBox(centralwidget);
        cB_protocol->addItem(QString());
        cB_protocol->addItem(QString());
        cB_protocol->addItem(QString());
        cB_protocol->setObjectName(QString::fromUtf8("cB_protocol"));
        cB_protocol->setGeometry(QRect(240, 520, 125, 25));
        pb_info = new QPushButton(centralwidget);
        pb_info->setObjectName(QString::fromUtf8("pb_info"));
        pb_info->setGeometry(QRect(430, 610, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/icons8-about-26.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_info->setIcon(icon);
        pb_info->setIconSize(QSize(25, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(680, 620, 401, 20));
        viewButton = new QPushButton(centralwidget);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(280, 600, 101, 41));
        colorMapComboBox = new QComboBox(centralwidget);
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->addItem(QString());
        colorMapComboBox->setObjectName(QString::fromUtf8("colorMapComboBox"));
        colorMapComboBox->setGeometry(QRect(680, 40, 111, 21));
        cB_man = new QComboBox(centralwidget);
        cB_man->addItem(QString());
        cB_man->setObjectName(QString::fromUtf8("cB_man"));
        cB_man->setGeometry(QRect(20, 520, 151, 25));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 421, 421));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_2->addWidget(label_42, 7, 0, 1, 1);

        label_44 = new QLabel(groupBox);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_2->addWidget(label_44, 5, 4, 1, 1);

        LE_weight = new QLineEdit(groupBox);
        LE_weight->setObjectName(QString::fromUtf8("LE_weight"));

        gridLayout_2->addWidget(LE_weight, 4, 2, 1, 1);

        label_50 = new QLabel(groupBox);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_2->addWidget(label_50, 10, 4, 1, 1);

        label_38 = new QLabel(groupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_2->addWidget(label_38, 5, 0, 1, 1);

        label_40 = new QLabel(groupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        gridLayout_2->addWidget(label_40, 4, 0, 1, 1);

        label_37 = new QLabel(groupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_2->addWidget(label_37, 8, 4, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 12, 0, 1, 1);

        LE_anteroposterior = new QLineEdit(groupBox);
        LE_anteroposterior->setObjectName(QString::fromUtf8("LE_anteroposterior"));

        gridLayout_2->addWidget(LE_anteroposterior, 8, 2, 1, 1);

        label_46 = new QLabel(groupBox);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_2->addWidget(label_46, 4, 4, 1, 1);

        label_49 = new QLabel(groupBox);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_2->addWidget(label_49, 10, 0, 1, 1);

        LE_lung = new QLineEdit(groupBox);
        LE_lung->setObjectName(QString::fromUtf8("LE_lung"));

        gridLayout_2->addWidget(LE_lung, 7, 2, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        LE_CTDi = new QLineEdit(groupBox);
        LE_CTDi->setObjectName(QString::fromUtf8("LE_CTDi"));

        gridLayout_2->addWidget(LE_CTDi, 11, 2, 1, 1);

        label_47 = new QLabel(groupBox);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_2->addWidget(label_47, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 7, 4, 1, 1);

        LE_LAT = new QLineEdit(groupBox);
        LE_LAT->setObjectName(QString::fromUtf8("LE_LAT"));

        gridLayout_2->addWidget(LE_LAT, 9, 2, 1, 1);

        label_39 = new QLabel(groupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_2->addWidget(label_39, 6, 4, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 11, 0, 1, 1);

        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_2->addWidget(label_36, 9, 0, 1, 1);

        LE_effectiveDiam = new QLineEdit(groupBox);
        LE_effectiveDiam->setObjectName(QString::fromUtf8("LE_effectiveDiam"));

        gridLayout_2->addWidget(LE_effectiveDiam, 10, 2, 1, 1);

        LE_age = new QLineEdit(groupBox);
        LE_age->setObjectName(QString::fromUtf8("LE_age"));

        gridLayout_2->addWidget(LE_age, 1, 2, 1, 1);

        LE_mAs = new QLineEdit(groupBox);
        LE_mAs->setObjectName(QString::fromUtf8("LE_mAs"));

        gridLayout_2->addWidget(LE_mAs, 12, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_45 = new QLabel(groupBox);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_2->addWidget(label_45, 9, 4, 1, 1);

        LE_BMI = new QLineEdit(groupBox);
        LE_BMI->setObjectName(QString::fromUtf8("LE_BMI"));

        gridLayout_2->addWidget(LE_BMI, 5, 2, 1, 1);

        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_2->addWidget(label_43, 3, 4, 1, 1);

        LE_filename = new QLineEdit(groupBox);
        LE_filename->setObjectName(QString::fromUtf8("LE_filename"));

        gridLayout_2->addWidget(LE_filename, 14, 2, 1, 1);

        LE_height = new QLineEdit(groupBox);
        LE_height->setObjectName(QString::fromUtf8("LE_height"));

        gridLayout_2->addWidget(LE_height, 3, 2, 1, 1);

        LE_height_torso = new QLineEdit(groupBox);
        LE_height_torso->setObjectName(QString::fromUtf8("LE_height_torso"));

        gridLayout_2->addWidget(LE_height_torso, 6, 2, 1, 1);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_2->addWidget(label_41, 6, 0, 1, 2);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 14, 0, 1, 1);

        cB_gender = new QComboBox(groupBox);
        cB_gender->addItem(QString());
        cB_gender->addItem(QString());
        cB_gender->setObjectName(QString::fromUtf8("cB_gender"));

        gridLayout_2->addWidget(cB_gender, 0, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 8, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 14, 4, 1, 1);

        OSplitter = new QSplitter(centralwidget);
        OSplitter->setObjectName(QString::fromUtf8("OSplitter"));
        OSplitter->setGeometry(QRect(590, 70, 291, 521));
        OSplitter->setOrientation(Qt::Vertical);
        NOWidget = new QWidget(OSplitter);
        NOWidget->setObjectName(QString::fromUtf8("NOWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NOWidget->sizePolicy().hasHeightForWidth());
        NOWidget->setSizePolicy(sizePolicy);
        _19 = new QGridLayout(NOWidget);
        _19->setObjectName(QString::fromUtf8("_19"));
        _19->setHorizontalSpacing(2);
        _19->setContentsMargins(2, 2, 2, 2);
        NOHorizontalSlider = new QSlider(NOWidget);
        NOHorizontalSlider->setObjectName(QString::fromUtf8("NOHorizontalSlider"));
        NOHorizontalSlider->setOrientation(Qt::Horizontal);

        _19->addWidget(NOHorizontalSlider, 1, 0, 1, 1);

        NOVerticalSlider = new QSlider(NOWidget);
        NOVerticalSlider->setObjectName(QString::fromUtf8("NOVerticalSlider"));
        NOVerticalSlider->setOrientation(Qt::Vertical);

        _19->addWidget(NOVerticalSlider, 0, 1, 1, 1);

        NOViewWidget = new QVTKWidget(NOWidget);
        NOViewWidget->setObjectName(QString::fromUtf8("NOViewWidget"));
        NOViewWidget->setMouseTracking(true);

        _19->addWidget(NOViewWidget, 0, 0, 1, 1);

        OSplitter->addWidget(NOWidget);
        SOWidget = new QWidget(OSplitter);
        SOWidget->setObjectName(QString::fromUtf8("SOWidget"));
        sizePolicy.setHeightForWidth(SOWidget->sizePolicy().hasHeightForWidth());
        SOWidget->setSizePolicy(sizePolicy);
        SOWidget->setFocusPolicy(Qt::NoFocus);
        _20 = new QGridLayout(SOWidget);
        _20->setSpacing(2);
        _20->setObjectName(QString::fromUtf8("_20"));
        _20->setContentsMargins(2, 2, 2, 2);
        SOViewWidget = new QVTKWidget(SOWidget);
        SOViewWidget->setObjectName(QString::fromUtf8("SOViewWidget"));
        SOViewWidget->setMouseTracking(true);

        _20->addWidget(SOViewWidget, 0, 0, 1, 1);

        SOVerticalSlider = new QSlider(SOWidget);
        SOVerticalSlider->setObjectName(QString::fromUtf8("SOVerticalSlider"));
        SOVerticalSlider->setOrientation(Qt::Vertical);

        _20->addWidget(SOVerticalSlider, 0, 1, 1, 1);

        SOHorizontalSlider = new QSlider(SOWidget);
        SOHorizontalSlider->setObjectName(QString::fromUtf8("SOHorizontalSlider"));
        SOHorizontalSlider->setOrientation(Qt::Horizontal);

        _20->addWidget(SOHorizontalSlider, 1, 0, 1, 1);

        OSplitter->addWidget(SOWidget);
        ESplitter = new QSplitter(centralwidget);
        ESplitter->setObjectName(QString::fromUtf8("ESplitter"));
        ESplitter->setGeometry(QRect(880, 70, 291, 521));
        ESplitter->setOrientation(Qt::Vertical);
        NEWidget = new QWidget(ESplitter);
        NEWidget->setObjectName(QString::fromUtf8("NEWidget"));
        sizePolicy.setHeightForWidth(NEWidget->sizePolicy().hasHeightForWidth());
        NEWidget->setSizePolicy(sizePolicy);
        _17 = new QGridLayout(NEWidget);
        _17->setSpacing(2);
        _17->setObjectName(QString::fromUtf8("_17"));
        _17->setContentsMargins(2, 2, 2, 2);
        NEViewWidget = new QVTKWidget(NEWidget);
        NEViewWidget->setObjectName(QString::fromUtf8("NEViewWidget"));
        NEViewWidget->setMouseTracking(true);

        _17->addWidget(NEViewWidget, 0, 0, 1, 1);

        NEVerticalSlider = new QSlider(NEWidget);
        NEVerticalSlider->setObjectName(QString::fromUtf8("NEVerticalSlider"));
        NEVerticalSlider->setOrientation(Qt::Vertical);

        _17->addWidget(NEVerticalSlider, 0, 1, 1, 1);

        NEHorizontalSlider = new QSlider(NEWidget);
        NEHorizontalSlider->setObjectName(QString::fromUtf8("NEHorizontalSlider"));
        NEHorizontalSlider->setOrientation(Qt::Horizontal);

        _17->addWidget(NEHorizontalSlider, 1, 0, 1, 1);

        ESplitter->addWidget(NEWidget);
        SEWidget = new QWidget(ESplitter);
        SEWidget->setObjectName(QString::fromUtf8("SEWidget"));
        sizePolicy.setHeightForWidth(SEWidget->sizePolicy().hasHeightForWidth());
        SEWidget->setSizePolicy(sizePolicy);
        _18 = new QGridLayout(SEWidget);
        _18->setSpacing(2);
        _18->setObjectName(QString::fromUtf8("_18"));
        _18->setContentsMargins(2, 2, 2, 2);
        SEViewWidget = new QVTKWidget(SEWidget);
        SEViewWidget->setObjectName(QString::fromUtf8("SEViewWidget"));
        sizePolicy.setHeightForWidth(SEViewWidget->sizePolicy().hasHeightForWidth());
        SEViewWidget->setSizePolicy(sizePolicy);
        SEViewWidget->setMouseTracking(true);

        _18->addWidget(SEViewWidget, 0, 0, 1, 1);

        SEVerticalSlider = new QSlider(SEWidget);
        SEVerticalSlider->setObjectName(QString::fromUtf8("SEVerticalSlider"));
        SEVerticalSlider->setOrientation(Qt::Vertical);

        _18->addWidget(SEVerticalSlider, 0, 1, 1, 1);

        SEHorizontalSlider = new QSlider(SEWidget);
        SEHorizontalSlider->setObjectName(QString::fromUtf8("SEHorizontalSlider"));
        SEHorizontalSlider->setOrientation(Qt::Horizontal);

        _18->addWidget(SEHorizontalSlider, 1, 0, 1, 1);

        ESplitter->addWidget(SEWidget);
        CTDosimetry->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CTDosimetry);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        CTDosimetry->setMenuBar(menubar);
        statusbar = new QStatusBar(CTDosimetry);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CTDosimetry->setStatusBar(statusbar);

        retranslateUi(CTDosimetry);

        cB_kev->setCurrentIndex(-1);
        cB_protocol->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CTDosimetry);
    } // setupUi

    void retranslateUi(QMainWindow *CTDosimetry)
    {
        CTDosimetry->setWindowTitle(QApplication::translate("CTDosimetry", "MainWindow", nullptr));
        label_7->setText(QApplication::translate("CTDosimetry", "kVp:", nullptr));
        pb_submit->setText(QApplication::translate("CTDosimetry", "Submit", nullptr));
        comboBox->setItemText(0, QApplication::translate("CTDosimetry", "Anatomy", nullptr));
        comboBox->setItemText(1, QApplication::translate("CTDosimetry", "Dose", nullptr));
        comboBox->setItemText(2, QApplication::translate("CTDosimetry", "Fusion", nullptr));

        label_15->setText(QApplication::translate("CTDosimetry", "Colormap :", nullptr));
        label_5->setText(QApplication::translate("CTDosimetry", "Scanner Manufacturer:", nullptr));
        label->setText(QApplication::translate("CTDosimetry", "<html><head/><body><p align=\"center\">CT  Dosimetry</p></body></html>", nullptr));
        cB_kev->setItemText(0, QApplication::translate("CTDosimetry", "100", nullptr));
        cB_kev->setItemText(1, QApplication::translate("CTDosimetry", "120", nullptr));

        label_6->setText(QApplication::translate("CTDosimetry", "Clinical Protocol:", nullptr));
        cB_protocol->setItemText(0, QApplication::translate("CTDosimetry", "Chest", nullptr));
        cB_protocol->setItemText(1, QApplication::translate("CTDosimetry", "Abdomen", nullptr));
        cB_protocol->setItemText(2, QApplication::translate("CTDosimetry", "Head", nullptr));

        pb_info->setText(QString());
        label_2->setText(QApplication::translate("CTDosimetry", "<html><head/><body><p align=\"center\">Model Viewer</p></body></html>", nullptr));
        viewButton->setText(QApplication::translate("CTDosimetry", "Enlarge", nullptr));
        colorMapComboBox->setItemText(0, QApplication::translate("CTDosimetry", "GrayScale", nullptr));
        colorMapComboBox->setItemText(1, QApplication::translate("CTDosimetry", "Heat", nullptr));
        colorMapComboBox->setItemText(2, QApplication::translate("CTDosimetry", "Cold", nullptr));
        colorMapComboBox->setItemText(3, QApplication::translate("CTDosimetry", "Dosimetry", nullptr));
        colorMapComboBox->setItemText(4, QApplication::translate("CTDosimetry", "Full Color", nullptr));
        colorMapComboBox->setItemText(5, QApplication::translate("CTDosimetry", "Segmentation", nullptr));
        colorMapComboBox->setItemText(6, QApplication::translate("CTDosimetry", "Ventilation", nullptr));

        colorMapComboBox->setCurrentText(QApplication::translate("CTDosimetry", "GrayScale", nullptr));
        cB_man->setItemText(0, QApplication::translate("CTDosimetry", "Philips", nullptr));

        groupBox->setTitle(QApplication::translate("CTDosimetry", "Patient Information:", nullptr));
        label_42->setText(QApplication::translate("CTDosimetry", "Lung's Length:", nullptr));
        label_44->setText(QApplication::translate("CTDosimetry", "kg/m\302\262", nullptr));
        label_50->setText(QApplication::translate("CTDosimetry", "cm", nullptr));
        label_38->setText(QApplication::translate("CTDosimetry", "BMI:", nullptr));
        label_40->setText(QApplication::translate("CTDosimetry", "Weight:", nullptr));
        label_37->setText(QApplication::translate("CTDosimetry", "cm", nullptr));
        label_4->setText(QApplication::translate("CTDosimetry", "mAs:", nullptr));
        label_46->setText(QApplication::translate("CTDosimetry", "kg", nullptr));
        label_49->setText(QApplication::translate("CTDosimetry", "Effective Diameter:", nullptr));
        label_11->setText(QApplication::translate("CTDosimetry", "Total Height:", nullptr));
        label_47->setText(QApplication::translate("CTDosimetry", "Age:", nullptr));
        label_13->setText(QApplication::translate("CTDosimetry", "cm", nullptr));
        label_39->setText(QApplication::translate("CTDosimetry", "cm", nullptr));
        label_3->setText(QApplication::translate("CTDosimetry", "CTDIvol:", nullptr));
        label_36->setText(QApplication::translate("CTDosimetry", "LAT:", nullptr));
        label_9->setText(QApplication::translate("CTDosimetry", "Gender:", nullptr));
        label_45->setText(QApplication::translate("CTDosimetry", "cm", nullptr));
        label_43->setText(QApplication::translate("CTDosimetry", "cm", nullptr));
        label_41->setText(QApplication::translate("CTDosimetry", "Height Torso to Top:", nullptr));
        label_25->setText(QApplication::translate("CTDosimetry", "Export PDF Filename:", nullptr));
        cB_gender->setItemText(0, QApplication::translate("CTDosimetry", "Male", nullptr));
        cB_gender->setItemText(1, QApplication::translate("CTDosimetry", "Female", nullptr));

        label_8->setText(QApplication::translate("CTDosimetry", "Anteroposterior Thickness:", nullptr));
        label_10->setText(QApplication::translate("CTDosimetry", ".pdf", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CTDosimetry: public Ui_CTDosimetry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTDOSIMETRY_H
