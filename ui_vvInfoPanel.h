/********************************************************************************
** Form generated from reading UI file 'vvInfoPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VVINFOPANEL_H
#define UI_VVINFOPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vvInfoPanel
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *imageStaticlabel;
    QLabel *imageLabel;
    QLabel *dimensionStaticLabel;
    QLabel *dimensionLabel;
    QLabel *sizePixelStaticLabel;
    QLabel *sizePixelLabel;
    QLabel *sizeMMStaticLabel;
    QLabel *sizeMMLabel;
    QLabel *originStaticLabel;
    QLabel *originLabel;
    QLabel *spacingStaticLabel;
    QLabel *spacingLabel;
    QLabel *nPixelStaticLabel;
    QLabel *nPixelLabel;
    QLabel *mouseStaticLabel_2;
    QLabel *mouseLabel;
    QLabel *pixelPosStaticLabel;
    QLabel *pixelPosLabel;
    QLabel *worldPosStaticLabel;
    QLabel *worldPosLabel;
    QLabel *valueStaticLabel;
    QLabel *valueLabel;
    QLabel *ViewsLabel;
    QLabel *transformationLabel;
    QLabel *TransformationStaticLabel;
    QLabel *memoryUsageLabel;
    QSpacerItem *verticalSpacer;
    QLabel *creationTimeStaticLabel;
    QLabel *creationTimeLabel;

    void setupUi(QWidget *vvInfoPanel)
    {
        if (vvInfoPanel->objectName().isEmpty())
            vvInfoPanel->setObjectName(QString::fromUtf8("vvInfoPanel"));
        vvInfoPanel->resize(276, 459);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vvInfoPanel->sizePolicy().hasHeightForWidth());
        vvInfoPanel->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(vvInfoPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(vvInfoPanel);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 256, 439));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageStaticlabel = new QLabel(scrollAreaWidgetContents);
        imageStaticlabel->setObjectName(QString::fromUtf8("imageStaticlabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageStaticlabel->sizePolicy().hasHeightForWidth());
        imageStaticlabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(imageStaticlabel, 0, 0, 1, 1);

        imageLabel = new QLabel(scrollAreaWidgetContents);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));

        gridLayout->addWidget(imageLabel, 0, 1, 1, 1);

        dimensionStaticLabel = new QLabel(scrollAreaWidgetContents);
        dimensionStaticLabel->setObjectName(QString::fromUtf8("dimensionStaticLabel"));
        sizePolicy1.setHeightForWidth(dimensionStaticLabel->sizePolicy().hasHeightForWidth());
        dimensionStaticLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(dimensionStaticLabel, 2, 0, 1, 1);

        dimensionLabel = new QLabel(scrollAreaWidgetContents);
        dimensionLabel->setObjectName(QString::fromUtf8("dimensionLabel"));
        sizePolicy.setHeightForWidth(dimensionLabel->sizePolicy().hasHeightForWidth());
        dimensionLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(dimensionLabel, 2, 1, 1, 1);

        sizePixelStaticLabel = new QLabel(scrollAreaWidgetContents);
        sizePixelStaticLabel->setObjectName(QString::fromUtf8("sizePixelStaticLabel"));
        sizePolicy1.setHeightForWidth(sizePixelStaticLabel->sizePolicy().hasHeightForWidth());
        sizePixelStaticLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sizePixelStaticLabel, 3, 0, 1, 1);

        sizePixelLabel = new QLabel(scrollAreaWidgetContents);
        sizePixelLabel->setObjectName(QString::fromUtf8("sizePixelLabel"));
        sizePolicy.setHeightForWidth(sizePixelLabel->sizePolicy().hasHeightForWidth());
        sizePixelLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sizePixelLabel, 3, 1, 1, 1);

        sizeMMStaticLabel = new QLabel(scrollAreaWidgetContents);
        sizeMMStaticLabel->setObjectName(QString::fromUtf8("sizeMMStaticLabel"));
        sizePolicy1.setHeightForWidth(sizeMMStaticLabel->sizePolicy().hasHeightForWidth());
        sizeMMStaticLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sizeMMStaticLabel, 4, 0, 1, 1);

        sizeMMLabel = new QLabel(scrollAreaWidgetContents);
        sizeMMLabel->setObjectName(QString::fromUtf8("sizeMMLabel"));
        sizePolicy.setHeightForWidth(sizeMMLabel->sizePolicy().hasHeightForWidth());
        sizeMMLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sizeMMLabel, 4, 1, 1, 1);

        originStaticLabel = new QLabel(scrollAreaWidgetContents);
        originStaticLabel->setObjectName(QString::fromUtf8("originStaticLabel"));
        sizePolicy1.setHeightForWidth(originStaticLabel->sizePolicy().hasHeightForWidth());
        originStaticLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(originStaticLabel, 5, 0, 1, 1);

        originLabel = new QLabel(scrollAreaWidgetContents);
        originLabel->setObjectName(QString::fromUtf8("originLabel"));
        sizePolicy.setHeightForWidth(originLabel->sizePolicy().hasHeightForWidth());
        originLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(originLabel, 5, 1, 1, 1);

        spacingStaticLabel = new QLabel(scrollAreaWidgetContents);
        spacingStaticLabel->setObjectName(QString::fromUtf8("spacingStaticLabel"));
        sizePolicy1.setHeightForWidth(spacingStaticLabel->sizePolicy().hasHeightForWidth());
        spacingStaticLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(spacingStaticLabel, 6, 0, 1, 1);

        spacingLabel = new QLabel(scrollAreaWidgetContents);
        spacingLabel->setObjectName(QString::fromUtf8("spacingLabel"));
        sizePolicy.setHeightForWidth(spacingLabel->sizePolicy().hasHeightForWidth());
        spacingLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(spacingLabel, 6, 1, 1, 1);

        nPixelStaticLabel = new QLabel(scrollAreaWidgetContents);
        nPixelStaticLabel->setObjectName(QString::fromUtf8("nPixelStaticLabel"));
        sizePolicy1.setHeightForWidth(nPixelStaticLabel->sizePolicy().hasHeightForWidth());
        nPixelStaticLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(nPixelStaticLabel, 7, 0, 1, 1);

        nPixelLabel = new QLabel(scrollAreaWidgetContents);
        nPixelLabel->setObjectName(QString::fromUtf8("nPixelLabel"));
        sizePolicy.setHeightForWidth(nPixelLabel->sizePolicy().hasHeightForWidth());
        nPixelLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(nPixelLabel, 7, 1, 1, 1);

        mouseStaticLabel_2 = new QLabel(scrollAreaWidgetContents);
        mouseStaticLabel_2->setObjectName(QString::fromUtf8("mouseStaticLabel_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mouseStaticLabel_2->sizePolicy().hasHeightForWidth());
        mouseStaticLabel_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mouseStaticLabel_2, 8, 0, 1, 1);

        mouseLabel = new QLabel(scrollAreaWidgetContents);
        mouseLabel->setObjectName(QString::fromUtf8("mouseLabel"));

        gridLayout->addWidget(mouseLabel, 8, 1, 1, 1);

        pixelPosStaticLabel = new QLabel(scrollAreaWidgetContents);
        pixelPosStaticLabel->setObjectName(QString::fromUtf8("pixelPosStaticLabel"));
        sizePolicy2.setHeightForWidth(pixelPosStaticLabel->sizePolicy().hasHeightForWidth());
        pixelPosStaticLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pixelPosStaticLabel, 9, 0, 1, 1);

        pixelPosLabel = new QLabel(scrollAreaWidgetContents);
        pixelPosLabel->setObjectName(QString::fromUtf8("pixelPosLabel"));
        sizePolicy.setHeightForWidth(pixelPosLabel->sizePolicy().hasHeightForWidth());
        pixelPosLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pixelPosLabel, 9, 1, 1, 1);

        worldPosStaticLabel = new QLabel(scrollAreaWidgetContents);
        worldPosStaticLabel->setObjectName(QString::fromUtf8("worldPosStaticLabel"));
        sizePolicy2.setHeightForWidth(worldPosStaticLabel->sizePolicy().hasHeightForWidth());
        worldPosStaticLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(worldPosStaticLabel, 10, 0, 1, 1);

        worldPosLabel = new QLabel(scrollAreaWidgetContents);
        worldPosLabel->setObjectName(QString::fromUtf8("worldPosLabel"));
        sizePolicy.setHeightForWidth(worldPosLabel->sizePolicy().hasHeightForWidth());
        worldPosLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(worldPosLabel, 10, 1, 1, 1);

        valueStaticLabel = new QLabel(scrollAreaWidgetContents);
        valueStaticLabel->setObjectName(QString::fromUtf8("valueStaticLabel"));
        sizePolicy2.setHeightForWidth(valueStaticLabel->sizePolicy().hasHeightForWidth());
        valueStaticLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(valueStaticLabel, 11, 0, 1, 1);

        valueLabel = new QLabel(scrollAreaWidgetContents);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        sizePolicy.setHeightForWidth(valueLabel->sizePolicy().hasHeightForWidth());
        valueLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(valueLabel, 11, 1, 1, 1);

        ViewsLabel = new QLabel(scrollAreaWidgetContents);
        ViewsLabel->setObjectName(QString::fromUtf8("ViewsLabel"));

        gridLayout->addWidget(ViewsLabel, 12, 1, 1, 1);

        transformationLabel = new QLabel(scrollAreaWidgetContents);
        transformationLabel->setObjectName(QString::fromUtf8("transformationLabel"));
        sizePolicy.setHeightForWidth(transformationLabel->sizePolicy().hasHeightForWidth());
        transformationLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(8);
        transformationLabel->setFont(font);
        transformationLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(transformationLabel, 16, 0, 1, 2);

        TransformationStaticLabel = new QLabel(scrollAreaWidgetContents);
        TransformationStaticLabel->setObjectName(QString::fromUtf8("TransformationStaticLabel"));
        sizePolicy1.setHeightForWidth(TransformationStaticLabel->sizePolicy().hasHeightForWidth());
        TransformationStaticLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(TransformationStaticLabel, 14, 0, 1, 1);

        memoryUsageLabel = new QLabel(scrollAreaWidgetContents);
        memoryUsageLabel->setObjectName(QString::fromUtf8("memoryUsageLabel"));
        sizePolicy2.setHeightForWidth(memoryUsageLabel->sizePolicy().hasHeightForWidth());
        memoryUsageLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(memoryUsageLabel, 18, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 0, 1, 1);

        creationTimeStaticLabel = new QLabel(scrollAreaWidgetContents);
        creationTimeStaticLabel->setObjectName(QString::fromUtf8("creationTimeStaticLabel"));
        sizePolicy1.setHeightForWidth(creationTimeStaticLabel->sizePolicy().hasHeightForWidth());
        creationTimeStaticLabel->setSizePolicy(sizePolicy1);
        creationTimeStaticLabel->setMouseTracking(true);

        gridLayout->addWidget(creationTimeStaticLabel, 1, 0, 1, 1);

        creationTimeLabel = new QLabel(scrollAreaWidgetContents);
        creationTimeLabel->setObjectName(QString::fromUtf8("creationTimeLabel"));
        sizePolicy.setHeightForWidth(creationTimeLabel->sizePolicy().hasHeightForWidth());
        creationTimeLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(creationTimeLabel, 1, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(vvInfoPanel);

        QMetaObject::connectSlotsByName(vvInfoPanel);
    } // setupUi

    void retranslateUi(QWidget *vvInfoPanel)
    {
        vvInfoPanel->setWindowTitle(QApplication::translate("vvInfoPanel", "Information", nullptr));
        imageStaticlabel->setText(QApplication::translate("vvInfoPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">Image :</span></p></body></html>", nullptr));
        imageLabel->setText(QString());
        dimensionStaticLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><span style=\" font-weight:600;\">  Dimension :</span></p></body></html>", nullptr));
        dimensionLabel->setText(QString());
        sizePixelStaticLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><span style=\" font-weight:600;\">  Size (pixel) :</span></p></body></html>", nullptr));
        sizePixelLabel->setText(QString());
        sizeMMStaticLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><span style=\" font-weight:600;\">  Size in mm :</span></p></body></html>", nullptr));
        sizeMMLabel->setText(QString());
        originStaticLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><span style=\" font-weight:600;\">  Origin :</span></p></body></html>", nullptr));
        originLabel->setText(QString());
        spacingStaticLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><span style=\" font-weight:600;\">  Spacing :</span></p></body></html>", nullptr));
        spacingLabel->setText(QString());
        nPixelStaticLabel->setText(QApplication::translate("vvInfoPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">  # pixels :</span></p></body></html>", nullptr));
        nPixelLabel->setText(QString());
        mouseStaticLabel_2->setText(QApplication::translate("vvInfoPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">Cross hair :</span></p></body></html>", nullptr));
        mouseLabel->setText(QString());
        pixelPosStaticLabel->setText(QApplication::translate("vvInfoPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">  Position (pixel):</span></p></body></html>", nullptr));
        pixelPosLabel->setText(QString());
        worldPosStaticLabel->setText(QApplication::translate("vvInfoPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">  Position (mm):</span></p></body></html>", nullptr));
        worldPosLabel->setText(QString());
        valueStaticLabel->setText(QApplication::translate("vvInfoPanel", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">  Pixel value :</span></p></body></html>", nullptr));
        valueLabel->setText(QString());
        ViewsLabel->setText(QString());
        transformationLabel->setText(QString());
        TransformationStaticLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">Transformation Matrix:</span></p></body></html>", nullptr));
        memoryUsageLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#0000ff;\">Memory usage: </span></p></body></html>", nullptr));
        creationTimeStaticLabel->setText(QApplication::translate("vvInfoPanel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><span style=\" font-weight:600;\">  Creation time :</span></p></body></html>", nullptr));
        creationTimeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class vvInfoPanel: public Ui_vvInfoPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VVINFOPANEL_H
