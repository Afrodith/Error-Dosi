/********************************************************************************
** Form generated from reading UI file 'vvDeformationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVDEFORMATIONDIALOG_H
#define UI_VVDEFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_vvDeformationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *inputSequenceBox;
    QLabel *refImageLabel;
    QSlider *refImageSlider;
    QLabel *label_2;
    QSpinBox *iterSpin;
    QLabel *label_7;
    QSpinBox *stopSpin;
    QLabel *label_3;
    QDoubleSpinBox *alphaSpin;
    QLabel *label_4;
    QDoubleSpinBox *sigmaSpin;
    QLabel *label_5;
    QSpinBox *threadSpin;
    QLabel *label_6;
    QHBoxLayout *hboxLayout;
    QLineEdit *outputLineEdit;
    QPushButton *outputPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *vvDeformationDialog)
    {
        if (vvDeformationDialog->objectName().isEmpty())
            vvDeformationDialog->setObjectName(QString::fromUtf8("vvDeformationDialog"));
        vvDeformationDialog->resize(405, 309);
        gridLayout = new QGridLayout(vvDeformationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(vvDeformationDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        inputSequenceBox = new QComboBox(vvDeformationDialog);
        inputSequenceBox->setObjectName(QString::fromUtf8("inputSequenceBox"));

        gridLayout->addWidget(inputSequenceBox, 0, 1, 1, 1);

        refImageLabel = new QLabel(vvDeformationDialog);
        refImageLabel->setObjectName(QString::fromUtf8("refImageLabel"));

        gridLayout->addWidget(refImageLabel, 1, 0, 1, 1);

        refImageSlider = new QSlider(vvDeformationDialog);
        refImageSlider->setObjectName(QString::fromUtf8("refImageSlider"));
        refImageSlider->setOrientation(Qt::Horizontal);
        refImageSlider->setTickPosition(QSlider::TicksAbove);
        refImageSlider->setTickInterval(1);

        gridLayout->addWidget(refImageSlider, 1, 1, 1, 1);

        label_2 = new QLabel(vvDeformationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        iterSpin = new QSpinBox(vvDeformationDialog);
        iterSpin->setObjectName(QString::fromUtf8("iterSpin"));
        iterSpin->setMinimum(1);
        iterSpin->setMaximum(1000000);
        iterSpin->setSingleStep(10);
        iterSpin->setValue(3000);

        gridLayout->addWidget(iterSpin, 2, 1, 1, 1);

        label_7 = new QLabel(vvDeformationDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        stopSpin = new QSpinBox(vvDeformationDialog);
        stopSpin->setObjectName(QString::fromUtf8("stopSpin"));
        stopSpin->setMaximum(100000);
        stopSpin->setValue(500);

        gridLayout->addWidget(stopSpin, 3, 1, 1, 1);

        label_3 = new QLabel(vvDeformationDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        alphaSpin = new QDoubleSpinBox(vvDeformationDialog);
        alphaSpin->setObjectName(QString::fromUtf8("alphaSpin"));
        alphaSpin->setSingleStep(0.100000000000000);
        alphaSpin->setValue(1.000000000000000);

        gridLayout->addWidget(alphaSpin, 4, 1, 1, 1);

        label_4 = new QLabel(vvDeformationDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        sigmaSpin = new QDoubleSpinBox(vvDeformationDialog);
        sigmaSpin->setObjectName(QString::fromUtf8("sigmaSpin"));
        sigmaSpin->setSingleStep(0.100000000000000);
        sigmaSpin->setValue(1.000000000000000);

        gridLayout->addWidget(sigmaSpin, 5, 1, 1, 1);

        label_5 = new QLabel(vvDeformationDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        threadSpin = new QSpinBox(vvDeformationDialog);
        threadSpin->setObjectName(QString::fromUtf8("threadSpin"));
        threadSpin->setMinimum(1);
        threadSpin->setMaximum(99);
        threadSpin->setValue(1);

        gridLayout->addWidget(threadSpin, 6, 1, 1, 1);

        label_6 = new QLabel(vvDeformationDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        outputLineEdit = new QLineEdit(vvDeformationDialog);
        outputLineEdit->setObjectName(QString::fromUtf8("outputLineEdit"));

        hboxLayout->addWidget(outputLineEdit);

        outputPushButton = new QPushButton(vvDeformationDialog);
        outputPushButton->setObjectName(QString::fromUtf8("outputPushButton"));

        hboxLayout->addWidget(outputPushButton);


        gridLayout->addLayout(hboxLayout, 7, 1, 1, 1);

        buttonBox = new QDialogButtonBox(vvDeformationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 1, 1, 1);


        retranslateUi(vvDeformationDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), vvDeformationDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), vvDeformationDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(vvDeformationDialog);
    } // setupUi

    void retranslateUi(QDialog *vvDeformationDialog)
    {
        vvDeformationDialog->setWindowTitle(QApplication::translate("vvDeformationDialog", "Deformation field computation", nullptr));
        label->setText(QApplication::translate("vvDeformationDialog", "Input Sequence", nullptr));
        refImageLabel->setText(QApplication::translate("vvDeformationDialog", "Reference Image (0)", nullptr));
        label_2->setText(QApplication::translate("vvDeformationDialog", "Maximum number of iterations       ", nullptr));
        label_7->setText(QApplication::translate("vvDeformationDialog", "Number of consecutive useless iterations before stop", nullptr));
        label_3->setText(QApplication::translate("vvDeformationDialog", "Alpha", nullptr));
        label_4->setText(QApplication::translate("vvDeformationDialog", "Sigma", nullptr));
        label_5->setText(QApplication::translate("vvDeformationDialog", "Number of threads", nullptr));
        label_6->setText(QApplication::translate("vvDeformationDialog", "Ouput file name", nullptr));
        outputLineEdit->setText(QApplication::translate("vvDeformationDialog", "output_vf.mhd", nullptr));
        outputPushButton->setText(QApplication::translate("vvDeformationDialog", "Chose file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvDeformationDialog: public Ui_vvDeformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVDEFORMATIONDIALOG_H
