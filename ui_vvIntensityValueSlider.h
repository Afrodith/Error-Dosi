/********************************************************************************
** Form generated from reading UI file 'vvIntensityValueSlider.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVINTENSITYVALUESLIDER_H
#define UI_VVINTENSITYVALUESLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvIntensityValueSlider
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mLabel;
    QSlider *mSlider;
    QDoubleSpinBox *mSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *mButtonMinus;
    QPushButton *mButtonPlus;

    void setupUi(QWidget *vvIntensityValueSlider)
    {
        if (vvIntensityValueSlider->objectName().isEmpty())
            vvIntensityValueSlider->setObjectName(QString::fromUtf8("vvIntensityValueSlider"));
        vvIntensityValueSlider->resize(324, 29);
        gridLayout = new QGridLayout(vvIntensityValueSlider);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mLabel = new QLabel(vvIntensityValueSlider);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));

        horizontalLayout_2->addWidget(mLabel);

        mSlider = new QSlider(vvIntensityValueSlider);
        mSlider->setObjectName(QString::fromUtf8("mSlider"));
        mSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(mSlider);

        mSpinBox = new QDoubleSpinBox(vvIntensityValueSlider);
        mSpinBox->setObjectName(QString::fromUtf8("mSpinBox"));
        mSpinBox->setDecimals(1);
        mSpinBox->setMinimum(-9999.000000000000000);
        mSpinBox->setMaximum(99999.000000000000000);

        horizontalLayout_2->addWidget(mSpinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mButtonMinus = new QPushButton(vvIntensityValueSlider);
        mButtonMinus->setObjectName(QString::fromUtf8("mButtonMinus"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mButtonMinus->sizePolicy().hasHeightForWidth());
        mButtonMinus->setSizePolicy(sizePolicy);
        mButtonMinus->setMaximumSize(QSize(15, 15));
        QFont font;
        font.setPointSize(18);
        mButtonMinus->setFont(font);

        horizontalLayout->addWidget(mButtonMinus);

        mButtonPlus = new QPushButton(vvIntensityValueSlider);
        mButtonPlus->setObjectName(QString::fromUtf8("mButtonPlus"));
        mButtonPlus->setMaximumSize(QSize(15, 15));
        mButtonPlus->setFont(font);

        horizontalLayout->addWidget(mButtonPlus);


        horizontalLayout_2->addLayout(horizontalLayout);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(vvIntensityValueSlider);

        QMetaObject::connectSlotsByName(vvIntensityValueSlider);
    } // setupUi

    void retranslateUi(QWidget *vvIntensityValueSlider)
    {
        vvIntensityValueSlider->setWindowTitle(QApplication::translate("vvIntensityValueSlider", "Form", nullptr));
        mLabel->setText(QApplication::translate("vvIntensityValueSlider", "Value 1", nullptr));
        mButtonMinus->setText(QApplication::translate("vvIntensityValueSlider", "-", nullptr));
        mButtonPlus->setText(QApplication::translate("vvIntensityValueSlider", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvIntensityValueSlider: public Ui_vvIntensityValueSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVINTENSITYVALUESLIDER_H
