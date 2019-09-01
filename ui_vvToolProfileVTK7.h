/********************************************************************************
** Form generated from reading UI file 'vvToolProfileVTK7.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLPROFILEVTK7_H
#define UI_VVTOOLPROFILEVTK7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_vvToolProfile
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mSelectPoint2Button;
    QLabel *Point2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mPosPoint2Label;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *mCancelPointsButton;
    QPushButton *mSaveProfileButton;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *mSelectPoint1Button;
    QLabel *Point1;
    QHBoxLayout *horizontalLayout;
    QLabel *mPosPoint1Label;
    QVBoxLayout *verticalLayout_2;
    QFrame *line_2;
    QVTKWidget *ProfileWidget;

    void setupUi(QWidget *vvToolProfile)
    {
        if (vvToolProfile->objectName().isEmpty())
            vvToolProfile->setObjectName(QString::fromUtf8("vvToolProfile"));
        vvToolProfile->resize(505, 452);
        verticalLayout = new QVBoxLayout(vvToolProfile);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mSelectPoint2Button = new QPushButton(vvToolProfile);
        mSelectPoint2Button->setObjectName(QString::fromUtf8("mSelectPoint2Button"));

        horizontalLayout_3->addWidget(mSelectPoint2Button);

        Point2 = new QLabel(vvToolProfile);
        Point2->setObjectName(QString::fromUtf8("Point2"));

        horizontalLayout_3->addWidget(Point2);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mPosPoint2Label = new QLabel(vvToolProfile);
        mPosPoint2Label->setObjectName(QString::fromUtf8("mPosPoint2Label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPosPoint2Label->sizePolicy().hasHeightForWidth());
        mPosPoint2Label->setSizePolicy(sizePolicy);
        mPosPoint2Label->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(mPosPoint2Label);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 3, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mCancelPointsButton = new QToolButton(vvToolProfile);
        mCancelPointsButton->setObjectName(QString::fromUtf8("mCancelPointsButton"));

        horizontalLayout_6->addWidget(mCancelPointsButton);

        mSaveProfileButton = new QPushButton(vvToolProfile);
        mSaveProfileButton->setObjectName(QString::fromUtf8("mSaveProfileButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mSaveProfileButton->sizePolicy().hasHeightForWidth());
        mSaveProfileButton->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(mSaveProfileButton);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 3, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mSelectPoint1Button = new QPushButton(vvToolProfile);
        mSelectPoint1Button->setObjectName(QString::fromUtf8("mSelectPoint1Button"));

        horizontalLayout_7->addWidget(mSelectPoint1Button);

        Point1 = new QLabel(vvToolProfile);
        Point1->setObjectName(QString::fromUtf8("Point1"));

        horizontalLayout_7->addWidget(Point1);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mPosPoint1Label = new QLabel(vvToolProfile);
        mPosPoint1Label->setObjectName(QString::fromUtf8("mPosPoint1Label"));
        sizePolicy.setHeightForWidth(mPosPoint1Label->sizePolicy().hasHeightForWidth());
        mPosPoint1Label->setSizePolicy(sizePolicy);
        mPosPoint1Label->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(mPosPoint1Label);


        gridLayout_2->addLayout(horizontalLayout, 1, 3, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        line_2 = new QFrame(vvToolProfile);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        ProfileWidget = new QVTKWidget(vvToolProfile);
        ProfileWidget->setObjectName(QString::fromUtf8("ProfileWidget"));
        ProfileWidget->setMinimumSize(QSize(0, 300));
        ProfileWidget->setMouseTracking(true);

        verticalLayout_2->addWidget(ProfileWidget);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(vvToolProfile);

        QMetaObject::connectSlotsByName(vvToolProfile);
    } // setupUi

    void retranslateUi(QWidget *vvToolProfile)
    {
        vvToolProfile->setWindowTitle(QApplication::translate("vvToolProfile", "Profile image", nullptr));
        mSelectPoint2Button->setText(QApplication::translate("vvToolProfile", "Select point 2", nullptr));
        Point2->setText(QApplication::translate("vvToolProfile", "Center of voxel2 (vox):", nullptr));
        mPosPoint2Label->setText(QString());
        mCancelPointsButton->setText(QApplication::translate("vvToolProfile", "Cancel", nullptr));
        mSaveProfileButton->setText(QApplication::translate("vvToolProfile", "Save Profile", nullptr));
        mSelectPoint1Button->setText(QApplication::translate("vvToolProfile", "Select point 1", nullptr));
        Point1->setText(QApplication::translate("vvToolProfile", "Center of voxel1 (vox):", nullptr));
        mPosPoint1Label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class vvToolProfile: public Ui_vvToolProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLPROFILEVTK7_H
