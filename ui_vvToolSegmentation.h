/********************************************************************************
** Form generated from reading UI file 'vvToolSegmentation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLSEGMENTATION_H
#define UI_VVTOOLSEGMENTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolSegmentation
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *mRefMaskSizeLabel;
    QLabel *label_3;
    QLabel *mCurrentMaskSizeLabel;
    QLabel *label_4;
    QTextEdit *textEdit;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_9;
    QLabel *label;
    QTextEdit *mLogText;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *vvToolSegmentation)
    {
        if (vvToolSegmentation->objectName().isEmpty())
            vvToolSegmentation->setObjectName(QString::fromUtf8("vvToolSegmentation"));
        vvToolSegmentation->resize(401, 489);
        verticalLayout = new QVBoxLayout(vvToolSegmentation);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(vvToolSegmentation);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        mRefMaskSizeLabel = new QLabel(frame);
        mRefMaskSizeLabel->setObjectName(QString::fromUtf8("mRefMaskSizeLabel"));

        gridLayout_2->addWidget(mRefMaskSizeLabel, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        mCurrentMaskSizeLabel = new QLabel(frame);
        mCurrentMaskSizeLabel->setObjectName(QString::fromUtf8("mCurrentMaskSizeLabel"));

        gridLayout_2->addWidget(mCurrentMaskSizeLabel, 1, 1, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 50));

        gridLayout_2->addWidget(textEdit, 2, 1, 1, 1);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(vvToolSegmentation);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 1, 1, 1);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 1, 1, 1, 1);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 1, 1, 1);

        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 3, 0, 1, 1);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 3, 1, 1, 1);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 4, 0, 1, 1);

        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 4, 1, 1, 1);

        label_19 = new QLabel(frame_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 5, 0, 1, 1);

        label_20 = new QLabel(frame_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 5, 1, 1, 1);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        label = new QLabel(vvToolSegmentation);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mLogText = new QTextEdit(vvToolSegmentation);
        mLogText->setObjectName(QString::fromUtf8("mLogText"));
        mLogText->setReadOnly(true);

        verticalLayout->addWidget(mLogText);

        pushButton_2 = new QPushButton(vvToolSegmentation);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(vvToolSegmentation);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(vvToolSegmentation);

        QMetaObject::connectSlotsByName(vvToolSegmentation);
    } // setupUi

    void retranslateUi(QWidget *vvToolSegmentation)
    {
        vvToolSegmentation->setWindowTitle(QApplication::translate("vvToolSegmentation", "Binarize image", nullptr));
        label_2->setText(QApplication::translate("vvToolSegmentation", "Ref mask size", nullptr));
        mRefMaskSizeLabel->setText(QApplication::translate("vvToolSegmentation", "12303 voxels (65464 mm3)", nullptr));
        label_3->setText(QApplication::translate("vvToolSegmentation", "Current mask size", nullptr));
        mCurrentMaskSizeLabel->setText(QApplication::translate("vvToolSegmentation", "12303 voxels (65464 mm3)", nullptr));
        label_4->setText(QApplication::translate("vvToolSegmentation", "Label mask sizes", nullptr));
        label_10->setText(QApplication::translate("vvToolSegmentation", "12 56 32", nullptr));
        label_12->setText(QApplication::translate("vvToolSegmentation", "Current pos (mm)", nullptr));
        label_11->setText(QApplication::translate("vvToolSegmentation", "12.3 56.6 32.9", nullptr));
        label_14->setText(QApplication::translate("vvToolSegmentation", "Image value", nullptr));
        label_13->setText(QApplication::translate("vvToolSegmentation", "236", nullptr));
        label_15->setText(QApplication::translate("vvToolSegmentation", "Ref mask", nullptr));
        label_16->setText(QApplication::translate("vvToolSegmentation", "Inside", nullptr));
        label_18->setText(QApplication::translate("vvToolSegmentation", "Current mask", nullptr));
        label_17->setText(QApplication::translate("vvToolSegmentation", "Outside", nullptr));
        label_19->setText(QApplication::translate("vvToolSegmentation", "Label mask", nullptr));
        label_20->setText(QApplication::translate("vvToolSegmentation", "Outside", nullptr));
        label_9->setText(QApplication::translate("vvToolSegmentation", "Current pos (pix)", nullptr));
        label->setText(QApplication::translate("vvToolSegmentation", "Log", nullptr));
        pushButton_2->setText(QApplication::translate("vvToolSegmentation", "Save current mask", nullptr));
        pushButton->setText(QApplication::translate("vvToolSegmentation", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolSegmentation: public Ui_vvToolSegmentation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLSEGMENTATION_H
