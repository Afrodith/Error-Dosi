/********************************************************************************
** Form generated from reading UI file 'vvLabelImageLoaderWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVLABELIMAGELOADERWIDGET_H
#define UI_VVLABELIMAGELOADERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvLabelImageLoaderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mOpenLabel;
    QPushButton *mOpenButton;
    QHBoxLayout *horizontalLayout;
    QLabel *vectorFieldNameLabel_4;
    QSpinBox *mBackgroundValueSpinBox;
    QLabel *mLabelInputInfo;

    void setupUi(QWidget *vvLabelImageLoaderWidget)
    {
        if (vvLabelImageLoaderWidget->objectName().isEmpty())
            vvLabelImageLoaderWidget->setObjectName(QString::fromUtf8("vvLabelImageLoaderWidget"));
        vvLabelImageLoaderWidget->resize(226, 71);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vvLabelImageLoaderWidget->sizePolicy().hasHeightForWidth());
        vvLabelImageLoaderWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(vvLabelImageLoaderWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mOpenLabel = new QLabel(vvLabelImageLoaderWidget);
        mOpenLabel->setObjectName(QString::fromUtf8("mOpenLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOpenLabel->sizePolicy().hasHeightForWidth());
        mOpenLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(mOpenLabel);

        mOpenButton = new QPushButton(vvLabelImageLoaderWidget);
        mOpenButton->setObjectName(QString::fromUtf8("mOpenButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOpenButton->sizePolicy().hasHeightForWidth());
        mOpenButton->setSizePolicy(sizePolicy2);
        mOpenButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/common/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        mOpenButton->setIcon(icon);

        horizontalLayout_2->addWidget(mOpenButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vectorFieldNameLabel_4 = new QLabel(vvLabelImageLoaderWidget);
        vectorFieldNameLabel_4->setObjectName(QString::fromUtf8("vectorFieldNameLabel_4"));
        sizePolicy1.setHeightForWidth(vectorFieldNameLabel_4->sizePolicy().hasHeightForWidth());
        vectorFieldNameLabel_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(vectorFieldNameLabel_4);

        mBackgroundValueSpinBox = new QSpinBox(vvLabelImageLoaderWidget);
        mBackgroundValueSpinBox->setObjectName(QString::fromUtf8("mBackgroundValueSpinBox"));

        horizontalLayout->addWidget(mBackgroundValueSpinBox);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        mLabelInputInfo = new QLabel(vvLabelImageLoaderWidget);
        mLabelInputInfo->setObjectName(QString::fromUtf8("mLabelInputInfo"));
        sizePolicy1.setHeightForWidth(mLabelInputInfo->sizePolicy().hasHeightForWidth());
        mLabelInputInfo->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        mLabelInputInfo->setFont(font);
        mLabelInputInfo->setFrameShape(QFrame::NoFrame);
        mLabelInputInfo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(mLabelInputInfo);


        retranslateUi(vvLabelImageLoaderWidget);

        QMetaObject::connectSlotsByName(vvLabelImageLoaderWidget);
    } // setupUi

    void retranslateUi(QWidget *vvLabelImageLoaderWidget)
    {
        vvLabelImageLoaderWidget->setWindowTitle(QApplication::translate("vvLabelImageLoaderWidget", "Form", nullptr));
        mOpenLabel->setText(QApplication::translate("vvLabelImageLoaderWidget", "Patient mask", nullptr));
#ifndef QT_NO_TOOLTIP
        mOpenButton->setToolTip(QApplication::translate("vvLabelImageLoaderWidget", "Open label image", nullptr));
#endif // QT_NO_TOOLTIP
        mOpenButton->setText(QString());
        vectorFieldNameLabel_4->setText(QApplication::translate("vvLabelImageLoaderWidget", "BG ", nullptr));
        mLabelInputInfo->setText(QApplication::translate("vvLabelImageLoaderWidget", "No selected image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvLabelImageLoaderWidget: public Ui_vvLabelImageLoaderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVLABELIMAGELOADERWIDGET_H
