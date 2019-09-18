/********************************************************************************
** Form generated from reading UI file 'Brachytherapy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRACHYTHERAPY_H
#define UI_BRACHYTHERAPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Brachytherapy
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *Brachytherapy)
    {
        if (Brachytherapy->objectName().isEmpty())
            Brachytherapy->setObjectName(QString::fromUtf8("Brachytherapy"));
        Brachytherapy->resize(923, 711);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Brachytherapy->sizePolicy().hasHeightForWidth());
        Brachytherapy->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(Brachytherapy);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 520, 91, 41));
        comboBox = new QComboBox(Brachytherapy);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 120, 211, 21));
        label = new QLabel(Brachytherapy);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 211, 17));
        label_2 = new QLabel(Brachytherapy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 171, 17));
        label_3 = new QLabel(Brachytherapy);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 620, 131, 17));
        verticalLayoutWidget = new QWidget(Brachytherapy);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 60, 571, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Brachytherapy);

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Brachytherapy);
    } // setupUi

    void retranslateUi(QDialog *Brachytherapy)
    {
        Brachytherapy->setWindowTitle(QApplication::translate("Brachytherapy", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Brachytherapy", "Submit", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QApplication::translate("Brachytherapy", "Amersham_Health_6711", nullptr));
        comboBox->setItemText(2, QApplication::translate("Brachytherapy", "Bebig_Theragenics", nullptr));
        comboBox->setItemText(3, QApplication::translate("Brachytherapy", "M-19_HDR", nullptr));
        comboBox->setItemText(4, QApplication::translate("Brachytherapy", "Nucletron_mHDR-v1", nullptr));
        comboBox->setItemText(5, QApplication::translate("Brachytherapy", "Nucletron_mPDR-v2", nullptr));
        comboBox->setItemText(6, QApplication::translate("Brachytherapy", "Varian_VS2000", nullptr));

        label->setText(QApplication::translate("Brachytherapy", "<html><head/><body><p align=\"center\">Brachytherapy Dosimetry</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Brachytherapy", "Brachytherapy Sources:", nullptr));
        label_3->setText(QApplication::translate("Brachytherapy", "Source 3D Model", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Brachytherapy: public Ui_Brachytherapy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRACHYTHERAPY_H
