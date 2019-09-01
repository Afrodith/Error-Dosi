/********************************************************************************
** Form generated from reading UI file 'vvToolSimpleInputSelectorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLSIMPLEINPUTSELECTORWIDGET_H
#define UI_VVTOOLSIMPLEINPUTSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolSimpleInputSelectorWidget
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *mGroupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *mInputSequenceBox;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *mLabelInputInfo;
    QDialogButtonBox *mInputSelectionButtonBox;

    void setupUi(QWidget *vvToolSimpleInputSelectorWidget)
    {
        if (vvToolSimpleInputSelectorWidget->objectName().isEmpty())
            vvToolSimpleInputSelectorWidget->setObjectName(QString::fromUtf8("vvToolSimpleInputSelectorWidget"));
        vvToolSimpleInputSelectorWidget->resize(407, 82);
        gridLayout_6 = new QGridLayout(vvToolSimpleInputSelectorWidget);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mGroupBox = new QGroupBox(vvToolSimpleInputSelectorWidget);
        mGroupBox->setObjectName(QString::fromUtf8("mGroupBox"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        mGroupBox->setFont(font);
        verticalLayout = new QVBoxLayout(mGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 2, -1, 0);
        widget_2 = new QWidget(mGroupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_5 = new QGridLayout(widget_2);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mInputSequenceBox = new QComboBox(widget_2);
        mInputSequenceBox->addItem(QString());
        mInputSequenceBox->setObjectName(QString::fromUtf8("mInputSequenceBox"));
        mInputSequenceBox->setEnabled(true);
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        mInputSequenceBox->setFont(font1);

        horizontalLayout_2->addWidget(mInputSequenceBox);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(mGroupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mLabelInputInfo = new QLabel(widget);
        mLabelInputInfo->setObjectName(QString::fromUtf8("mLabelInputInfo"));
        mLabelInputInfo->setFont(font1);
        mLabelInputInfo->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(mLabelInputInfo);

        mInputSelectionButtonBox = new QDialogButtonBox(widget);
        mInputSelectionButtonBox->setObjectName(QString::fromUtf8("mInputSelectionButtonBox"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        mInputSelectionButtonBox->setFont(font2);
        mInputSelectionButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(mInputSelectionButtonBox);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);


        gridLayout_6->addWidget(mGroupBox, 0, 0, 1, 1);


        retranslateUi(vvToolSimpleInputSelectorWidget);

        QMetaObject::connectSlotsByName(vvToolSimpleInputSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *vvToolSimpleInputSelectorWidget)
    {
        vvToolSimpleInputSelectorWidget->setWindowTitle(QApplication::translate("vvToolSimpleInputSelectorWidget", "Form", nullptr));
        mGroupBox->setTitle(QApplication::translate("vvToolSimpleInputSelectorWidget", "Select reference image", nullptr));
        mInputSequenceBox->setItemText(0, QApplication::translate("vvToolSimpleInputSelectorWidget", "Bidon image number 1", nullptr));

        mLabelInputInfo->setText(QApplication::translate("vvToolSimpleInputSelectorWidget", "No selected image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolSimpleInputSelectorWidget: public Ui_vvToolSimpleInputSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLSIMPLEINPUTSELECTORWIDGET_H
