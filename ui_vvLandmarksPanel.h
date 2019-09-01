/********************************************************************************
** Form generated from reading UI file 'vvLandmarksPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVLANDMARKSPANEL_H
#define UI_VVLANDMARKSPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvLandmarksPanel
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *removeButton;
    QPushButton *removeAllButton;
    QSpacerItem *spacer;
    QPushButton *loadButton;
    QPushButton *saveButton;
    QLabel *nameLabel;
    QPushButton *updateTransformButton;

    void setupUi(QWidget *vvLandmarksPanel)
    {
        if (vvLandmarksPanel->objectName().isEmpty())
            vvLandmarksPanel->setObjectName(QString::fromUtf8("vvLandmarksPanel"));
        vvLandmarksPanel->resize(382, 214);
        gridLayout = new QGridLayout(vvLandmarksPanel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(vvLandmarksPanel);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 2);

        tableWidget = new QTableWidget(vvLandmarksPanel);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setColumnCount(7);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 5);

        removeButton = new QPushButton(vvLandmarksPanel);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/common/icons/standardbutton-cancel-16.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon);

        gridLayout->addWidget(removeButton, 3, 0, 1, 1);

        removeAllButton = new QPushButton(vvLandmarksPanel);
        removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
        removeAllButton->setIcon(icon);

        gridLayout->addWidget(removeAllButton, 3, 1, 1, 1);

        spacer = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacer, 3, 2, 1, 1);

        loadButton = new QPushButton(vvLandmarksPanel);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/common/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton->setIcon(icon1);

        gridLayout->addWidget(loadButton, 3, 3, 1, 1);

        saveButton = new QPushButton(vvLandmarksPanel);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/common/icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveButton->setIcon(icon2);

        gridLayout->addWidget(saveButton, 3, 4, 1, 1);

        nameLabel = new QLabel(vvLandmarksPanel);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 5);

        updateTransformButton = new QPushButton(vvLandmarksPanel);
        updateTransformButton->setObjectName(QString::fromUtf8("updateTransformButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/common/icons/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateTransformButton->setIcon(icon3);

        gridLayout->addWidget(updateTransformButton, 1, 3, 1, 2);


        retranslateUi(vvLandmarksPanel);

        QMetaObject::connectSlotsByName(vvLandmarksPanel);
    } // setupUi

    void retranslateUi(QWidget *vvLandmarksPanel)
    {
        vvLandmarksPanel->setWindowTitle(QApplication::translate("vvLandmarksPanel", "Form", nullptr));
        label->setText(QApplication::translate("vvLandmarksPanel", "Coordinates are in mm", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("vvLandmarksPanel", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("vvLandmarksPanel", "x", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("vvLandmarksPanel", "y", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("vvLandmarksPanel", "z", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("vvLandmarksPanel", "t", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("vvLandmarksPanel", "pixel value", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("vvLandmarksPanel", "Comments", nullptr));
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("vvLandmarksPanel", "remove last landmark.", nullptr));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QApplication::translate("vvLandmarksPanel", "1", nullptr));
        removeAllButton->setText(QApplication::translate("vvLandmarksPanel", "All", nullptr));
        loadButton->setText(QApplication::translate("vvLandmarksPanel", "Load", nullptr));
        saveButton->setText(QApplication::translate("vvLandmarksPanel", "Save", nullptr));
        nameLabel->setText(QApplication::translate("vvLandmarksPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">CurrentImage :</span></p></body></html>", nullptr));
        updateTransformButton->setText(QApplication::translate("vvLandmarksPanel", "Update Coords.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvLandmarksPanel: public Ui_vvLandmarksPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVLANDMARKSPANEL_H
