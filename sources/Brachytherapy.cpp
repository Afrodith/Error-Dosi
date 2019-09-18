#include "headers/Brachytherapy.h"
#include "ui_Brachytherapy.h"
#include <QtQml/QQmlApplicationEngine>
#include <QQmlComponent>
#include <QDebug>
#include <QGraphicsObject>
#include <QQuickWindow>
#include <QGraphicsScene>
#include <QVBoxLayout>



Brachytherapy::Brachytherapy(QWidget *parent) : QDialog(parent),
   ui(new Ui::Brachytherapy)
{
    ui->setupUi(this);
    this->setWindowTitle("Brachytherapy");
    view = new QQuickView();
    container = QWidget::createWindowContainer(view, this);
  //  container->setMinimumSize(640,480);
  //  container->setMaximumSize(640,480);




    ui->verticalLayout->addWidget(container);


//    QObject::connect(this, SIGNAL(setSourceString(QVariant)),
//                         (QObject *)view->rootObject(), SLOT(setSourceString(QVariant)));




}

Brachytherapy::~Brachytherapy()
{
    delete ui;
}



void Brachytherapy::on_pushButton_pressed()
{

    QString text =ui->comboBox->currentText();

    QString pdfText = text;
    QString qmlText = text;

    QString pdfFilename = QDir::currentPath().append("/data/Brachytherapy/");
    pdfFilename.append(pdfText+".pdf");

    QDesktopServices::openUrl(QUrl::fromLocalFile(pdfFilename));

    view->setSource(QUrl("qrc:/qml/"+qmlText+".qml"));
    view->requestUpdate();





}




