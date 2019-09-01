/********************************************************************************
** Form generated from reading UI file 'vvProgressDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVPROGRESSDIALOG_H
#define UI_VVPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_vvProgressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *textLabel;
    QProgressBar *progressBar;
    QLabel *progressLabel;
    QDialogButtonBox *mCancelButton;

    void setupUi(QDialog *vvProgressDialog)
    {
        if (vvProgressDialog->objectName().isEmpty())
            vvProgressDialog->setObjectName(QString::fromUtf8("vvProgressDialog"));
        vvProgressDialog->setWindowModality(Qt::WindowModal);
        vvProgressDialog->resize(261, 120);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vvProgressDialog->sizePolicy().hasHeightForWidth());
        vvProgressDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/common/icons/ducky.png"), QSize(), QIcon::Normal, QIcon::Off);
        vvProgressDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(vvProgressDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 3);
        textLabel = new QLabel(vvProgressDialog);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(textLabel);

        progressBar = new QProgressBar(vvProgressDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        progressLabel = new QLabel(vvProgressDialog);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));
        progressLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(progressLabel);

        mCancelButton = new QDialogButtonBox(vvProgressDialog);
        mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        mCancelButton->setFont(font);
        mCancelButton->setLayoutDirection(Qt::LeftToRight);
        mCancelButton->setStandardButtons(QDialogButtonBox::Cancel);
        mCancelButton->setCenterButtons(true);

        verticalLayout->addWidget(mCancelButton);


        retranslateUi(vvProgressDialog);

        QMetaObject::connectSlotsByName(vvProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *vvProgressDialog)
    {
        vvProgressDialog->setWindowTitle(QApplication::translate("vvProgressDialog", "Progress", nullptr));
        textLabel->setText(QApplication::translate("vvProgressDialog", "Opening image ", nullptr));
        progressLabel->setText(QApplication::translate("vvProgressDialog", "Please wait ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvProgressDialog: public Ui_vvProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVPROGRESSDIALOG_H
