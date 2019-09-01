/********************************************************************************
** Form generated from reading UI file 'vvToolRigidReg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLRIGIDREG_H
#define UI_VVTOOLRIGIDREG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolRigidReg
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_29;
    QLabel *ytans;
    QHBoxLayout *horizontalLayout_37;
    QSlider *xtrans_slider;
    QDoubleSpinBox *xtrans_sb;
    QHBoxLayout *horizontalLayout_33;
    QLabel *xrot;
    QHBoxLayout *horizontalLayout_42;
    QSlider *xrot_slider;
    QDoubleSpinBox *xrot_sb;
    QHBoxLayout *horizontalLayout_34;
    QLabel *zrot;
    QHBoxLayout *horizontalLayout_43;
    QSlider *zrot_slider;
    QDoubleSpinBox *zrot_sb;
    QVBoxLayout *verticalLayout_2;
    QLabel *TransformationStaticLabel;
    QLabel *transformationLabel;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *savebutton;
    QPushButton *loadbutton;
    QPushButton *resetbutton;
    QHBoxLayout *horizontalLayout_31;
    QLabel *ztrans;
    QHBoxLayout *horizontalLayout_39;
    QSlider *ztrans_slider;
    QDoubleSpinBox *ztrans_sb;
    QHBoxLayout *horizontalLayout_30;
    QLabel *ytrans;
    QHBoxLayout *horizontalLayout_38;
    QSlider *ytrans_slider;
    QDoubleSpinBox *ytrans_sb;
    QHBoxLayout *horizontalLayout_49;
    QHBoxLayout *horizontalLayout_32;
    QLabel *yrot;
    QHBoxLayout *horizontalLayout_40;
    QSlider *yrot_slider;
    QDoubleSpinBox *yrot_sb;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *stepTransSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBoxDegrees;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QDoubleSpinBox *stepRotSpinBox;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *Xval;
    QLineEdit *Yval;
    QLineEdit *Zval;

    void setupUi(QWidget *vvToolRigidReg)
    {
        if (vvToolRigidReg->objectName().isEmpty())
            vvToolRigidReg->setObjectName(QString::fromUtf8("vvToolRigidReg"));
        vvToolRigidReg->resize(266, 333);
        gridLayout = new QGridLayout(vvToolRigidReg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        ytans = new QLabel(vvToolRigidReg);
        ytans->setObjectName(QString::fromUtf8("ytans"));

        horizontalLayout_29->addWidget(ytans);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));

        horizontalLayout_29->addLayout(horizontalLayout_37);

        xtrans_slider = new QSlider(vvToolRigidReg);
        xtrans_slider->setObjectName(QString::fromUtf8("xtrans_slider"));
        xtrans_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_29->addWidget(xtrans_slider);

        xtrans_sb = new QDoubleSpinBox(vvToolRigidReg);
        xtrans_sb->setObjectName(QString::fromUtf8("xtrans_sb"));

        horizontalLayout_29->addWidget(xtrans_sb);


        gridLayout_4->addLayout(horizontalLayout_29, 2, 0, 1, 1);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        xrot = new QLabel(vvToolRigidReg);
        xrot->setObjectName(QString::fromUtf8("xrot"));

        horizontalLayout_33->addWidget(xrot);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));

        horizontalLayout_33->addLayout(horizontalLayout_42);

        xrot_slider = new QSlider(vvToolRigidReg);
        xrot_slider->setObjectName(QString::fromUtf8("xrot_slider"));
        xrot_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_33->addWidget(xrot_slider);

        xrot_sb = new QDoubleSpinBox(vvToolRigidReg);
        xrot_sb->setObjectName(QString::fromUtf8("xrot_sb"));

        horizontalLayout_33->addWidget(xrot_sb);


        gridLayout_4->addLayout(horizontalLayout_33, 7, 0, 1, 1);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        zrot = new QLabel(vvToolRigidReg);
        zrot->setObjectName(QString::fromUtf8("zrot"));

        horizontalLayout_34->addWidget(zrot);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));

        horizontalLayout_34->addLayout(horizontalLayout_43);

        zrot_slider = new QSlider(vvToolRigidReg);
        zrot_slider->setObjectName(QString::fromUtf8("zrot_slider"));
        zrot_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_34->addWidget(zrot_slider);

        zrot_sb = new QDoubleSpinBox(vvToolRigidReg);
        zrot_sb->setObjectName(QString::fromUtf8("zrot_sb"));

        horizontalLayout_34->addWidget(zrot_sb);


        gridLayout_4->addLayout(horizontalLayout_34, 9, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        TransformationStaticLabel = new QLabel(vvToolRigidReg);
        TransformationStaticLabel->setObjectName(QString::fromUtf8("TransformationStaticLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TransformationStaticLabel->sizePolicy().hasHeightForWidth());
        TransformationStaticLabel->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(TransformationStaticLabel);

        transformationLabel = new QLabel(vvToolRigidReg);
        transformationLabel->setObjectName(QString::fromUtf8("transformationLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(transformationLabel->sizePolicy().hasHeightForWidth());
        transformationLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(8);
        transformationLabel->setFont(font);
        transformationLabel->setTextFormat(Qt::PlainText);

        verticalLayout_2->addWidget(transformationLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        savebutton = new QPushButton(vvToolRigidReg);
        savebutton->setObjectName(QString::fromUtf8("savebutton"));

        horizontalLayout_5->addWidget(savebutton);

        loadbutton = new QPushButton(vvToolRigidReg);
        loadbutton->setObjectName(QString::fromUtf8("loadbutton"));

        horizontalLayout_5->addWidget(loadbutton);

        resetbutton = new QPushButton(vvToolRigidReg);
        resetbutton->setObjectName(QString::fromUtf8("resetbutton"));

        horizontalLayout_5->addWidget(resetbutton);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_4->addLayout(verticalLayout_2, 12, 0, 1, 1);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        ztrans = new QLabel(vvToolRigidReg);
        ztrans->setObjectName(QString::fromUtf8("ztrans"));

        horizontalLayout_31->addWidget(ztrans);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));

        horizontalLayout_31->addLayout(horizontalLayout_39);

        ztrans_slider = new QSlider(vvToolRigidReg);
        ztrans_slider->setObjectName(QString::fromUtf8("ztrans_slider"));
        ztrans_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_31->addWidget(ztrans_slider);

        ztrans_sb = new QDoubleSpinBox(vvToolRigidReg);
        ztrans_sb->setObjectName(QString::fromUtf8("ztrans_sb"));

        horizontalLayout_31->addWidget(ztrans_sb);


        gridLayout_4->addLayout(horizontalLayout_31, 4, 0, 1, 1);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        ytrans = new QLabel(vvToolRigidReg);
        ytrans->setObjectName(QString::fromUtf8("ytrans"));

        horizontalLayout_30->addWidget(ytrans);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));

        horizontalLayout_30->addLayout(horizontalLayout_38);

        ytrans_slider = new QSlider(vvToolRigidReg);
        ytrans_slider->setObjectName(QString::fromUtf8("ytrans_slider"));
        ytrans_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_30->addWidget(ytrans_slider);

        ytrans_sb = new QDoubleSpinBox(vvToolRigidReg);
        ytrans_sb->setObjectName(QString::fromUtf8("ytrans_sb"));

        horizontalLayout_30->addWidget(ytrans_sb);


        gridLayout_4->addLayout(horizontalLayout_30, 3, 0, 1, 1);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));

        gridLayout_4->addLayout(horizontalLayout_49, 12, 1, 1, 1);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        yrot = new QLabel(vvToolRigidReg);
        yrot->setObjectName(QString::fromUtf8("yrot"));

        horizontalLayout_32->addWidget(yrot);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));

        horizontalLayout_32->addLayout(horizontalLayout_40);

        yrot_slider = new QSlider(vvToolRigidReg);
        yrot_slider->setObjectName(QString::fromUtf8("yrot_slider"));
        yrot_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_32->addWidget(yrot_slider);

        yrot_sb = new QDoubleSpinBox(vvToolRigidReg);
        yrot_sb->setObjectName(QString::fromUtf8("yrot_sb"));

        horizontalLayout_32->addWidget(yrot_sb);


        gridLayout_4->addLayout(horizontalLayout_32, 8, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(vvToolRigidReg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(vvToolRigidReg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        stepTransSpinBox = new QDoubleSpinBox(vvToolRigidReg);
        stepTransSpinBox->setObjectName(QString::fromUtf8("stepTransSpinBox"));
        stepTransSpinBox->setSingleStep(1.000000000000000);
        stepTransSpinBox->setValue(1.000000000000000);

        horizontalLayout->addWidget(stepTransSpinBox);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(vvToolRigidReg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        checkBoxDegrees = new QCheckBox(vvToolRigidReg);
        checkBoxDegrees->setObjectName(QString::fromUtf8("checkBoxDegrees"));
        checkBoxDegrees->setChecked(true);

        horizontalLayout_3->addWidget(checkBoxDegrees);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_5 = new QLabel(vvToolRigidReg);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        stepRotSpinBox = new QDoubleSpinBox(vvToolRigidReg);
        stepRotSpinBox->setObjectName(QString::fromUtf8("stepRotSpinBox"));
        stepRotSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(stepRotSpinBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout_4->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label = new QLabel(vvToolRigidReg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_28->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Xval = new QLineEdit(vvToolRigidReg);
        Xval->setObjectName(QString::fromUtf8("Xval"));

        horizontalLayout_4->addWidget(Xval);

        Yval = new QLineEdit(vvToolRigidReg);
        Yval->setObjectName(QString::fromUtf8("Yval"));

        horizontalLayout_4->addWidget(Yval);

        Zval = new QLineEdit(vvToolRigidReg);
        Zval->setObjectName(QString::fromUtf8("Zval"));

        horizontalLayout_4->addWidget(Zval);


        horizontalLayout_28->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(horizontalLayout_28, 6, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(vvToolRigidReg);

        QMetaObject::connectSlotsByName(vvToolRigidReg);
    } // setupUi

    void retranslateUi(QWidget *vvToolRigidReg)
    {
        vvToolRigidReg->setWindowTitle(QApplication::translate("vvToolRigidReg", "Form", nullptr));
        ytans->setText(QApplication::translate("vvToolRigidReg", "X", nullptr));
        xrot->setText(QApplication::translate("vvToolRigidReg", "X", nullptr));
        zrot->setText(QApplication::translate("vvToolRigidReg", "Z", nullptr));
        TransformationStaticLabel->setText(QApplication::translate("vvToolRigidReg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">Original Transformation Matrix:</span></p></body></html>", nullptr));
        transformationLabel->setText(QString());
        savebutton->setText(QApplication::translate("vvToolRigidReg", "Save", nullptr));
        loadbutton->setText(QApplication::translate("vvToolRigidReg", "Load", nullptr));
        resetbutton->setText(QApplication::translate("vvToolRigidReg", "Reset", nullptr));
        ztrans->setText(QApplication::translate("vvToolRigidReg", "Z", nullptr));
        ytrans->setText(QApplication::translate("vvToolRigidReg", "Y", nullptr));
        yrot->setText(QApplication::translate("vvToolRigidReg", "Y", nullptr));
        label_3->setText(QApplication::translate("vvToolRigidReg", "Translations", nullptr));
        label_2->setText(QApplication::translate("vvToolRigidReg", "Steps", nullptr));
#ifndef QT_NO_TOOLTIP
        stepTransSpinBox->setToolTip(QApplication::translate("vvToolRigidReg", "Translations", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("vvToolRigidReg", "Rotations", nullptr));
        checkBoxDegrees->setText(QApplication::translate("vvToolRigidReg", "Deg", nullptr));
        label_5->setText(QApplication::translate("vvToolRigidReg", "Steps", nullptr));
#ifndef QT_NO_TOOLTIP
        stepRotSpinBox->setToolTip(QApplication::translate("vvToolRigidReg", "Rotations", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("vvToolRigidReg", "Center", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolRigidReg: public Ui_vvToolRigidReg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLRIGIDREG_H
