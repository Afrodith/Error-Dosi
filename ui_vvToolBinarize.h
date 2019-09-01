/********************************************************************************
** Form generated from reading UI file 'vvToolBinarize.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLBINARIZE_H
#define UI_VVTOOLBINARIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "VV/vv/vvIntensityValueSlider.h"

QT_BEGIN_NAMESPACE

class Ui_vvToolBinarize
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    vvIntensityValueSlider *mThresholdSlider2;
    QLabel *label_2;
    vvIntensityValueSlider *mThresholdSlider1;
    QRadioButton *mRadioButtonLowerThan;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *mCheckBoxUseFG;
    vvIntensityValueSlider *mFGSlider;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mCheckBoxUseBG;
    vvIntensityValueSlider *mBGSlider;
    QFrame *line_3;
    QCheckBox *mCheckBoxInteractiveDisplay;

    void setupUi(QWidget *vvToolBinarize)
    {
        if (vvToolBinarize->objectName().isEmpty())
            vvToolBinarize->setObjectName(QString::fromUtf8("vvToolBinarize"));
        vvToolBinarize->resize(314, 197);
        verticalLayout = new QVBoxLayout(vvToolBinarize);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mThresholdSlider2 = new vvIntensityValueSlider(vvToolBinarize);
        mThresholdSlider2->setObjectName(QString::fromUtf8("mThresholdSlider2"));
        mThresholdSlider2->setEnabled(false);

        gridLayout_2->addWidget(mThresholdSlider2, 2, 2, 1, 1);

        label_2 = new QLabel(vvToolBinarize);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        mThresholdSlider1 = new vvIntensityValueSlider(vvToolBinarize);
        mThresholdSlider1->setObjectName(QString::fromUtf8("mThresholdSlider1"));

        gridLayout_2->addWidget(mThresholdSlider1, 1, 2, 1, 1);

        mRadioButtonLowerThan = new QRadioButton(vvToolBinarize);
        mRadioButtonLowerThan->setObjectName(QString::fromUtf8("mRadioButtonLowerThan"));
        mRadioButtonLowerThan->setAutoExclusive(false);

        gridLayout_2->addWidget(mRadioButtonLowerThan, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        line_2 = new QFrame(vvToolBinarize);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label = new QLabel(vvToolBinarize);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mCheckBoxUseFG = new QCheckBox(vvToolBinarize);
        mCheckBoxUseFG->setObjectName(QString::fromUtf8("mCheckBoxUseFG"));
        mCheckBoxUseFG->setChecked(false);

        horizontalLayout_4->addWidget(mCheckBoxUseFG);

        mFGSlider = new vvIntensityValueSlider(vvToolBinarize);
        mFGSlider->setObjectName(QString::fromUtf8("mFGSlider"));
        mFGSlider->setEnabled(false);

        horizontalLayout_4->addWidget(mFGSlider);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mCheckBoxUseBG = new QCheckBox(vvToolBinarize);
        mCheckBoxUseBG->setObjectName(QString::fromUtf8("mCheckBoxUseBG"));
        mCheckBoxUseBG->setChecked(true);

        horizontalLayout_5->addWidget(mCheckBoxUseBG);

        mBGSlider = new vvIntensityValueSlider(vvToolBinarize);
        mBGSlider->setObjectName(QString::fromUtf8("mBGSlider"));

        horizontalLayout_5->addWidget(mBGSlider);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_2);

        line_3 = new QFrame(vvToolBinarize);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        mCheckBoxInteractiveDisplay = new QCheckBox(vvToolBinarize);
        mCheckBoxInteractiveDisplay->setObjectName(QString::fromUtf8("mCheckBoxInteractiveDisplay"));
        mCheckBoxInteractiveDisplay->setEnabled(true);
        mCheckBoxInteractiveDisplay->setChecked(true);

        verticalLayout->addWidget(mCheckBoxInteractiveDisplay);


        retranslateUi(vvToolBinarize);
        QObject::connect(mRadioButtonLowerThan, SIGNAL(toggled(bool)), mThresholdSlider2, SLOT(setEnabled(bool)));
        QObject::connect(mCheckBoxUseBG, SIGNAL(toggled(bool)), mBGSlider, SLOT(setEnabled(bool)));
        QObject::connect(mCheckBoxUseFG, SIGNAL(toggled(bool)), mFGSlider, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(vvToolBinarize);
    } // setupUi

    void retranslateUi(QWidget *vvToolBinarize)
    {
        vvToolBinarize->setWindowTitle(QApplication::translate("vvToolBinarize", "Binarize image", nullptr));
        label_2->setText(QApplication::translate("vvToolBinarize", "Foreground (FG) is greater than : ", nullptr));
        mRadioButtonLowerThan->setText(QApplication::translate("vvToolBinarize", "and lower than", nullptr));
        label->setText(QApplication::translate("vvToolBinarize", "Resulting binary image:", nullptr));
        mCheckBoxUseFG->setText(QApplication::translate("vvToolBinarize", "Use FG", nullptr));
        mCheckBoxUseBG->setText(QApplication::translate("vvToolBinarize", "Use BG", nullptr));
        mCheckBoxInteractiveDisplay->setText(QApplication::translate("vvToolBinarize", "Interactive (unchek to disable on the fly contours drawing)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolBinarize: public Ui_vvToolBinarize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLBINARIZE_H
