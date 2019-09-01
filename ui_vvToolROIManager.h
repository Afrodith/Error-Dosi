/********************************************************************************
** Form generated from reading UI file 'vvToolROIManager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLROIMANAGER_H
#define UI_VVTOOLROIMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolROIManager
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *mLabelInputInfo;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QLabel *vectorFieldNameLabel_4;
    QPushButton *mOpenBinaryButton;
    QSpacerItem *horizontalSpacer_4;
    QLabel *dimensionStaticLabel;
    QSpinBox *mBackgroundValueSpinBox;
    QCheckBox *mBGModeCheckBox;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *vectorFieldNameLabel_5;
    QPushButton *mOpenDicomButton;
    QSpacerItem *horizontalSpacer_6;
    QTreeWidget *mTree;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGroupBox *mGroupBoxROI;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *mCheckBoxShow;
    QPushButton *mChangeColorButton;
    QPushButton *mReloadButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *vectorFieldNameLabel_7;
    QSlider *mOpacitySlider;
    QSpinBox *mOpacitySpinBox;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *mContourCheckBoxShow;
    QPushButton *mChangeContourColorButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mROInameLabel_2;
    QSpinBox *mContourWidthSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mROInameLabel;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mRemoveButton;
    QLabel *mROInameLabel_3;
    QSpinBox *mDepthSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *mCheckBoxShowAll;
    QCheckBox *mContourCheckBoxShowAll;
    QVBoxLayout *verticalLayout_3;
    QLabel *mROInameLabel_4;
    QPushButton *mCloseButton;

    void setupUi(QWidget *vvToolROIManager)
    {
        if (vvToolROIManager->objectName().isEmpty())
            vvToolROIManager->setObjectName(QString::fromUtf8("vvToolROIManager"));
        vvToolROIManager->resize(350, 708);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vvToolROIManager->sizePolicy().hasHeightForWidth());
        vvToolROIManager->setSizePolicy(sizePolicy);
        vvToolROIManager->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_5 = new QVBoxLayout(vvToolROIManager);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mLabelInputInfo = new QLabel(vvToolROIManager);
        mLabelInputInfo->setObjectName(QString::fromUtf8("mLabelInputInfo"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        mLabelInputInfo->setFont(font);
        mLabelInputInfo->setFrameShape(QFrame::NoFrame);
        mLabelInputInfo->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(mLabelInputInfo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        frame_3 = new QFrame(vvToolROIManager);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        vectorFieldNameLabel_4 = new QLabel(frame_3);
        vectorFieldNameLabel_4->setObjectName(QString::fromUtf8("vectorFieldNameLabel_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(vectorFieldNameLabel_4->sizePolicy().hasHeightForWidth());
        vectorFieldNameLabel_4->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(vectorFieldNameLabel_4);

        mOpenBinaryButton = new QPushButton(frame_3);
        mOpenBinaryButton->setObjectName(QString::fromUtf8("mOpenBinaryButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOpenBinaryButton->sizePolicy().hasHeightForWidth());
        mOpenBinaryButton->setSizePolicy(sizePolicy2);
        mOpenBinaryButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/common/icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        mOpenBinaryButton->setIcon(icon);

        horizontalLayout->addWidget(mOpenBinaryButton);

        horizontalSpacer_4 = new QSpacerItem(54, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        dimensionStaticLabel = new QLabel(frame_3);
        dimensionStaticLabel->setObjectName(QString::fromUtf8("dimensionStaticLabel"));
        sizePolicy2.setHeightForWidth(dimensionStaticLabel->sizePolicy().hasHeightForWidth());
        dimensionStaticLabel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(dimensionStaticLabel);

        mBackgroundValueSpinBox = new QSpinBox(frame_3);
        mBackgroundValueSpinBox->setObjectName(QString::fromUtf8("mBackgroundValueSpinBox"));

        horizontalLayout->addWidget(mBackgroundValueSpinBox);

        mBGModeCheckBox = new QCheckBox(frame_3);
        mBGModeCheckBox->setObjectName(QString::fromUtf8("mBGModeCheckBox"));

        horizontalLayout->addWidget(mBGModeCheckBox);


        verticalLayout_5->addWidget(frame_3);

        frame_4 = new QFrame(vvToolROIManager);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setEnabled(true);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_4);
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        vectorFieldNameLabel_5 = new QLabel(frame_4);
        vectorFieldNameLabel_5->setObjectName(QString::fromUtf8("vectorFieldNameLabel_5"));
        sizePolicy1.setHeightForWidth(vectorFieldNameLabel_5->sizePolicy().hasHeightForWidth());
        vectorFieldNameLabel_5->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(vectorFieldNameLabel_5);

        mOpenDicomButton = new QPushButton(frame_4);
        mOpenDicomButton->setObjectName(QString::fromUtf8("mOpenDicomButton"));
        sizePolicy2.setHeightForWidth(mOpenDicomButton->sizePolicy().hasHeightForWidth());
        mOpenDicomButton->setSizePolicy(sizePolicy2);
        mOpenDicomButton->setMaximumSize(QSize(24, 24));
        mOpenDicomButton->setIcon(icon);

        horizontalLayout_10->addWidget(mOpenDicomButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);


        verticalLayout_5->addWidget(frame_4);

        mTree = new QTreeWidget(vvToolROIManager);
        new QTreeWidgetItem(mTree);
        mTree->setObjectName(QString::fromUtf8("mTree"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mTree->sizePolicy().hasHeightForWidth());
        mTree->setSizePolicy(sizePolicy3);
        mTree->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(9);
        mTree->setFont(font1);
        mTree->setEditTriggers(QAbstractItemView::AllEditTriggers);
        mTree->setTabKeyNavigation(true);
        mTree->setAlternatingRowColors(true);
        mTree->setSelectionMode(QAbstractItemView::SingleSelection);
        mTree->setSelectionBehavior(QAbstractItemView::SelectRows);
        mTree->setAnimated(true);
        mTree->setWordWrap(true);

        verticalLayout_5->addWidget(mTree);

        frame = new QFrame(vvToolROIManager);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mGroupBoxROI = new QGroupBox(frame);
        mGroupBoxROI->setObjectName(QString::fromUtf8("mGroupBoxROI"));
        sizePolicy1.setHeightForWidth(mGroupBoxROI->sizePolicy().hasHeightForWidth());
        mGroupBoxROI->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(mGroupBoxROI);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mCheckBoxShow = new QCheckBox(mGroupBoxROI);
        mCheckBoxShow->setObjectName(QString::fromUtf8("mCheckBoxShow"));
        mCheckBoxShow->setChecked(false);

        horizontalLayout_8->addWidget(mCheckBoxShow);

        mChangeColorButton = new QPushButton(mGroupBoxROI);
        mChangeColorButton->setObjectName(QString::fromUtf8("mChangeColorButton"));
        mChangeColorButton->setAutoFillBackground(false);

        horizontalLayout_8->addWidget(mChangeColorButton);

        mReloadButton = new QPushButton(mGroupBoxROI);
        mReloadButton->setObjectName(QString::fromUtf8("mReloadButton"));
        mReloadButton->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/common/icons/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        mReloadButton->setIcon(icon1);

        horizontalLayout_8->addWidget(mReloadButton);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        vectorFieldNameLabel_7 = new QLabel(mGroupBoxROI);
        vectorFieldNameLabel_7->setObjectName(QString::fromUtf8("vectorFieldNameLabel_7"));
        sizePolicy1.setHeightForWidth(vectorFieldNameLabel_7->sizePolicy().hasHeightForWidth());
        vectorFieldNameLabel_7->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(vectorFieldNameLabel_7);

        mOpacitySlider = new QSlider(mGroupBoxROI);
        mOpacitySlider->setObjectName(QString::fromUtf8("mOpacitySlider"));
        mOpacitySlider->setMaximum(100);
        mOpacitySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(mOpacitySlider);

        mOpacitySpinBox = new QSpinBox(mGroupBoxROI);
        mOpacitySpinBox->setObjectName(QString::fromUtf8("mOpacitySpinBox"));
        mOpacitySpinBox->setMaximum(100);

        horizontalLayout_5->addWidget(mOpacitySpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mContourCheckBoxShow = new QCheckBox(mGroupBoxROI);
        mContourCheckBoxShow->setObjectName(QString::fromUtf8("mContourCheckBoxShow"));
        mContourCheckBoxShow->setChecked(false);

        horizontalLayout_9->addWidget(mContourCheckBoxShow);

        mChangeContourColorButton = new QPushButton(mGroupBoxROI);
        mChangeContourColorButton->setObjectName(QString::fromUtf8("mChangeContourColorButton"));
        mChangeContourColorButton->setAutoFillBackground(false);

        horizontalLayout_9->addWidget(mChangeContourColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mROInameLabel_2 = new QLabel(mGroupBoxROI);
        mROInameLabel_2->setObjectName(QString::fromUtf8("mROInameLabel_2"));
        sizePolicy1.setHeightForWidth(mROInameLabel_2->sizePolicy().hasHeightForWidth());
        mROInameLabel_2->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(mROInameLabel_2);

        mContourWidthSpinBox = new QSpinBox(mGroupBoxROI);
        mContourWidthSpinBox->setObjectName(QString::fromUtf8("mContourWidthSpinBox"));
        mContourWidthSpinBox->setMinimum(1);
        mContourWidthSpinBox->setMaximum(10);

        horizontalLayout_6->addWidget(mContourWidthSpinBox);


        horizontalLayout_9->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mROInameLabel = new QLabel(mGroupBoxROI);
        mROInameLabel->setObjectName(QString::fromUtf8("mROInameLabel"));
        sizePolicy1.setHeightForWidth(mROInameLabel->sizePolicy().hasHeightForWidth());
        mROInameLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(mROInameLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        mRemoveButton = new QPushButton(mGroupBoxROI);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/common/icons/standardbutton-cancel-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveButton->setIcon(icon2);

        horizontalLayout_3->addWidget(mRemoveButton);

        mROInameLabel_3 = new QLabel(mGroupBoxROI);
        mROInameLabel_3->setObjectName(QString::fromUtf8("mROInameLabel_3"));
        sizePolicy1.setHeightForWidth(mROInameLabel_3->sizePolicy().hasHeightForWidth());
        mROInameLabel_3->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(mROInameLabel_3);

        mDepthSpinBox = new QSpinBox(mGroupBoxROI);
        mDepthSpinBox->setObjectName(QString::fromUtf8("mDepthSpinBox"));
        mDepthSpinBox->setMinimum(1);
        mDepthSpinBox->setMaximum(999999);

        horizontalLayout_3->addWidget(mDepthSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addWidget(mGroupBoxROI, 0, 0, 1, 1);


        verticalLayout_5->addWidget(frame);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        frame_2 = new QFrame(vvToolROIManager);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 1);
        mCheckBoxShowAll = new QCheckBox(groupBox);
        mCheckBoxShowAll->setObjectName(QString::fromUtf8("mCheckBoxShowAll"));
        mCheckBoxShowAll->setChecked(false);
        mCheckBoxShowAll->setTristate(true);

        verticalLayout_4->addWidget(mCheckBoxShowAll);

        mContourCheckBoxShowAll = new QCheckBox(groupBox);
        mContourCheckBoxShowAll->setObjectName(QString::fromUtf8("mContourCheckBoxShowAll"));
        mContourCheckBoxShowAll->setChecked(false);
        mContourCheckBoxShowAll->setTristate(true);

        verticalLayout_4->addWidget(mContourCheckBoxShowAll);


        verticalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_4->addWidget(groupBox);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(frame_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mROInameLabel_4 = new QLabel(vvToolROIManager);
        mROInameLabel_4->setObjectName(QString::fromUtf8("mROInameLabel_4"));
        sizePolicy1.setHeightForWidth(mROInameLabel_4->sizePolicy().hasHeightForWidth());
        mROInameLabel_4->setSizePolicy(sizePolicy1);
        mROInameLabel_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(mROInameLabel_4);

        mCloseButton = new QPushButton(vvToolROIManager);
        mCloseButton->setObjectName(QString::fromUtf8("mCloseButton"));
        mCloseButton->setAutoFillBackground(false);
        mCloseButton->setIcon(icon2);

        verticalLayout_3->addWidget(mCloseButton);


        horizontalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_7);

        QWidget::setTabOrder(mOpenBinaryButton, mBackgroundValueSpinBox);
        QWidget::setTabOrder(mBackgroundValueSpinBox, mBGModeCheckBox);
        QWidget::setTabOrder(mBGModeCheckBox, mOpenDicomButton);
        QWidget::setTabOrder(mOpenDicomButton, mTree);
        QWidget::setTabOrder(mTree, mCheckBoxShow);
        QWidget::setTabOrder(mCheckBoxShow, mChangeColorButton);
        QWidget::setTabOrder(mChangeColorButton, mReloadButton);
        QWidget::setTabOrder(mReloadButton, mOpacitySlider);
        QWidget::setTabOrder(mOpacitySlider, mOpacitySpinBox);
        QWidget::setTabOrder(mOpacitySpinBox, mContourCheckBoxShow);
        QWidget::setTabOrder(mContourCheckBoxShow, mChangeContourColorButton);
        QWidget::setTabOrder(mChangeContourColorButton, mContourWidthSpinBox);
        QWidget::setTabOrder(mContourWidthSpinBox, mDepthSpinBox);
        QWidget::setTabOrder(mDepthSpinBox, mCheckBoxShowAll);
        QWidget::setTabOrder(mCheckBoxShowAll, mContourCheckBoxShowAll);
        QWidget::setTabOrder(mContourCheckBoxShowAll, mCloseButton);

        retranslateUi(vvToolROIManager);
        QObject::connect(mOpacitySlider, SIGNAL(valueChanged(int)), mOpacitySpinBox, SLOT(setValue(int)));
        QObject::connect(mOpacitySpinBox, SIGNAL(valueChanged(int)), mOpacitySlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(vvToolROIManager);
    } // setupUi

    void retranslateUi(QWidget *vvToolROIManager)
    {
        vvToolROIManager->setWindowTitle(QApplication::translate("vvToolROIManager", "Form", nullptr));
        mLabelInputInfo->setText(QApplication::translate("vvToolROIManager", "No selected image", nullptr));
        vectorFieldNameLabel_4->setText(QApplication::translate("vvToolROIManager", "Load ROI from image", nullptr));
#ifndef QT_NO_TOOLTIP
        mOpenBinaryButton->setToolTip(QApplication::translate("vvToolROIManager", "Open label image", nullptr));
#endif // QT_NO_TOOLTIP
        mOpenBinaryButton->setText(QString());
        dimensionStaticLabel->setText(QApplication::translate("vvToolROIManager", "BG", nullptr));
#ifndef QT_NO_TOOLTIP
        mBGModeCheckBox->setToolTip(QApplication::translate("vvToolROIManager", "Tick if you want to consider FG mode instead of BG mode.", nullptr));
#endif // QT_NO_TOOLTIP
        mBGModeCheckBox->setText(QApplication::translate("vvToolROIManager", "FG ?", nullptr));
        vectorFieldNameLabel_5->setText(QApplication::translate("vvToolROIManager", "Load DICOM-RT-Struct", nullptr));
#ifndef QT_NO_TOOLTIP
        mOpenDicomButton->setToolTip(QApplication::translate("vvToolROIManager", "Open label image", nullptr));
#endif // QT_NO_TOOLTIP
        mOpenDicomButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = mTree->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("vvToolROIManager", "Depth", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("vvToolROIManager", "Color", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("vvToolROIManager", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("vvToolROIManager", "ID", nullptr));

        const bool __sortingEnabled = mTree->isSortingEnabled();
        mTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = mTree->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QApplication::translate("vvToolROIManager", "Red", nullptr));
        ___qtreewidgetitem1->setText(1, QApplication::translate("vvToolROIManager", "Toto.mhd.toiefkjhfdjvhjhf", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("vvToolROIManager", "10", nullptr));
        mTree->setSortingEnabled(__sortingEnabled);

        mGroupBoxROI->setTitle(QApplication::translate("vvToolROIManager", "Selected ROI", nullptr));
        mCheckBoxShow->setText(QApplication::translate("vvToolROIManager", "Visible", nullptr));
#ifndef QT_NO_TOOLTIP
        mChangeColorButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mChangeColorButton->setText(QApplication::translate("vvToolROIManager", "Color", nullptr));
#ifndef QT_NO_TOOLTIP
        mReloadButton->setToolTip(QApplication::translate("vvToolROIManager", "Reload image", nullptr));
#endif // QT_NO_TOOLTIP
        mReloadButton->setText(QString());
        vectorFieldNameLabel_7->setText(QApplication::translate("vvToolROIManager", "Opacity", nullptr));
        mContourCheckBoxShow->setText(QApplication::translate("vvToolROIManager", "Contour", nullptr));
#ifndef QT_NO_TOOLTIP
        mChangeContourColorButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mChangeContourColorButton->setText(QApplication::translate("vvToolROIManager", "Color", nullptr));
        mROInameLabel_2->setText(QApplication::translate("vvToolROIManager", "Width", nullptr));
        mROInameLabel->setText(QString());
        mRemoveButton->setText(QApplication::translate("vvToolROIManager", "1", nullptr));
        mROInameLabel_3->setText(QApplication::translate("vvToolROIManager", "Depth", nullptr));
        groupBox->setTitle(QApplication::translate("vvToolROIManager", "All ROI", nullptr));
        mCheckBoxShowAll->setText(QApplication::translate("vvToolROIManager", "Set all ROI visible", nullptr));
        mContourCheckBoxShowAll->setText(QApplication::translate("vvToolROIManager", "Set all contours visible", nullptr));
        mROInameLabel_4->setText(QApplication::translate("vvToolROIManager", "Close tab", nullptr));
#ifndef QT_NO_TOOLTIP
        mCloseButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mCloseButton->setText(QApplication::translate("vvToolROIManager", "All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolROIManager: public Ui_vvToolROIManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLROIMANAGER_H
