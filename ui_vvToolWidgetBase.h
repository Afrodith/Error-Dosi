/********************************************************************************
** Form generated from reading UI file 'vvToolWidgetBase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLWIDGETBASE_H
#define UI_VVTOOLWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <VV/vv/vvToolInputSelectorWidget.h>

QT_BEGIN_NAMESPACE

class Ui_vvToolWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    vvToolInputSelectorWidget *mToolInputSelectionWidget;
    QWidget *mToolWidget;
    QDialogButtonBox *mMainButtonBox;

    void setupUi(QWidget *vvToolWidgetBase)
    {
        if (vvToolWidgetBase->objectName().isEmpty())
            vvToolWidgetBase->setObjectName(QString::fromUtf8("vvToolWidgetBase"));
        vvToolWidgetBase->resize(194, 62);
        verticalLayout = new QVBoxLayout(vvToolWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(vvToolWidgetBase);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        mToolInputSelectionWidget = new vvToolInputSelectorWidget(splitter);
        mToolInputSelectionWidget->setObjectName(QString::fromUtf8("mToolInputSelectionWidget"));
        mToolInputSelectionWidget->setMaximumSize(QSize(16777215, 200));
        splitter->addWidget(mToolInputSelectionWidget);
        mToolWidget = new QWidget(splitter);
        mToolWidget->setObjectName(QString::fromUtf8("mToolWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mToolWidget->sizePolicy().hasHeightForWidth());
        mToolWidget->setSizePolicy(sizePolicy);
        splitter->addWidget(mToolWidget);

        verticalLayout->addWidget(splitter);

        mMainButtonBox = new QDialogButtonBox(vvToolWidgetBase);
        mMainButtonBox->setObjectName(QString::fromUtf8("mMainButtonBox"));
        mMainButtonBox->setEnabled(false);
        mMainButtonBox->setOrientation(Qt::Horizontal);
        mMainButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mMainButtonBox);


        retranslateUi(vvToolWidgetBase);

        QMetaObject::connectSlotsByName(vvToolWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *vvToolWidgetBase)
    {
        vvToolWidgetBase->setWindowTitle(QApplication::translate("vvToolWidgetBase", "Image Tool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolWidgetBase: public Ui_vvToolWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLWIDGETBASE_H
