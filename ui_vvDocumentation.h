/********************************************************************************
** Form generated from reading UI file 'vvDocumentation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVDOCUMENTATION_H
#define UI_VVDOCUMENTATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_vvDocumentation
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QSpacerItem *spacerItem1;
    QLabel *label_2;

    void setupUi(QDialog *vvDocumentation)
    {
        if (vvDocumentation->objectName().isEmpty())
            vvDocumentation->setObjectName(QString::fromUtf8("vvDocumentation"));
        vvDocumentation->resize(714, 565);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        vvDocumentation->setWindowIcon(icon);
        gridLayout = new QGridLayout(vvDocumentation);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(vvDocumentation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/common/icons/splashscreen2.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 3, 0, 1, 1);

        okButton = new QPushButton(vvDocumentation);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 3, 1, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 3, 2, 1, 1);

        label_2 = new QLabel(vvDocumentation);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 3);


        retranslateUi(vvDocumentation);
        QObject::connect(okButton, SIGNAL(clicked()), vvDocumentation, SLOT(accept()));

        QMetaObject::connectSlotsByName(vvDocumentation);
    } // setupUi

    void retranslateUi(QDialog *vvDocumentation)
    {
        vvDocumentation->setWindowTitle(QApplication::translate("vvDocumentation", "About", nullptr));
        label->setText(QString());
        okButton->setText(QApplication::translate("vvDocumentation", "Ok", nullptr));
        label_2->setText(QApplication::translate("vvDocumentation", "Press 'Ctrl+h' to obtain navigation help !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvDocumentation: public Ui_vvDocumentation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVDOCUMENTATION_H
