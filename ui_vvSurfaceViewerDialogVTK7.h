/********************************************************************************
** Form generated from reading UI file 'vvSurfaceViewerDialogVTK7.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVSURFACEVIEWERDIALOGVTK7_H
#define UI_VVSURFACEVIEWERDIALOGVTK7_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_vvSurfaceViewerDialog
{
public:
    QGridLayout *gridLayout;
    QVTKWidget *renderWidget;
    QSpacerItem *spacerItem;
    QPushButton *loadButton;
    QPushButton *closeButton;

    void setupUi(QDialog *vvSurfaceViewerDialog)
    {
        if (vvSurfaceViewerDialog->objectName().isEmpty())
            vvSurfaceViewerDialog->setObjectName(QString::fromUtf8("vvSurfaceViewerDialog"));
        vvSurfaceViewerDialog->resize(554, 472);
        gridLayout = new QGridLayout(vvSurfaceViewerDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        renderWidget = new QVTKWidget(vvSurfaceViewerDialog);
        renderWidget->setObjectName(QString::fromUtf8("renderWidget"));

        gridLayout->addWidget(renderWidget, 0, 0, 1, 3);

        spacerItem = new QSpacerItem(311, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        loadButton = new QPushButton(vvSurfaceViewerDialog);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        gridLayout->addWidget(loadButton, 1, 1, 1, 1);

        closeButton = new QPushButton(vvSurfaceViewerDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 1, 2, 1, 1);


        retranslateUi(vvSurfaceViewerDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), vvSurfaceViewerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvSurfaceViewerDialog);
    } // setupUi

    void retranslateUi(QDialog *vvSurfaceViewerDialog)
    {
        vvSurfaceViewerDialog->setWindowTitle(QApplication::translate("vvSurfaceViewerDialog", "Dialog", nullptr));
        loadButton->setText(QApplication::translate("vvSurfaceViewerDialog", "Load", nullptr));
        closeButton->setText(QApplication::translate("vvSurfaceViewerDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvSurfaceViewerDialog: public Ui_vvSurfaceViewerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVSURFACEVIEWERDIALOGVTK7_H
