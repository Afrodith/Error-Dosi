/********************************************************************************
** Form generated from reading UI file 'vvToolMedianFilter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLMEDIANFILTER_H
#define UI_VVTOOLMEDIANFILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolMedianFilter
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;

    void setupUi(QWidget *vvToolMedianFilter)
    {
        if (vvToolMedianFilter->objectName().isEmpty())
            vvToolMedianFilter->setObjectName(QString::fromUtf8("vvToolMedianFilter"));
        vvToolMedianFilter->resize(400, 300);
        verticalLayout_5 = new QVBoxLayout(vvToolMedianFilter);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(vvToolMedianFilter);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        horizontalSlider = new QSlider(vvToolMedianFilter);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider);

        spinBox = new QSpinBox(vvToolMedianFilter);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(vvToolMedianFilter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        horizontalSlider_3 = new QSlider(vvToolMedianFilter);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_3);

        spinBox_3 = new QSpinBox(vvToolMedianFilter);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_6->addWidget(spinBox_3);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(vvToolMedianFilter);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalSlider_2 = new QSlider(vvToolMedianFilter);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_2);

        spinBox_2 = new QSpinBox(vvToolMedianFilter);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_5->addWidget(spinBox_2);


        verticalLayout_5->addLayout(horizontalLayout_5);


        retranslateUi(vvToolMedianFilter);

        QMetaObject::connectSlotsByName(vvToolMedianFilter);
    } // setupUi

    void retranslateUi(QWidget *vvToolMedianFilter)
    {
        vvToolMedianFilter->setWindowTitle(QApplication::translate("vvToolMedianFilter", "Form", nullptr));
        label->setText(QApplication::translate("vvToolMedianFilter", "X Radius", nullptr));
        label_2->setText(QApplication::translate("vvToolMedianFilter", "Y Radius", nullptr));
        label_3->setText(QApplication::translate("vvToolMedianFilter", "Z Radius", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolMedianFilter: public Ui_vvToolMedianFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLMEDIANFILTER_H
