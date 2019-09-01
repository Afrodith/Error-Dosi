/********************************************************************************
** Form generated from reading UI file 'vvToolCropImage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLCROPIMAGE_H
#define UI_VVTOOLCROPIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolCropImage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSlider *xminSlider;
    QSpinBox *spin_xmin;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSlider *xmaxSlider;
    QSpinBox *spin_xmax;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *yminSlider;
    QSpinBox *spin_ymin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *ymaxSlider;
    QSpinBox *spin_ymax;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mZLabel1;
    QSlider *zminSlider;
    QSpinBox *spin_zmin;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mZLabel2;
    QSlider *zmaxSlider;
    QSpinBox *spin_zmax;
    QLabel *mLabelTimeCropping;
    QHBoxLayout *horizontalLayout;
    QLabel *mTLabel1;
    QSlider *tminSlider;
    QSpinBox *spin_tmin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mTLabel2;
    QSlider *tmaxSlider;
    QSpinBox *spin_tmax;

    void setupUi(QWidget *vvToolCropImage)
    {
        if (vvToolCropImage->objectName().isEmpty())
            vvToolCropImage->setObjectName(QString::fromUtf8("vvToolCropImage"));
        vvToolCropImage->resize(426, 257);
        verticalLayout = new QVBoxLayout(vvToolCropImage);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(vvToolCropImage);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        xminSlider = new QSlider(vvToolCropImage);
        xminSlider->setObjectName(QString::fromUtf8("xminSlider"));
        xminSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(xminSlider);

        spin_xmin = new QSpinBox(vvToolCropImage);
        spin_xmin->setObjectName(QString::fromUtf8("spin_xmin"));

        horizontalLayout_6->addWidget(spin_xmin);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(vvToolCropImage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        xmaxSlider = new QSlider(vvToolCropImage);
        xmaxSlider->setObjectName(QString::fromUtf8("xmaxSlider"));
        xmaxSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(xmaxSlider);

        spin_xmax = new QSpinBox(vvToolCropImage);
        spin_xmax->setObjectName(QString::fromUtf8("spin_xmax"));

        horizontalLayout_5->addWidget(spin_xmax);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(vvToolCropImage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        yminSlider = new QSlider(vvToolCropImage);
        yminSlider->setObjectName(QString::fromUtf8("yminSlider"));
        yminSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(yminSlider);

        spin_ymin = new QSpinBox(vvToolCropImage);
        spin_ymin->setObjectName(QString::fromUtf8("spin_ymin"));

        horizontalLayout_3->addWidget(spin_ymin);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(vvToolCropImage);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        ymaxSlider = new QSlider(vvToolCropImage);
        ymaxSlider->setObjectName(QString::fromUtf8("ymaxSlider"));
        ymaxSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(ymaxSlider);

        spin_ymax = new QSpinBox(vvToolCropImage);
        spin_ymax->setObjectName(QString::fromUtf8("spin_ymax"));

        horizontalLayout_4->addWidget(spin_ymax);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mZLabel1 = new QLabel(vvToolCropImage);
        mZLabel1->setObjectName(QString::fromUtf8("mZLabel1"));

        horizontalLayout_7->addWidget(mZLabel1);

        zminSlider = new QSlider(vvToolCropImage);
        zminSlider->setObjectName(QString::fromUtf8("zminSlider"));
        zminSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(zminSlider);

        spin_zmin = new QSpinBox(vvToolCropImage);
        spin_zmin->setObjectName(QString::fromUtf8("spin_zmin"));

        horizontalLayout_7->addWidget(spin_zmin);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mZLabel2 = new QLabel(vvToolCropImage);
        mZLabel2->setObjectName(QString::fromUtf8("mZLabel2"));

        horizontalLayout_8->addWidget(mZLabel2);

        zmaxSlider = new QSlider(vvToolCropImage);
        zmaxSlider->setObjectName(QString::fromUtf8("zmaxSlider"));
        zmaxSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(zmaxSlider);

        spin_zmax = new QSpinBox(vvToolCropImage);
        spin_zmax->setObjectName(QString::fromUtf8("spin_zmax"));

        horizontalLayout_8->addWidget(spin_zmax);


        verticalLayout->addLayout(horizontalLayout_8);

        mLabelTimeCropping = new QLabel(vvToolCropImage);
        mLabelTimeCropping->setObjectName(QString::fromUtf8("mLabelTimeCropping"));

        verticalLayout->addWidget(mLabelTimeCropping);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mTLabel1 = new QLabel(vvToolCropImage);
        mTLabel1->setObjectName(QString::fromUtf8("mTLabel1"));

        horizontalLayout->addWidget(mTLabel1);

        tminSlider = new QSlider(vvToolCropImage);
        tminSlider->setObjectName(QString::fromUtf8("tminSlider"));
        tminSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(tminSlider);

        spin_tmin = new QSpinBox(vvToolCropImage);
        spin_tmin->setObjectName(QString::fromUtf8("spin_tmin"));

        horizontalLayout->addWidget(spin_tmin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mTLabel2 = new QLabel(vvToolCropImage);
        mTLabel2->setObjectName(QString::fromUtf8("mTLabel2"));

        horizontalLayout_2->addWidget(mTLabel2);

        tmaxSlider = new QSlider(vvToolCropImage);
        tmaxSlider->setObjectName(QString::fromUtf8("tmaxSlider"));
        tmaxSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(tmaxSlider);

        spin_tmax = new QSpinBox(vvToolCropImage);
        spin_tmax->setObjectName(QString::fromUtf8("spin_tmax"));

        horizontalLayout_2->addWidget(spin_tmax);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(vvToolCropImage);
        QObject::connect(spin_xmin, SIGNAL(valueChanged(int)), xminSlider, SLOT(setValue(int)));
        QObject::connect(xminSlider, SIGNAL(valueChanged(int)), spin_xmin, SLOT(setValue(int)));
        QObject::connect(xmaxSlider, SIGNAL(valueChanged(int)), spin_xmax, SLOT(setValue(int)));
        QObject::connect(yminSlider, SIGNAL(valueChanged(int)), spin_ymin, SLOT(setValue(int)));
        QObject::connect(ymaxSlider, SIGNAL(valueChanged(int)), spin_ymax, SLOT(setValue(int)));
        QObject::connect(zminSlider, SIGNAL(valueChanged(int)), spin_zmin, SLOT(setValue(int)));
        QObject::connect(zmaxSlider, SIGNAL(valueChanged(int)), spin_zmax, SLOT(setValue(int)));
        QObject::connect(spin_xmax, SIGNAL(valueChanged(int)), xmaxSlider, SLOT(setValue(int)));
        QObject::connect(spin_ymin, SIGNAL(valueChanged(int)), yminSlider, SLOT(setValue(int)));
        QObject::connect(spin_ymax, SIGNAL(valueChanged(int)), ymaxSlider, SLOT(setValue(int)));
        QObject::connect(spin_zmin, SIGNAL(valueChanged(int)), zminSlider, SLOT(setValue(int)));
        QObject::connect(spin_zmax, SIGNAL(valueChanged(int)), zmaxSlider, SLOT(setValue(int)));
        QObject::connect(tminSlider, SIGNAL(sliderMoved(int)), spin_tmin, SLOT(setValue(int)));
        QObject::connect(tmaxSlider, SIGNAL(sliderMoved(int)), spin_tmax, SLOT(setValue(int)));
        QObject::connect(spin_tmin, SIGNAL(valueChanged(int)), tminSlider, SLOT(setValue(int)));
        QObject::connect(spin_tmax, SIGNAL(valueChanged(int)), tmaxSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(vvToolCropImage);
    } // setupUi

    void retranslateUi(QWidget *vvToolCropImage)
    {
        vvToolCropImage->setWindowTitle(QApplication::translate("vvToolCropImage", "Form", nullptr));
        label->setText(QApplication::translate("vvToolCropImage", "X min", nullptr));
        label_2->setText(QApplication::translate("vvToolCropImage", "X max", nullptr));
        label_3->setText(QApplication::translate("vvToolCropImage", "Y min", nullptr));
        label_4->setText(QApplication::translate("vvToolCropImage", "Y max", nullptr));
        mZLabel1->setText(QApplication::translate("vvToolCropImage", "Z min", nullptr));
        mZLabel2->setText(QApplication::translate("vvToolCropImage", "Z max", nullptr));
        mLabelTimeCropping->setText(QApplication::translate("vvToolCropImage", "Cropping the time dimension is not displayed on the screen (but performed when applied)", nullptr));
        mTLabel1->setText(QApplication::translate("vvToolCropImage", "T min", nullptr));
        mTLabel2->setText(QApplication::translate("vvToolCropImage", "T max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolCropImage: public Ui_vvToolCropImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLCROPIMAGE_H
