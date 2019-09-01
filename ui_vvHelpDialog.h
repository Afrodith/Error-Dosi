/********************************************************************************
** Form generated from reading UI file 'vvHelpDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVHELPDIALOG_H
#define UI_VVHELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_vvHelpDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *vvHelpDialog)
    {
        if (vvHelpDialog->objectName().isEmpty())
            vvHelpDialog->setObjectName(QString::fromUtf8("vvHelpDialog"));
        vvHelpDialog->resize(763, 471);
        verticalLayout = new QVBoxLayout(vvHelpDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(vvHelpDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(vvHelpDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(vvHelpDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(vvHelpDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), vvHelpDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(vvHelpDialog);
    } // setupUi

    void retranslateUi(QDialog *vvHelpDialog)
    {
        vvHelpDialog->setWindowTitle(QApplication::translate("vvHelpDialog", "Navigation Help", nullptr));
        label->setText(QApplication::translate("vvHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">F1: </span><span style=\" font-size:12pt;\">Help (this window)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Slice Selection</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">F2:</span><span style=\" font-size:12pt;\"> Sagital</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">F3: </span><span style=\" font-size:12pt;\">Coronal</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">F4: </span><span style=\" font-size:12pt;\">Axial</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight"
                        ":600;\">F5: </span><span style=\" font-size:12pt;\">Horizontal Flip</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">F6</span><span style=\" font-size:12pt;\">: Vertical Flip</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Windowing</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-size:12pt; font-weight:600;\">0,1,2,3,4,5</span><span style=\" font-size:12pt;\"> : Windowing Preset Selection</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">6,7,8,9</span><span style=\" font-size:12pt;\">: Colormap Selection</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">w</span><span style=\" font-size:12pt;\">: Local </span><span style=\" font-size:12pt; text-decoration: underline;\">w</span><span style=\" font-size:12pt;\">indowing around mouse cursor</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Ctrl+w</span><span style=\" font-size:12pt;\">: Idem for fusion or overlay</span></p>\n"
"<p"
                        " style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Miscellaneous</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">l</span><span style=\" font-size:12pt;\">: Toggle </span><span style=\" font-size:12pt; text-decoration: underline;\">l</span><span style=\" font-size:12pt;\">inear interpolation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">c</span><span style=\" font-size:12pt;\">: Toggle </span><span style=\" font-size:12pt; text-decoration: underline;\">c</span><span style=\" font-size:12pt;\">ontour superposition mode</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("vvHelpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">space</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: Landmark</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weig"
                        "ht:600; text-decoration: underline;\">Navigation</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">r</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: </span><span style=\" font-family:'Sans Serif'; font-size:12pt; text-decoration: underline;\">R</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">eset View</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">u</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: </span><span style=\" font-family:'Sans "
                        "Serif'; font-size:12pt; text-decoration: underline;\">U</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">pdate Image</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">f</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: </span><span style=\" font-family:'Sans Serif'; font-size:12pt; text-decoration: underline;\">F</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">ly To Mouse Position</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">g</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: </span><span style=\" font-family:'Sans Serif'; font-size:12pt; text-decoration: underline;\">G</span><span style=\" font-family:'Sans Serif'; font-"
                        "size:12pt;\">o to Crosshair Position</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">Ctrl+g</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: </span><span style=\" font-family:'Sans Serif'; font-size:12pt; text-decoration: underline;\">G</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">o to Coordinate System Origin</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">h</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: </span><span style=\" font-family:'Sans Serif'; font-size:12pt; text-decoration: underline;\">H</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">ide Crosshair and corner annotations</span></p>\n"
"<p style=\"-qt-pa"
                        "ragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">Up,Down</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: Change Slice</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">Left, Right</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: Change Temporal Slice</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">Tab</span><span style=\" font"
                        "-family:'Sans Serif'; font-size:12pt;\">: Change image</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; text-decoration: underline;\">Mouse</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">i/o or Ctrl+Wheel</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: Zoom </span><span sty"
                        "le=\" font-family:'Sans Serif'; font-size:12pt; text-decoration: underline;\">I</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">n/</span><span style=\" font-family:'Sans Serif'; font-size:12pt; text-decoration: underline;\">O</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">ut</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">Left Button</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: Synchronize All Views</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">Middle Button (or shift on mac)</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: Grab Image</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
                        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600;\">Right Button</span><span style=\" font-family:'Sans Serif'; font-size:12pt;\">: Change Windowing</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("vvHelpDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvHelpDialog: public Ui_vvHelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVHELPDIALOG_H
