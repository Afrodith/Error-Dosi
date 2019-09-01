/********************************************************************************
** Form generated from reading UI file 'vvToolImageArithm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVTOOLIMAGEARITHM_H
#define UI_VVTOOLIMAGEARITHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvToolImageArithm
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mCheckBoxUseFloatOutputType;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *mGroupBoxTwoInputs;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonSum;
    QRadioButton *radioButtonMultiply;
    QRadioButton *radioButtonDivide;
    QRadioButton *radioButtonMin;
    QRadioButton *radioButtonMax;
    QRadioButton *radioButtonAbsDiff;
    QRadioButton *radioButtonSquaredDiff;
    QRadioButton *radioButtonDifference;
    QRadioButton *radioButtonRelativeDiff;
    QGroupBox *mGroupBoxOneInput;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *mLabelInputInfo;
    QDoubleSpinBox *mValueSpinBox;
    QRadioButton *radioButtonSumV;
    QRadioButton *radioButtonMultiplyV;
    QRadioButton *radioButtonInverseV;
    QRadioButton *radioButtonMaxV;
    QRadioButton *radioButtonMinV;
    QRadioButton *radioButtonAbsDiffV;
    QRadioButton *radioButtonSquaredDiffV;
    QRadioButton *radioButtonLogAlone;
    QRadioButton *radioButtonExpAlone;
    QRadioButton *radioButtonSqrtV;
    QRadioButton *radioButtonDivideV;
    QRadioButton *radioButtonNormalize;
    QRadioButton *radioButtonLogV;

    void setupUi(QWidget *vvToolImageArithm)
    {
        if (vvToolImageArithm->objectName().isEmpty())
            vvToolImageArithm->setObjectName(QString::fromUtf8("vvToolImageArithm"));
        vvToolImageArithm->resize(424, 345);
        verticalLayout_3 = new QVBoxLayout(vvToolImageArithm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mCheckBoxUseFloatOutputType = new QCheckBox(vvToolImageArithm);
        mCheckBoxUseFloatOutputType->setObjectName(QString::fromUtf8("mCheckBoxUseFloatOutputType"));
        mCheckBoxUseFloatOutputType->setChecked(false);

        horizontalLayout_2->addWidget(mCheckBoxUseFloatOutputType);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mGroupBoxTwoInputs = new QGroupBox(vvToolImageArithm);
        mGroupBoxTwoInputs->setObjectName(QString::fromUtf8("mGroupBoxTwoInputs"));
        verticalLayout = new QVBoxLayout(mGroupBoxTwoInputs);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonSum = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonSum->setObjectName(QString::fromUtf8("radioButtonSum"));
        radioButtonSum->setChecked(true);

        verticalLayout->addWidget(radioButtonSum);

        radioButtonMultiply = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonMultiply->setObjectName(QString::fromUtf8("radioButtonMultiply"));

        verticalLayout->addWidget(radioButtonMultiply);

        radioButtonDivide = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonDivide->setObjectName(QString::fromUtf8("radioButtonDivide"));

        verticalLayout->addWidget(radioButtonDivide);

        radioButtonMin = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonMin->setObjectName(QString::fromUtf8("radioButtonMin"));

        verticalLayout->addWidget(radioButtonMin);

        radioButtonMax = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonMax->setObjectName(QString::fromUtf8("radioButtonMax"));

        verticalLayout->addWidget(radioButtonMax);

        radioButtonAbsDiff = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonAbsDiff->setObjectName(QString::fromUtf8("radioButtonAbsDiff"));

        verticalLayout->addWidget(radioButtonAbsDiff);

        radioButtonSquaredDiff = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonSquaredDiff->setObjectName(QString::fromUtf8("radioButtonSquaredDiff"));

        verticalLayout->addWidget(radioButtonSquaredDiff);

        radioButtonDifference = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonDifference->setObjectName(QString::fromUtf8("radioButtonDifference"));

        verticalLayout->addWidget(radioButtonDifference);

        radioButtonRelativeDiff = new QRadioButton(mGroupBoxTwoInputs);
        radioButtonRelativeDiff->setObjectName(QString::fromUtf8("radioButtonRelativeDiff"));

        verticalLayout->addWidget(radioButtonRelativeDiff);


        horizontalLayout_3->addWidget(mGroupBoxTwoInputs);

        mGroupBoxOneInput = new QGroupBox(vvToolImageArithm);
        mGroupBoxOneInput->setObjectName(QString::fromUtf8("mGroupBoxOneInput"));
        verticalLayout_2 = new QVBoxLayout(mGroupBoxOneInput);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mLabelInputInfo = new QLabel(mGroupBoxOneInput);
        mLabelInputInfo->setObjectName(QString::fromUtf8("mLabelInputInfo"));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        mLabelInputInfo->setFont(font);
        mLabelInputInfo->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(mLabelInputInfo);

        mValueSpinBox = new QDoubleSpinBox(mGroupBoxOneInput);
        mValueSpinBox->setObjectName(QString::fromUtf8("mValueSpinBox"));
        mValueSpinBox->setMinimum(-999999999.000000000000000);
        mValueSpinBox->setMaximum(999999999.000000000000000);

        horizontalLayout->addWidget(mValueSpinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        radioButtonSumV = new QRadioButton(mGroupBoxOneInput);
        radioButtonSumV->setObjectName(QString::fromUtf8("radioButtonSumV"));
        radioButtonSumV->setChecked(true);

        verticalLayout_2->addWidget(radioButtonSumV);

        radioButtonMultiplyV = new QRadioButton(mGroupBoxOneInput);
        radioButtonMultiplyV->setObjectName(QString::fromUtf8("radioButtonMultiplyV"));

        verticalLayout_2->addWidget(radioButtonMultiplyV);

        radioButtonInverseV = new QRadioButton(mGroupBoxOneInput);
        radioButtonInverseV->setObjectName(QString::fromUtf8("radioButtonInverseV"));

        verticalLayout_2->addWidget(radioButtonInverseV);

        radioButtonMaxV = new QRadioButton(mGroupBoxOneInput);
        radioButtonMaxV->setObjectName(QString::fromUtf8("radioButtonMaxV"));

        verticalLayout_2->addWidget(radioButtonMaxV);

        radioButtonMinV = new QRadioButton(mGroupBoxOneInput);
        radioButtonMinV->setObjectName(QString::fromUtf8("radioButtonMinV"));

        verticalLayout_2->addWidget(radioButtonMinV);

        radioButtonAbsDiffV = new QRadioButton(mGroupBoxOneInput);
        radioButtonAbsDiffV->setObjectName(QString::fromUtf8("radioButtonAbsDiffV"));

        verticalLayout_2->addWidget(radioButtonAbsDiffV);

        radioButtonSquaredDiffV = new QRadioButton(mGroupBoxOneInput);
        radioButtonSquaredDiffV->setObjectName(QString::fromUtf8("radioButtonSquaredDiffV"));

        verticalLayout_2->addWidget(radioButtonSquaredDiffV);

        radioButtonLogAlone = new QRadioButton(mGroupBoxOneInput);
        radioButtonLogAlone->setObjectName(QString::fromUtf8("radioButtonLogAlone"));

        verticalLayout_2->addWidget(radioButtonLogAlone);

        radioButtonExpAlone = new QRadioButton(mGroupBoxOneInput);
        radioButtonExpAlone->setObjectName(QString::fromUtf8("radioButtonExpAlone"));

        verticalLayout_2->addWidget(radioButtonExpAlone);

        radioButtonSqrtV = new QRadioButton(mGroupBoxOneInput);
        radioButtonSqrtV->setObjectName(QString::fromUtf8("radioButtonSqrtV"));

        verticalLayout_2->addWidget(radioButtonSqrtV);

        radioButtonDivideV = new QRadioButton(mGroupBoxOneInput);
        radioButtonDivideV->setObjectName(QString::fromUtf8("radioButtonDivideV"));

        verticalLayout_2->addWidget(radioButtonDivideV);

        radioButtonNormalize = new QRadioButton(mGroupBoxOneInput);
        radioButtonNormalize->setObjectName(QString::fromUtf8("radioButtonNormalize"));

        verticalLayout_2->addWidget(radioButtonNormalize);

        radioButtonLogV = new QRadioButton(mGroupBoxOneInput);
        radioButtonLogV->setObjectName(QString::fromUtf8("radioButtonLogV"));

        verticalLayout_2->addWidget(radioButtonLogV);


        horizontalLayout_3->addWidget(mGroupBoxOneInput);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(vvToolImageArithm);

        QMetaObject::connectSlotsByName(vvToolImageArithm);
    } // setupUi

    void retranslateUi(QWidget *vvToolImageArithm)
    {
        vvToolImageArithm->setWindowTitle(QApplication::translate("vvToolImageArithm", "Form", nullptr));
        mCheckBoxUseFloatOutputType->setText(QApplication::translate("vvToolImageArithm", "Set output pixel type to float", nullptr));
        mGroupBoxTwoInputs->setTitle(QApplication::translate("vvToolImageArithm", "Operation with two images", nullptr));
        radioButtonSum->setText(QApplication::translate("vvToolImageArithm", "Sum A+B", nullptr));
        radioButtonMultiply->setText(QApplication::translate("vvToolImageArithm", "Multiply A*B", nullptr));
        radioButtonDivide->setText(QApplication::translate("vvToolImageArithm", "Divide A/B", nullptr));
        radioButtonMin->setText(QApplication::translate("vvToolImageArithm", "Min [A,B]", nullptr));
        radioButtonMax->setText(QApplication::translate("vvToolImageArithm", "Max [A,B]", nullptr));
        radioButtonAbsDiff->setText(QApplication::translate("vvToolImageArithm", "Absolute difference |A-B|", nullptr));
        radioButtonSquaredDiff->setText(QApplication::translate("vvToolImageArithm", "Squared difference (A-B)\302\262", nullptr));
        radioButtonDifference->setText(QApplication::translate("vvToolImageArithm", "Difference A-B", nullptr));
        radioButtonRelativeDiff->setText(QApplication::translate("vvToolImageArithm", "Relative difference (A-B)/A", nullptr));
        mGroupBoxOneInput->setTitle(QApplication::translate("vvToolImageArithm", "Operation on a single image", nullptr));
        mLabelInputInfo->setText(QApplication::translate("vvToolImageArithm", "Value (v)", nullptr));
        radioButtonSumV->setText(QApplication::translate("vvToolImageArithm", "Sum A(x)+v", nullptr));
        radioButtonMultiplyV->setText(QApplication::translate("vvToolImageArithm", "Multiply A(x)*v", nullptr));
        radioButtonInverseV->setText(QApplication::translate("vvToolImageArithm", "Inverse v/A(x)", nullptr));
        radioButtonMaxV->setText(QApplication::translate("vvToolImageArithm", "Max [ A(x), v ]", nullptr));
        radioButtonMinV->setText(QApplication::translate("vvToolImageArithm", "Min [ A(x),v ]", nullptr));
        radioButtonAbsDiffV->setText(QApplication::translate("vvToolImageArithm", "Absolute difference |A(x)-v|", nullptr));
        radioButtonSquaredDiffV->setText(QApplication::translate("vvToolImageArithm", "Squared difference (A(x)-v)\302\262", nullptr));
        radioButtonLogAlone->setText(QApplication::translate("vvToolImageArithm", "Log A(x)    (don't use v)", nullptr));
        radioButtonExpAlone->setText(QApplication::translate("vvToolImageArithm", "Exp A(x)    (don't use v)", nullptr));
        radioButtonSqrtV->setText(QApplication::translate("vvToolImageArithm", "Sqrt A(x)    (don't use v)", nullptr));
        radioButtonDivideV->setText(QApplication::translate("vvToolImageArithm", "Division A(x)/v", nullptr));
        radioButtonNormalize->setText(QApplication::translate("vvToolImageArithm", "A(x)/max(A(x))    (don't use v)", nullptr));
        radioButtonLogV->setText(QApplication::translate("vvToolImageArithm", "-Log (A(x)/v)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvToolImageArithm: public Ui_vvToolImageArithm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVTOOLIMAGEARITHM_H
