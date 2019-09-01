/********************************************************************************
** Form generated from reading UI file 'vvToolInputSelectorWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLINPUTSELECTORWIDGET_H
#define UI_VVTOOLINPUTSELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolInputSelectorWidget
{
public:
    QVBoxLayout *mVerticalLayout;

    void setupUi(QWidget *vvToolInputSelectorWidget)
    {
        if (vvToolInputSelectorWidget->objectName().isEmpty())
            vvToolInputSelectorWidget->setObjectName(QString::fromUtf8("vvToolInputSelectorWidget"));
        vvToolInputSelectorWidget->resize(676, 381);
        QFont font;
        font.setPointSize(8);
        vvToolInputSelectorWidget->setFont(font);
        vvToolInputSelectorWidget->setAutoFillBackground(false);
        mVerticalLayout = new QVBoxLayout(vvToolInputSelectorWidget);
        mVerticalLayout->setObjectName(QString::fromUtf8("mVerticalLayout"));

        retranslateUi(vvToolInputSelectorWidget);

        QMetaObject::connectSlotsByName(vvToolInputSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *vvToolInputSelectorWidget)
    {
        vvToolInputSelectorWidget->setWindowTitle(QApplication::translate("vvToolInputSelectorWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolInputSelectorWidget: public Ui_vvToolInputSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLINPUTSELECTORWIDGET_H
