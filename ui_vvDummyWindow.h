/********************************************************************************
** Form generated from reading UI file 'vvDummyWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVDUMMYWINDOW_H
#define UI_VVDUMMYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvDummyWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *vvDummyWindow)
    {
        if (vvDummyWindow->objectName().isEmpty())
            vvDummyWindow->setObjectName(QString::fromUtf8("vvDummyWindow"));
        vvDummyWindow->resize(589, 475);
        centralwidget = new QWidget(vvDummyWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 130, 291, 181));
        vvDummyWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(vvDummyWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 589, 22));
        vvDummyWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(vvDummyWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        vvDummyWindow->setStatusBar(statusbar);

        retranslateUi(vvDummyWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), vvDummyWindow, SLOT(Run()));

        QMetaObject::connectSlotsByName(vvDummyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *vvDummyWindow)
    {
        vvDummyWindow->setWindowTitle(QApplication::translate("vvDummyWindow", "DummyApp\342\204\242", nullptr));
        pushButton->setText(QApplication::translate("vvDummyWindow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvDummyWindow: public Ui_vvDummyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVDUMMYWINDOW_H
