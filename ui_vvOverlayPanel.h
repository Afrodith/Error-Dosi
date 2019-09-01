/********************************************************************************
** Form generated from reading UI file 'vvOverlayPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVOVERLAYPANEL_H
#define UI_VVOVERLAYPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvOverlayPanel
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *currentImageLabel;
    QFrame *fCTUSFrame;
    QCheckBox *fCTUSActivateTimeSyncCheckBox;
    QCheckBox *fCTUSActivateSpaceSyncCheckBox;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QSlider *fCTUSSlider;
    QPushButton *fCTUSLoadCorrespondancesPushButton;
    QFrame *vFFrame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *vectorFieldNameLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *subSamplingSpinBox;
    QLabel *label_3;
    QSpinBox *scaleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *coordinatesLabel;
    QLabel *label_9;
    QSpinBox *vfWidthSpinBox;
    QToolButton *vfColorButton;
    QCheckBox *lutCheckBox;
    QLabel *normLabel;
    QFrame *compareFrame;
    QGridLayout *compareGridLayout;
    QLabel *label;
    QLabel *imageComparedLabel;
    QLabel *colorLabel;
    QSlider *colorHorizontalSlider;
    QLabel *refValueLabel;
    QLabel *valueLabel;
    QLabel *diffValueLabel;
    QLabel *label_10;
    QDoubleSpinBox *overlayWindowSpinBox;
    QLabel *label_11;
    QDoubleSpinBox *overlayLevelSpinBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *overlayLinkCheckBox;
    QFrame *fusionFrame;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *dataFusionnedLabel;
    QLabel *opacityLabel;
    QSlider *opacityHorizontalSlider;
    QDoubleSpinBox *fusionOpacitySpin;
    QLabel *thresOpacityLabel;
    QSlider *thresOpacityHorizontalSlider;
    QDoubleSpinBox *fusionThresSpin;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *fusionWindowSpinBox;
    QLabel *label_8;
    QDoubleSpinBox *fusionLevelSpinBox;
    QLabel *valueFusionnedLabel;
    QComboBox *fusionColorMapComboBox;
    QCheckBox *fusionShowLegendCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *vvOverlayPanel)
    {
        if (vvOverlayPanel->objectName().isEmpty())
            vvOverlayPanel->setObjectName(QString::fromUtf8("vvOverlayPanel"));
        vvOverlayPanel->resize(446, 679);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vvOverlayPanel->sizePolicy().hasHeightForWidth());
        vvOverlayPanel->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(vvOverlayPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        currentImageLabel = new QLabel(vvOverlayPanel);
        currentImageLabel->setObjectName(QString::fromUtf8("currentImageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(currentImageLabel->sizePolicy().hasHeightForWidth());
        currentImageLabel->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(currentImageLabel);

        fCTUSFrame = new QFrame(vvOverlayPanel);
        fCTUSFrame->setObjectName(QString::fromUtf8("fCTUSFrame"));
        fCTUSFrame->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fCTUSFrame->sizePolicy().hasHeightForWidth());
        fCTUSFrame->setSizePolicy(sizePolicy2);
        fCTUSFrame->setMinimumSize(QSize(0, 90));
        fCTUSFrame->setFrameShape(QFrame::StyledPanel);
        fCTUSFrame->setFrameShadow(QFrame::Raised);
        fCTUSActivateTimeSyncCheckBox = new QCheckBox(fCTUSFrame);
        fCTUSActivateTimeSyncCheckBox->setObjectName(QString::fromUtf8("fCTUSActivateTimeSyncCheckBox"));
        fCTUSActivateTimeSyncCheckBox->setEnabled(false);
        fCTUSActivateTimeSyncCheckBox->setGeometry(QRect(230, 60, 91, 17));
        fCTUSActivateSpaceSyncCheckBox = new QCheckBox(fCTUSFrame);
        fCTUSActivateSpaceSyncCheckBox->setObjectName(QString::fromUtf8("fCTUSActivateSpaceSyncCheckBox"));
        fCTUSActivateSpaceSyncCheckBox->setGeometry(QRect(270, 10, 81, 17));
        fCTUSActivateSpaceSyncCheckBox->setCheckable(true);
        fCTUSActivateSpaceSyncCheckBox->setChecked(false);
        label_13 = new QLabel(fCTUSFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 31, 32));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/common/icons/rotateright.png")));
        label_14 = new QLabel(fCTUSFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 0, 231, 32));
        label_15 = new QLabel(fCTUSFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 30, 121, 29));
        fCTUSSlider = new QSlider(fCTUSFrame);
        fCTUSSlider->setObjectName(QString::fromUtf8("fCTUSSlider"));
        fCTUSSlider->setGeometry(QRect(130, 36, 201, 20));
        fCTUSSlider->setOrientation(Qt::Horizontal);
        fCTUSLoadCorrespondancesPushButton = new QPushButton(fCTUSFrame);
        fCTUSLoadCorrespondancesPushButton->setObjectName(QString::fromUtf8("fCTUSLoadCorrespondancesPushButton"));
        fCTUSLoadCorrespondancesPushButton->setGeometry(QRect(20, 60, 171, 23));

        verticalLayout->addWidget(fCTUSFrame);

        vFFrame = new QFrame(vvOverlayPanel);
        vFFrame->setObjectName(QString::fromUtf8("vFFrame"));
        vFFrame->setEnabled(true);
        sizePolicy.setHeightForWidth(vFFrame->sizePolicy().hasHeightForWidth());
        vFFrame->setSizePolicy(sizePolicy);
        vFFrame->setFrameShape(QFrame::StyledPanel);
        vFFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(vFFrame);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(vFFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(24, 24));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/common/icons/cursor-uparrow.png")));
        label_4->setScaledContents(true);

        horizontalLayout_2->addWidget(label_4);

        vectorFieldNameLabel = new QLabel(vFFrame);
        vectorFieldNameLabel->setObjectName(QString::fromUtf8("vectorFieldNameLabel"));
        sizePolicy1.setHeightForWidth(vectorFieldNameLabel->sizePolicy().hasHeightForWidth());
        vectorFieldNameLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(vectorFieldNameLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(vFFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        subSamplingSpinBox = new QSpinBox(vFFrame);
        subSamplingSpinBox->setObjectName(QString::fromUtf8("subSamplingSpinBox"));
        subSamplingSpinBox->setMinimum(1);
        subSamplingSpinBox->setValue(5);

        horizontalLayout->addWidget(subSamplingSpinBox);

        label_3 = new QLabel(vFFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        scaleSpinBox = new QSpinBox(vFFrame);
        scaleSpinBox->setObjectName(QString::fromUtf8("scaleSpinBox"));
        scaleSpinBox->setValue(1);

        horizontalLayout->addWidget(scaleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        coordinatesLabel = new QLabel(vFFrame);
        coordinatesLabel->setObjectName(QString::fromUtf8("coordinatesLabel"));
        sizePolicy1.setHeightForWidth(coordinatesLabel->sizePolicy().hasHeightForWidth());
        coordinatesLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(coordinatesLabel);

        label_9 = new QLabel(vFFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_3->addWidget(label_9);

        vfWidthSpinBox = new QSpinBox(vFFrame);
        vfWidthSpinBox->setObjectName(QString::fromUtf8("vfWidthSpinBox"));
        vfWidthSpinBox->setMinimum(1);
        vfWidthSpinBox->setMaximum(10);
        vfWidthSpinBox->setSingleStep(1);
        vfWidthSpinBox->setValue(1);

        horizontalLayout_3->addWidget(vfWidthSpinBox);

        vfColorButton = new QToolButton(vFFrame);
        vfColorButton->setObjectName(QString::fromUtf8("vfColorButton"));

        horizontalLayout_3->addWidget(vfColorButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        lutCheckBox = new QCheckBox(vFFrame);
        lutCheckBox->setObjectName(QString::fromUtf8("lutCheckBox"));

        verticalLayout_2->addWidget(lutCheckBox);

        normLabel = new QLabel(vFFrame);
        normLabel->setObjectName(QString::fromUtf8("normLabel"));
        sizePolicy1.setHeightForWidth(normLabel->sizePolicy().hasHeightForWidth());
        normLabel->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(normLabel);


        verticalLayout->addWidget(vFFrame);

        compareFrame = new QFrame(vvOverlayPanel);
        compareFrame->setObjectName(QString::fromUtf8("compareFrame"));
        compareFrame->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(compareFrame->sizePolicy().hasHeightForWidth());
        compareFrame->setSizePolicy(sizePolicy3);
        compareFrame->setFrameShape(QFrame::StyledPanel);
        compareFrame->setFrameShadow(QFrame::Raised);
        compareGridLayout = new QGridLayout(compareFrame);
        compareGridLayout->setSpacing(2);
        compareGridLayout->setContentsMargins(2, 2, 2, 2);
        compareGridLayout->setObjectName(QString::fromUtf8("compareGridLayout"));
        label = new QLabel(compareFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(24, 24));
        label->setPixmap(QPixmap(QString::fromUtf8(":/common/icons/GPSup.png")));
        label->setScaledContents(true);

        compareGridLayout->addWidget(label, 0, 0, 1, 1);

        imageComparedLabel = new QLabel(compareFrame);
        imageComparedLabel->setObjectName(QString::fromUtf8("imageComparedLabel"));
        sizePolicy1.setHeightForWidth(imageComparedLabel->sizePolicy().hasHeightForWidth());
        imageComparedLabel->setSizePolicy(sizePolicy1);

        compareGridLayout->addWidget(imageComparedLabel, 0, 1, 1, 2);

        colorLabel = new QLabel(compareFrame);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));

        compareGridLayout->addWidget(colorLabel, 1, 0, 1, 2);

        colorHorizontalSlider = new QSlider(compareFrame);
        colorHorizontalSlider->setObjectName(QString::fromUtf8("colorHorizontalSlider"));
        colorHorizontalSlider->setMaximum(359);
        colorHorizontalSlider->setOrientation(Qt::Horizontal);

        compareGridLayout->addWidget(colorHorizontalSlider, 1, 1, 1, 5);

        refValueLabel = new QLabel(compareFrame);
        refValueLabel->setObjectName(QString::fromUtf8("refValueLabel"));
        sizePolicy1.setHeightForWidth(refValueLabel->sizePolicy().hasHeightForWidth());
        refValueLabel->setSizePolicy(sizePolicy1);

        compareGridLayout->addWidget(refValueLabel, 2, 0, 1, 5);

        valueLabel = new QLabel(compareFrame);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        sizePolicy1.setHeightForWidth(valueLabel->sizePolicy().hasHeightForWidth());
        valueLabel->setSizePolicy(sizePolicy1);

        compareGridLayout->addWidget(valueLabel, 3, 0, 1, 5);

        diffValueLabel = new QLabel(compareFrame);
        diffValueLabel->setObjectName(QString::fromUtf8("diffValueLabel"));
        sizePolicy1.setHeightForWidth(diffValueLabel->sizePolicy().hasHeightForWidth());
        diffValueLabel->setSizePolicy(sizePolicy1);

        compareGridLayout->addWidget(diffValueLabel, 4, 0, 1, 5);

        label_10 = new QLabel(compareFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        compareGridLayout->addWidget(label_10, 5, 0, 1, 1);

        overlayWindowSpinBox = new QDoubleSpinBox(compareFrame);
        overlayWindowSpinBox->setObjectName(QString::fromUtf8("overlayWindowSpinBox"));
        overlayWindowSpinBox->setDecimals(9);
        overlayWindowSpinBox->setMinimum(-999999.000000000000000);
        overlayWindowSpinBox->setMaximum(999999.000000000000000);
        overlayWindowSpinBox->setSingleStep(10.000000000000000);
        overlayWindowSpinBox->setValue(100.000000000000000);

        compareGridLayout->addWidget(overlayWindowSpinBox, 5, 1, 1, 1);

        label_11 = new QLabel(compareFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        compareGridLayout->addWidget(label_11, 5, 2, 1, 1);

        overlayLevelSpinBox = new QDoubleSpinBox(compareFrame);
        overlayLevelSpinBox->setObjectName(QString::fromUtf8("overlayLevelSpinBox"));
        overlayLevelSpinBox->setDecimals(9);
        overlayLevelSpinBox->setMinimum(-999999.000000000000000);
        overlayLevelSpinBox->setMaximum(999999.000000000000000);
        overlayLevelSpinBox->setSingleStep(10.000000000000000);
        overlayLevelSpinBox->setValue(100.000000000000000);

        compareGridLayout->addWidget(overlayLevelSpinBox, 5, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        compareGridLayout->addItem(horizontalSpacer, 5, 4, 1, 1);

        overlayLinkCheckBox = new QCheckBox(compareFrame);
        overlayLinkCheckBox->setObjectName(QString::fromUtf8("overlayLinkCheckBox"));
        overlayLinkCheckBox->setChecked(true);

        compareGridLayout->addWidget(overlayLinkCheckBox, 5, 5, 1, 1);


        verticalLayout->addWidget(compareFrame);

        fusionFrame = new QFrame(vvOverlayPanel);
        fusionFrame->setObjectName(QString::fromUtf8("fusionFrame"));
        fusionFrame->setEnabled(true);
        fusionFrame->setFrameShape(QFrame::StyledPanel);
        fusionFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(fusionFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(fusionFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(24, 24));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/common/icons/fusion.png")));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        dataFusionnedLabel = new QLabel(fusionFrame);
        dataFusionnedLabel->setObjectName(QString::fromUtf8("dataFusionnedLabel"));
        sizePolicy1.setHeightForWidth(dataFusionnedLabel->sizePolicy().hasHeightForWidth());
        dataFusionnedLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dataFusionnedLabel, 0, 1, 1, 5);

        opacityLabel = new QLabel(fusionFrame);
        opacityLabel->setObjectName(QString::fromUtf8("opacityLabel"));

        gridLayout->addWidget(opacityLabel, 1, 0, 1, 3);

        opacityHorizontalSlider = new QSlider(fusionFrame);
        opacityHorizontalSlider->setObjectName(QString::fromUtf8("opacityHorizontalSlider"));
        sizePolicy1.setHeightForWidth(opacityHorizontalSlider->sizePolicy().hasHeightForWidth());
        opacityHorizontalSlider->setSizePolicy(sizePolicy1);
        opacityHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(opacityHorizontalSlider, 1, 3, 1, 2);

        fusionOpacitySpin = new QDoubleSpinBox(fusionFrame);
        fusionOpacitySpin->setObjectName(QString::fromUtf8("fusionOpacitySpin"));
        fusionOpacitySpin->setDecimals(2);
        fusionOpacitySpin->setMinimum(0.000000000000000);
        fusionOpacitySpin->setMaximum(100.000000000000000);
        fusionOpacitySpin->setSingleStep(1.000000000000000);
        fusionOpacitySpin->setValue(100.000000000000000);

        gridLayout->addWidget(fusionOpacitySpin, 1, 5, 1, 1);

        thresOpacityLabel = new QLabel(fusionFrame);
        thresOpacityLabel->setObjectName(QString::fromUtf8("thresOpacityLabel"));

        gridLayout->addWidget(thresOpacityLabel, 2, 0, 1, 3);

        thresOpacityHorizontalSlider = new QSlider(fusionFrame);
        thresOpacityHorizontalSlider->setObjectName(QString::fromUtf8("thresOpacityHorizontalSlider"));
        sizePolicy1.setHeightForWidth(thresOpacityHorizontalSlider->sizePolicy().hasHeightForWidth());
        thresOpacityHorizontalSlider->setSizePolicy(sizePolicy1);
        thresOpacityHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(thresOpacityHorizontalSlider, 2, 3, 1, 2);

        fusionThresSpin = new QDoubleSpinBox(fusionFrame);
        fusionThresSpin->setObjectName(QString::fromUtf8("fusionThresSpin"));
        fusionThresSpin->setDecimals(2);
        fusionThresSpin->setMinimum(0.000000000000000);
        fusionThresSpin->setMaximum(100.000000000000000);
        fusionThresSpin->setSingleStep(1.000000000000000);
        fusionThresSpin->setValue(1.000000000000000);

        gridLayout->addWidget(fusionThresSpin, 2, 5, 1, 1);

        label_6 = new QLabel(fusionFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(label_6, 3, 0, 1, 2);

        label_7 = new QLabel(fusionFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        fusionWindowSpinBox = new QDoubleSpinBox(fusionFrame);
        fusionWindowSpinBox->setObjectName(QString::fromUtf8("fusionWindowSpinBox"));
        fusionWindowSpinBox->setDecimals(9);
        fusionWindowSpinBox->setMinimum(-999999.000000000000000);
        fusionWindowSpinBox->setMaximum(999999.000000000000000);
        fusionWindowSpinBox->setSingleStep(10.000000000000000);
        fusionWindowSpinBox->setValue(100.000000000000000);

        gridLayout->addWidget(fusionWindowSpinBox, 7, 1, 1, 2);

        label_8 = new QLabel(fusionFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 3, 1, 1);

        fusionLevelSpinBox = new QDoubleSpinBox(fusionFrame);
        fusionLevelSpinBox->setObjectName(QString::fromUtf8("fusionLevelSpinBox"));
        fusionLevelSpinBox->setDecimals(9);
        fusionLevelSpinBox->setMinimum(-999999.000000000000000);
        fusionLevelSpinBox->setMaximum(999999.000000000000000);
        fusionLevelSpinBox->setSingleStep(10.000000000000000);
        fusionLevelSpinBox->setValue(100.000000000000000);

        gridLayout->addWidget(fusionLevelSpinBox, 7, 4, 1, 2);

        valueFusionnedLabel = new QLabel(fusionFrame);
        valueFusionnedLabel->setObjectName(QString::fromUtf8("valueFusionnedLabel"));
        sizePolicy1.setHeightForWidth(valueFusionnedLabel->sizePolicy().hasHeightForWidth());
        valueFusionnedLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(valueFusionnedLabel, 8, 0, 1, 4);

        fusionColorMapComboBox = new QComboBox(fusionFrame);
        fusionColorMapComboBox->addItem(QString());
        fusionColorMapComboBox->addItem(QString());
        fusionColorMapComboBox->addItem(QString());
        fusionColorMapComboBox->addItem(QString());
        fusionColorMapComboBox->addItem(QString());
        fusionColorMapComboBox->setObjectName(QString::fromUtf8("fusionColorMapComboBox"));

        gridLayout->addWidget(fusionColorMapComboBox, 3, 2, 1, 1);

        fusionShowLegendCheckBox = new QCheckBox(fusionFrame);
        fusionShowLegendCheckBox->setObjectName(QString::fromUtf8("fusionShowLegendCheckBox"));

        gridLayout->addWidget(fusionShowLegendCheckBox, 3, 3, 1, 3);


        verticalLayout->addWidget(fusionFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(vvOverlayPanel);

        fusionColorMapComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(vvOverlayPanel);
    } // setupUi

    void retranslateUi(QWidget *vvOverlayPanel)
    {
        vvOverlayPanel->setWindowTitle(QApplication::translate("vvOverlayPanel", "Form", nullptr));
        currentImageLabel->setText(QApplication::translate("vvOverlayPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Image :</span></p></body></html>", nullptr));
        fCTUSActivateTimeSyncCheckBox->setText(QApplication::translate("vvOverlayPanel", "Temporal", nullptr));
        fCTUSActivateSpaceSyncCheckBox->setText(QApplication::translate("vvOverlayPanel", "Spatial", nullptr));
        label_13->setText(QString());
        label_14->setText(QApplication::translate("vvOverlayPanel", "Synchronized fusion of sequences", nullptr));
        label_15->setText(QApplication::translate("vvOverlayPanel", "  Browse fused sequence  ", nullptr));
#ifndef QT_NO_TOOLTIP
        fCTUSLoadCorrespondancesPushButton->setToolTip(QApplication::translate("vvOverlayPanel", "<html><head/><body><p>Load a file indicating the correspondances between time indices between both sequences.</p><p>The format needs to be the following:</p><p>let nt1 the number of frames in sequence 1, resp. nt2 and seq. 2 </p><p>The file must contain nt1 + nt2 entries.</p><p>entry i (i&lt;=nt1) indicates for the i-th frame of sequence 1 the index to display for sequence 2.</p><p>resp. i&gt;nt1 indicate corresp from seq. 2 to seq. 1</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        fCTUSLoadCorrespondancesPushButton->setText(QApplication::translate("vvOverlayPanel", "Load Correspondances", nullptr));
        label_4->setText(QString());
        vectorFieldNameLabel->setText(QApplication::translate("vvOverlayPanel", "Deformation field :", nullptr));
        label_2->setText(QApplication::translate("vvOverlayPanel", "<b>Subsampling : </b>", nullptr));
        label_3->setText(QApplication::translate("vvOverlayPanel", "<b> Scale : </b>", nullptr));
        coordinatesLabel->setText(QApplication::translate("vvOverlayPanel", "<b>Displacement :</b>", nullptr));
        label_9->setText(QApplication::translate("vvOverlayPanel", "<b>Width : </b>", nullptr));
        vfColorButton->setStyleSheet(QApplication::translate("vvOverlayPanel", "\n"
"              background-color: rgb(0, 255, 0);\n"
"              border: 0px;\n"
"            ", nullptr));
        lutCheckBox->setText(QApplication::translate("vvOverlayPanel", "Use Logarithm LUT", nullptr));
        normLabel->setText(QApplication::translate("vvOverlayPanel", "Length :", nullptr));
        label->setText(QString());
        imageComparedLabel->setText(QString());
        colorLabel->setText(QApplication::translate("vvOverlayPanel", "Color :", nullptr));
        refValueLabel->setText(QApplication::translate("vvOverlayPanel", "Pixel value in image 1 :", nullptr));
        valueLabel->setText(QApplication::translate("vvOverlayPanel", "Pixel value in image 2 :", nullptr));
        diffValueLabel->setText(QApplication::translate("vvOverlayPanel", "Pixel difference :", nullptr));
        label_10->setText(QApplication::translate("vvOverlayPanel", "Window :", nullptr));
        label_11->setText(QApplication::translate("vvOverlayPanel", "Level :", nullptr));
        overlayLinkCheckBox->setText(QApplication::translate("vvOverlayPanel", "Link", nullptr));
        label_5->setText(QString());
        dataFusionnedLabel->setText(QApplication::translate("vvOverlayPanel", "Fusion :", nullptr));
        opacityLabel->setText(QApplication::translate("vvOverlayPanel", "Global Opacity :", nullptr));
#ifndef QT_NO_TOOLTIP
        thresOpacityLabel->setToolTip(QApplication::translate("vvOverlayPanel", "All colors below the threshold will be made transparent.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        thresOpacityLabel->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        thresOpacityLabel->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        thresOpacityLabel->setText(QApplication::translate("vvOverlayPanel", "Transparency Threshold :", nullptr));
        label_6->setText(QApplication::translate("vvOverlayPanel", "Colormap :", nullptr));
        label_7->setText(QApplication::translate("vvOverlayPanel", "Window :", nullptr));
        label_8->setText(QApplication::translate("vvOverlayPanel", "Level :", nullptr));
        valueFusionnedLabel->setText(QApplication::translate("vvOverlayPanel", "Pixel value in image 2 :", nullptr));
        fusionColorMapComboBox->setItemText(0, QApplication::translate("vvOverlayPanel", "B&W", nullptr));
        fusionColorMapComboBox->setItemText(1, QApplication::translate("vvOverlayPanel", "Heat", nullptr));
        fusionColorMapComboBox->setItemText(2, QApplication::translate("vvOverlayPanel", "Cold", nullptr));
        fusionColorMapComboBox->setItemText(3, QApplication::translate("vvOverlayPanel", "Dosimetry", nullptr));
        fusionColorMapComboBox->setItemText(4, QApplication::translate("vvOverlayPanel", "Full Color Range", nullptr));

        fusionShowLegendCheckBox->setText(QApplication::translate("vvOverlayPanel", "Show legend", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vvOverlayPanel: public Ui_vvOverlayPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVOVERLAYPANEL_H
