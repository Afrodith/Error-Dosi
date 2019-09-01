/********************************************************************************
** Form generated from reading UI file 'vvToolMIP.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLMIP_H
#define UI_VVTOOLMIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolMIP
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *dimensionSpinBox;

    void setupUi(QWidget *vvToolMIP)
    {
        if (vvToolMIP->objectName().isEmpty())
            vvToolMIP->setObjectName(QString::fromUtf8("vvToolMIP"));
        vvToolMIP->resize(319, 86);
        horizontalLayout = new QHBoxLayout(vvToolMIP);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(vvToolMIP);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        dimensionSpinBox = new QSpinBox(vvToolMIP);
        dimensionSpinBox->setObjectName(QString::fromUtf8("dimensionSpinBox"));

        horizontalLayout->addWidget(dimensionSpinBox);


        retranslateUi(vvToolMIP);

        QMetaObject::connectSlotsByName(vvToolMIP);
    } // setupUi

    void retranslateUi(QWidget *vvToolMIP)
    {
        vvToolMIP->setWindowTitle(QApplication::translate("vvToolMIP", "Form", nullptr));
        label->setText(QApplication::translate("vvToolMIP", "Projection Dimension", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolMIP: public Ui_vvToolMIP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLMIP_H
