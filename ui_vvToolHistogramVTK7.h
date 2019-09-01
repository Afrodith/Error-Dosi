/********************************************************************************
** Form generated from reading UI file 'vvToolHistogramVTK7.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLHISTOGRAMVTK7_H
#define UI_VVTOOLHISTOGRAMVTK7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_vvToolHistogram
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mSaveHistogramButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mPosPoint2Label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QVTKWidget *HistogramWidget;

    void setupUi(QWidget *vvToolHistogram)
    {
        if (vvToolHistogram->objectName().isEmpty())
            vvToolHistogram->setObjectName(QString::fromUtf8("vvToolHistogram"));
        vvToolHistogram->resize(506, 452);
        verticalLayout = new QVBoxLayout(vvToolHistogram);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mSaveHistogramButton = new QPushButton(vvToolHistogram);
        mSaveHistogramButton->setObjectName(QString::fromUtf8("mSaveHistogramButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSaveHistogramButton->sizePolicy().hasHeightForWidth());
        mSaveHistogramButton->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(mSaveHistogramButton);


        gridLayout_2->addLayout(horizontalLayout_6, 2, 3, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mPosPoint2Label = new QLabel(vvToolHistogram);
        mPosPoint2Label->setObjectName(QString::fromUtf8("mPosPoint2Label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPosPoint2Label->sizePolicy().hasHeightForWidth());
        mPosPoint2Label->setSizePolicy(sizePolicy1);
        mPosPoint2Label->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(mPosPoint2Label);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        line_2 = new QFrame(vvToolHistogram);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        HistogramWidget = new QVTKWidget(vvToolHistogram);
        HistogramWidget->setObjectName(QString::fromUtf8("HistogramWidget"));
        HistogramWidget->setMinimumSize(QSize(0, 300));
        HistogramWidget->setMouseTracking(true);

        verticalLayout_2->addWidget(HistogramWidget);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(vvToolHistogram);

        QMetaObject::connectSlotsByName(vvToolHistogram);
    } // setupUi

    void retranslateUi(QWidget *vvToolHistogram)
    {
        vvToolHistogram->setWindowTitle(QApplication::translate("vvToolHistogram", "Histogram image", nullptr));
        mSaveHistogramButton->setText(QApplication::translate("vvToolHistogram", "Save Histogram", nullptr));
        mPosPoint2Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class vvToolHistogram: public Ui_vvToolHistogram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLHISTOGRAMVTK7_H
