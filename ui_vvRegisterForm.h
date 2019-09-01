/********************************************************************************
** Form generated from reading UI file 'vvRegisterForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVREGISTERFORM_H
#define UI_VVREGISTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_vvRegisterForm
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *firstName;
    QLabel *label_2;
    QLineEdit *lastName;
    QLabel *label_3;
    QLineEdit *email;
    QLabel *label_4;
    QLineEdit *group;
    QLabel *label_5;
    QLabel *osName;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *vvRegisterForm)
    {
        if (vvRegisterForm->objectName().isEmpty())
            vvRegisterForm->setObjectName(QString::fromUtf8("vvRegisterForm"));
        vvRegisterForm->setWindowModality(Qt::ApplicationModal);
        vvRegisterForm->resize(350, 396);
        gridLayout_2 = new QGridLayout(vvRegisterForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(vvRegisterForm);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        textBrowser->setAutoFillBackground(false);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(textBrowser);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(vvRegisterForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        firstName = new QLineEdit(vvRegisterForm);
        firstName->setObjectName(QString::fromUtf8("firstName"));

        gridLayout->addWidget(firstName, 0, 1, 1, 1);

        label_2 = new QLabel(vvRegisterForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lastName = new QLineEdit(vvRegisterForm);
        lastName->setObjectName(QString::fromUtf8("lastName"));

        gridLayout->addWidget(lastName, 1, 1, 1, 1);

        label_3 = new QLabel(vvRegisterForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        email = new QLineEdit(vvRegisterForm);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout->addWidget(email, 2, 1, 1, 1);

        label_4 = new QLabel(vvRegisterForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        group = new QLineEdit(vvRegisterForm);
        group->setObjectName(QString::fromUtf8("group"));

        gridLayout->addWidget(group, 3, 1, 1, 1);

        label_5 = new QLabel(vvRegisterForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        osName = new QLabel(vvRegisterForm);
        osName->setObjectName(QString::fromUtf8("osName"));

        gridLayout->addWidget(osName, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(vvRegisterForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(vvRegisterForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), vvRegisterForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), vvRegisterForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(vvRegisterForm);
    } // setupUi

    void retranslateUi(QDialog *vvRegisterForm)
    {
        vvRegisterForm->setWindowTitle(QApplication::translate("vvRegisterForm", "VV registration", nullptr));
        textBrowser->setHtml(QApplication::translate("vvRegisterForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:10px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/common/icons/weNeedYou.png\" style=\"float: left;\" /><span style=\" font-size:11pt; font-weight:600; color:#0000c0;\">Welcome to VV !</span><br /><br />We wish to keep an estimate of the number of persons using VV. This is really important for us to justify the ressources spent in developing this software.</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:10px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"justify\" style=\" margin-top:0px"
                        "; margin-bottom:0px; margin-left:0px; margin-right:10px; -qt-block-indent:0; text-indent:0px;\">Please, take a few seconds to fill in the following fields and send us the information by clicking OK. If you still prefer to remain anonymous, simply click &quot;Cancel&quot; (you can still register afterwards using the help menu).</p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:10px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:10px; -qt-block-indent:0; text-indent:0px;\">Privacy: the collected information is for internal and non-commercial use only. We will only use your email for vv release announcements.</p></body></html>", nullptr));
        label->setText(QApplication::translate("vvRegisterForm", "First name", nullptr));
        label_2->setText(QApplication::translate("vvRegisterForm", "Last name", nullptr));
        label_3->setText(QApplication::translate("vvRegisterForm", "Email", nullptr));
        label_4->setText(QApplication::translate("vvRegisterForm", "Institute", nullptr));
        label_5->setText(QApplication::translate("vvRegisterForm", "OS name", nullptr));
        osName->setText(QApplication::translate("vvRegisterForm", "OS name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvRegisterForm: public Ui_vvRegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVREGISTERFORM_H
