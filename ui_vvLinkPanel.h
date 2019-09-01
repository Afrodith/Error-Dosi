/********************************************************************************
** Form generated from reading UI file 'vvLinkPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVLINKPANEL_H
#define UI_VVLINKPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvLinkPanel
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *linkTableWidget;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *image1ComboBox;
    QLabel *linkLabel;
    QComboBox *image2ComboBox;
    QPushButton *linkButton;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *linkAllButton;

    void setupUi(QWidget *vvLinkPanel)
    {
        if (vvLinkPanel->objectName().isEmpty())
            vvLinkPanel->setObjectName(QString::fromUtf8("vvLinkPanel"));
        vvLinkPanel->resize(276, 254);
        verticalLayout = new QVBoxLayout(vvLinkPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        linkTableWidget = new QTableWidget(vvLinkPanel);
        if (linkTableWidget->columnCount() < 6)
            linkTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        linkTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        linkTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem1);
        linkTableWidget->setObjectName(QString::fromUtf8("linkTableWidget"));
        linkTableWidget->setShowGrid(false);

        verticalLayout->addWidget(linkTableWidget);

        label = new QLabel(vvLinkPanel);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        image1ComboBox = new QComboBox(vvLinkPanel);
        image1ComboBox->setObjectName(QString::fromUtf8("image1ComboBox"));

        horizontalLayout_2->addWidget(image1ComboBox);

        linkLabel = new QLabel(vvLinkPanel);
        linkLabel->setObjectName(QString::fromUtf8("linkLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(linkLabel->sizePolicy().hasHeightForWidth());
        linkLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(linkLabel);

        image2ComboBox = new QComboBox(vvLinkPanel);
        image2ComboBox->setObjectName(QString::fromUtf8("image2ComboBox"));

        horizontalLayout_2->addWidget(image2ComboBox);

        linkButton = new QPushButton(vvLinkPanel);
        linkButton->setObjectName(QString::fromUtf8("linkButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(linkButton->sizePolicy().hasHeightForWidth());
        linkButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(linkButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_2 = new QLabel(vvLinkPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        linkAllButton = new QPushButton(vvLinkPanel);
        linkAllButton->setObjectName(QString::fromUtf8("linkAllButton"));

        horizontalLayout->addWidget(linkAllButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(vvLinkPanel);

        QMetaObject::connectSlotsByName(vvLinkPanel);
    } // setupUi

    void retranslateUi(QWidget *vvLinkPanel)
    {
        vvLinkPanel->setWindowTitle(QApplication::translate("vvLinkPanel", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = linkTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem->setText(QApplication::translate("vvLinkPanel", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = linkTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem1->setText(QApplication::translate("vvLinkPanel", "New Column", nullptr));
        label->setText(QApplication::translate("vvLinkPanel", "Choose images to link :", nullptr));
        linkLabel->setText(QApplication::translate("vvLinkPanel", "&", nullptr));
        linkButton->setText(QApplication::translate("vvLinkPanel", "Link", nullptr));
        label_2->setText(QApplication::translate("vvLinkPanel", "Link all currently opened images", nullptr));
        linkAllButton->setText(QApplication::translate("vvLinkPanel", "Link all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvLinkPanel: public Ui_vvLinkPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVLINKPANEL_H
