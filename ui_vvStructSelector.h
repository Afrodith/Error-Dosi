/********************************************************************************
** Form generated from reading UI file 'vvStructSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVSTRUCTSELECTOR_H
#define UI_VVSTRUCTSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_vvStructSelector
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *structSelectionWidget;
    QCheckBox *propagateCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *vvStructSelector)
    {
        if (vvStructSelector->objectName().isEmpty())
            vvStructSelector->setObjectName(QString::fromUtf8("vvStructSelector"));
        vvStructSelector->resize(365, 389);
        verticalLayout = new QVBoxLayout(vvStructSelector);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        structSelectionWidget = new QListWidget(vvStructSelector);
        structSelectionWidget->setObjectName(QString::fromUtf8("structSelectionWidget"));
        structSelectionWidget->setSelectionMode(QAbstractItemView::MultiSelection);

        verticalLayout->addWidget(structSelectionWidget);

        propagateCheckBox = new QCheckBox(vvStructSelector);
        propagateCheckBox->setObjectName(QString::fromUtf8("propagateCheckBox"));
        propagateCheckBox->setEnabled(false);

        verticalLayout->addWidget(propagateCheckBox);

        buttonBox = new QDialogButtonBox(vvStructSelector);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(vvStructSelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), vvStructSelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), vvStructSelector, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvStructSelector);
    } // setupUi

    void retranslateUi(QDialog *vvStructSelector)
    {
        vvStructSelector->setWindowTitle(QApplication::translate("vvStructSelector", "Select contours to open", nullptr));
        propagateCheckBox->setText(QApplication::translate("vvStructSelector", "Propagate contours with vector field?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvStructSelector: public Ui_vvStructSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVSTRUCTSELECTOR_H
