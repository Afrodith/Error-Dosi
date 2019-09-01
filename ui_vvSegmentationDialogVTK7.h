/********************************************************************************
** Form generated from reading UI file 'vvSegmentationDialogVTK7.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVSEGMENTATIONDIALOGVTK7_H
#define UI_VVSEGMENTATIONDIALOGVTK7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_vvSegmentationDialog
{
public:
    QGridLayout *gridLayout;
    QSlider *clipping1Slider;
    QSlider *clipping2Slider;
    QVTKWidget *viewWidget;
    QLabel *minLabel;
    QLabel *maxLabel;
    QPushButton *binaryButton;
    QPushButton *erodeButton;
    QPushButton *dilateButton;
    QLabel *label;
    QSpinBox *kernelSpinBox;
    QPushButton *dimButton;
    QPushButton *saveButton;
    QPushButton *closeButton;
    QLabel *infoLabel;

    void setupUi(QDialog *vvSegmentationDialog)
    {
        if (vvSegmentationDialog->objectName().isEmpty())
            vvSegmentationDialog->setObjectName(QString::fromUtf8("vvSegmentationDialog"));
        vvSegmentationDialog->resize(561, 453);
        gridLayout = new QGridLayout(vvSegmentationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        clipping1Slider = new QSlider(vvSegmentationDialog);
        clipping1Slider->setObjectName(QString::fromUtf8("clipping1Slider"));
        clipping1Slider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(clipping1Slider, 0, 0, 1, 1);

        clipping2Slider = new QSlider(vvSegmentationDialog);
        clipping2Slider->setObjectName(QString::fromUtf8("clipping2Slider"));
        clipping2Slider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(clipping2Slider, 0, 1, 1, 1);

        viewWidget = new QVTKWidget(vvSegmentationDialog);
        viewWidget->setObjectName(QString::fromUtf8("viewWidget"));

        gridLayout->addWidget(viewWidget, 0, 2, 4, 6);

        minLabel = new QLabel(vvSegmentationDialog);
        minLabel->setObjectName(QString::fromUtf8("minLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minLabel->sizePolicy().hasHeightForWidth());
        minLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(minLabel, 1, 0, 1, 1);

        maxLabel = new QLabel(vvSegmentationDialog);
        maxLabel->setObjectName(QString::fromUtf8("maxLabel"));

        gridLayout->addWidget(maxLabel, 2, 0, 1, 2);

        binaryButton = new QPushButton(vvSegmentationDialog);
        binaryButton->setObjectName(QString::fromUtf8("binaryButton"));
        sizePolicy.setHeightForWidth(binaryButton->sizePolicy().hasHeightForWidth());
        binaryButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(binaryButton, 3, 0, 1, 2);

        erodeButton = new QPushButton(vvSegmentationDialog);
        erodeButton->setObjectName(QString::fromUtf8("erodeButton"));

        gridLayout->addWidget(erodeButton, 4, 0, 1, 2);

        dilateButton = new QPushButton(vvSegmentationDialog);
        dilateButton->setObjectName(QString::fromUtf8("dilateButton"));

        gridLayout->addWidget(dilateButton, 4, 2, 1, 1);

        label = new QLabel(vvSegmentationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 3, 1, 1);

        kernelSpinBox = new QSpinBox(vvSegmentationDialog);
        kernelSpinBox->setObjectName(QString::fromUtf8("kernelSpinBox"));
        kernelSpinBox->setMinimum(1);
        kernelSpinBox->setValue(2);

        gridLayout->addWidget(kernelSpinBox, 4, 4, 1, 1);

        dimButton = new QPushButton(vvSegmentationDialog);
        dimButton->setObjectName(QString::fromUtf8("dimButton"));
        sizePolicy.setHeightForWidth(dimButton->sizePolicy().hasHeightForWidth());
        dimButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dimButton, 4, 5, 1, 1);

        saveButton = new QPushButton(vvSegmentationDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 4, 6, 1, 1);

        closeButton = new QPushButton(vvSegmentationDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 4, 7, 1, 1);

        infoLabel = new QLabel(vvSegmentationDialog);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        gridLayout->addWidget(infoLabel, 5, 0, 1, 5);


        retranslateUi(vvSegmentationDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), vvSegmentationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvSegmentationDialog);
    } // setupUi

    void retranslateUi(QDialog *vvSegmentationDialog)
    {
        vvSegmentationDialog->setWindowTitle(QApplication::translate("vvSegmentationDialog", "Segmentation tool", nullptr));
        minLabel->setText(QApplication::translate("vvSegmentationDialog", "Min :", nullptr));
        maxLabel->setText(QApplication::translate("vvSegmentationDialog", "Max :", nullptr));
        binaryButton->setText(QApplication::translate("vvSegmentationDialog", "Binarise", nullptr));
        erodeButton->setText(QApplication::translate("vvSegmentationDialog", "Erode", nullptr));
        dilateButton->setText(QApplication::translate("vvSegmentationDialog", "Dilate", nullptr));
        label->setText(QApplication::translate("vvSegmentationDialog", "Kernel Size :", nullptr));
        dimButton->setText(QApplication::translate("vvSegmentationDialog", "3D", nullptr));
        saveButton->setText(QApplication::translate("vvSegmentationDialog", "Save As", nullptr));
        closeButton->setText(QApplication::translate("vvSegmentationDialog", "Close", nullptr));
        infoLabel->setText(QApplication::translate("vvSegmentationDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvSegmentationDialog: public Ui_vvSegmentationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVSEGMENTATIONDIALOGVTK7_H
