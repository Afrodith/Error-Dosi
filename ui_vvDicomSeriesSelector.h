/********************************************************************************
** Form generated from reading UI file 'vvDicomSeriesSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVDICOMSERIESSELECTOR_H
#define UI_VVDICOMSERIESSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvDicomSeriesSelector
{
public:
    QVBoxLayout *vboxLayout;
    QSplitter *splitter_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget0;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *mFolderLineEdit;
    QToolButton *mBrowseButton;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *mIsRecursiveCheckBox;
    QPushButton *mSearchButton;
    QListWidget *mListWidget;
    QVBoxLayout *_2;
    QLabel *mLabelSelected;
    QLabel *mDicomInfoPanel;
    QFrame *frame_2;
    QGridLayout *gridLayout1;
    QSplitter *splitter_2;
    QWidget *layoutWidget1;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mLabelSelected_3;
    QCheckBox *mIsMatrixCheckBox;
    QListWidget *mDicomDetailsListWidget;
    QWidget *layoutWidget2;
    QVBoxLayout *vboxLayout2;
    QLabel *mLabelSelected_2;
    QTextBrowser *mDicomDetailsLabel;
    QHBoxLayout *hboxLayout;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *vvDicomSeriesSelector)
    {
        if (vvDicomSeriesSelector->objectName().isEmpty())
            vvDicomSeriesSelector->setObjectName(QString::fromUtf8("vvDicomSeriesSelector"));
        vvDicomSeriesSelector->setWindowModality(Qt::WindowModal);
        vvDicomSeriesSelector->resize(943, 645);
        vvDicomSeriesSelector->setMouseTracking(true);
        vvDicomSeriesSelector->setFocusPolicy(Qt::WheelFocus);
        vboxLayout = new QVBoxLayout(vvDicomSeriesSelector);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        splitter_3 = new QSplitter(vvDicomSeriesSelector);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        frame = new QFrame(splitter_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        gridLayout = new QGridLayout(frame);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget0 = new QWidget(splitter);
        layoutWidget0->setObjectName(QString::fromUtf8("layoutWidget0"));
        verticalLayout = new QVBoxLayout(layoutWidget0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget0);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        mFolderLineEdit = new QLineEdit(layoutWidget0);
        mFolderLineEdit->setObjectName(QString::fromUtf8("mFolderLineEdit"));
        mFolderLineEdit->setFrame(false);
        mFolderLineEdit->setDragEnabled(true);

        horizontalLayout->addWidget(mFolderLineEdit);

        mBrowseButton = new QToolButton(layoutWidget0);
        mBrowseButton->setObjectName(QString::fromUtf8("mBrowseButton"));

        horizontalLayout->addWidget(mBrowseButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mIsRecursiveCheckBox = new QCheckBox(layoutWidget0);
        mIsRecursiveCheckBox->setObjectName(QString::fromUtf8("mIsRecursiveCheckBox"));

        horizontalLayout_2->addWidget(mIsRecursiveCheckBox);

        mSearchButton = new QPushButton(layoutWidget0);
        mSearchButton->setObjectName(QString::fromUtf8("mSearchButton"));

        horizontalLayout_2->addWidget(mSearchButton);


        verticalLayout->addLayout(horizontalLayout_2);

        mListWidget = new QListWidget(layoutWidget0);
        mListWidget->setObjectName(QString::fromUtf8("mListWidget"));
        mListWidget->setMouseTracking(true);
        mListWidget->setFocusPolicy(Qt::TabFocus);
        mListWidget->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        mListWidget->setTabKeyNavigation(true);
        mListWidget->setAlternatingRowColors(true);
        mListWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        mListWidget->setViewMode(QListView::ListMode);
        mListWidget->setModelColumn(0);

        verticalLayout->addWidget(mListWidget);

        splitter->addWidget(layoutWidget0);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        _2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
        _2->setContentsMargins(0, 0, 0, 0);
        _2->setObjectName(QString::fromUtf8("_2"));
        mLabelSelected = new QLabel(frame);
        mLabelSelected->setObjectName(QString::fromUtf8("mLabelSelected"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mLabelSelected->sizePolicy().hasHeightForWidth());
        mLabelSelected->setSizePolicy(sizePolicy);
        mLabelSelected->setTextFormat(Qt::RichText);

        _2->addWidget(mLabelSelected);

        mDicomInfoPanel = new QLabel(frame);
        mDicomInfoPanel->setObjectName(QString::fromUtf8("mDicomInfoPanel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDicomInfoPanel->sizePolicy().hasHeightForWidth());
        mDicomInfoPanel->setSizePolicy(sizePolicy1);
        mDicomInfoPanel->setFrameShape(QFrame::StyledPanel);
        mDicomInfoPanel->setTextFormat(Qt::RichText);
        mDicomInfoPanel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        _2->addWidget(mDicomInfoPanel);


        gridLayout->addLayout(_2, 0, 1, 1, 1);

        splitter_3->addWidget(frame);
        frame_2 = new QFrame(splitter_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(frame_2);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        splitter_2 = new QSplitter(frame_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(splitter_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        vboxLayout1 = new QVBoxLayout(layoutWidget1);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mLabelSelected_3 = new QLabel(layoutWidget1);
        mLabelSelected_3->setObjectName(QString::fromUtf8("mLabelSelected_3"));
        sizePolicy.setHeightForWidth(mLabelSelected_3->sizePolicy().hasHeightForWidth());
        mLabelSelected_3->setSizePolicy(sizePolicy);
        mLabelSelected_3->setTextFormat(Qt::RichText);

        horizontalLayout_3->addWidget(mLabelSelected_3);

        mIsMatrixCheckBox = new QCheckBox(layoutWidget1);
        mIsMatrixCheckBox->setObjectName(QString::fromUtf8("mIsMatrixCheckBox"));

        horizontalLayout_3->addWidget(mIsMatrixCheckBox);


        vboxLayout1->addLayout(horizontalLayout_3);

        mDicomDetailsListWidget = new QListWidget(layoutWidget1);
        mDicomDetailsListWidget->setObjectName(QString::fromUtf8("mDicomDetailsListWidget"));
        mDicomDetailsListWidget->setFocusPolicy(Qt::TabFocus);
        mDicomDetailsListWidget->setAlternatingRowColors(true);

        vboxLayout1->addWidget(mDicomDetailsListWidget);

        splitter_2->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        vboxLayout2 = new QVBoxLayout(layoutWidget2);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        mLabelSelected_2 = new QLabel(layoutWidget2);
        mLabelSelected_2->setObjectName(QString::fromUtf8("mLabelSelected_2"));
        sizePolicy.setHeightForWidth(mLabelSelected_2->sizePolicy().hasHeightForWidth());
        mLabelSelected_2->setSizePolicy(sizePolicy);
        mLabelSelected_2->setTextFormat(Qt::RichText);

        vboxLayout2->addWidget(mLabelSelected_2);

        mDicomDetailsLabel = new QTextBrowser(layoutWidget2);
        mDicomDetailsLabel->setObjectName(QString::fromUtf8("mDicomDetailsLabel"));

        vboxLayout2->addWidget(mDicomDetailsLabel);

        splitter_2->addWidget(layoutWidget2);

        gridLayout1->addWidget(splitter_2, 0, 0, 1, 1);

        splitter_3->addWidget(frame_2);

        vboxLayout->addWidget(splitter_3);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_3 = new QLabel(vvDicomSeriesSelector);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setTextFormat(Qt::RichText);

        hboxLayout->addWidget(label_3);

        spacerItem = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        mButtonBox = new QDialogButtonBox(vvDicomSeriesSelector);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Open);

        hboxLayout->addWidget(mButtonBox);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(mDicomDetailsListWidget, mButtonBox);
        QWidget::setTabOrder(mButtonBox, mDicomDetailsLabel);

        retranslateUi(vvDicomSeriesSelector);
        QObject::connect(mButtonBox, SIGNAL(accepted()), vvDicomSeriesSelector, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), vvDicomSeriesSelector, SLOT(reject()));

        mListWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(vvDicomSeriesSelector);
    } // setupUi

    void retranslateUi(QDialog *vvDicomSeriesSelector)
    {
        vvDicomSeriesSelector->setWindowTitle(QApplication::translate("vvDicomSeriesSelector", "Dicom Series Selector", nullptr));
        label_2->setText(QApplication::translate("vvDicomSeriesSelector", "Search in this folder :", nullptr));
        mBrowseButton->setText(QApplication::translate("vvDicomSeriesSelector", "...", nullptr));
        mIsRecursiveCheckBox->setText(QApplication::translate("vvDicomSeriesSelector", "Search recursively", nullptr));
        mSearchButton->setText(QApplication::translate("vvDicomSeriesSelector", "Search DICOM", nullptr));
        mLabelSelected->setText(QApplication::translate("vvDicomSeriesSelector", "<b>Current DICOM serie</b>", nullptr));
        mDicomInfoPanel->setText(QString());
        mLabelSelected_3->setText(QApplication::translate("vvDicomSeriesSelector", "<b>Files in current DICOM serie</b>", nullptr));
        mIsMatrixCheckBox->setText(QApplication::translate("vvDicomSeriesSelector", "Patient coordinate system", nullptr));
        mLabelSelected_2->setText(QApplication::translate("vvDicomSeriesSelector", "<b>Current DICOM file</b>", nullptr));
        label_3->setText(QApplication::translate("vvDicomSeriesSelector", "<font color=\"blue\">(1)</font> Select a folder,  <font color=\"blue\">(2)</font> Press <b>Search DICOM</b>, <br> <font color=\"blue\">(3)</font> Select a serie ID in the left table, <font color=\"blue\">(4)</font> Press <b>Open</b>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvDicomSeriesSelector: public Ui_vvDicomSeriesSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVDICOMSERIESSELECTOR_H
