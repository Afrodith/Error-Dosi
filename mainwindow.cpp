#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CT=nullptr;
    NM=nullptr;
    brachy=nullptr;
    QFile file(":/pushbuttton.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    this->setStyleSheet(styleSheet);



}

MainWindow::~MainWindow()
{
    if(CT!=nullptr)
        delete CT;
    if(NM!=nullptr)
        delete NM;
    if(brachy!=nullptr)
        delete brachy;

    delete ui;
}

void MainWindow::on_pb_CT_clicked()
{
  if(CT==nullptr)
  {
    CT = new CTDosimetry(this);
  }
   CT->show();

}

void MainWindow::on_pb_NM_clicked()
{

    if(NM==nullptr)
    {
      NM = new NMDosimetry(this);
    }
     NM->show();
}

void MainWindow::on_pb_brachy_clicked()
{

    if(brachy==nullptr)
    {
      brachy = new Brachytherapy(this);
    }
     brachy->show();
}
