#include "headers/mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CT=nullptr;
    NM=nullptr;
    brachy=nullptr;
    this->setWindowTitle("Error-Dosi");

    QPixmap image_red = QPixmap::fromImage(QImage(":/icons/icons/platform-credits.jpg"));

    QGraphicsScene* scene1= new QGraphicsScene(ui->graphicsView);
    scene1->addPixmap(image_red);
    scene1->setSceneRect(image_red.rect());

    ui->graphicsView->setScene(scene1);

    ui->graphicsView->resize(scene1->itemsBoundingRect().width(),scene1->itemsBoundingRect().height());

    ui->graphicsView->show();


//   vvMainWindow *vvMain = new vvMainWindow(this);
//   vvMain->show();


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
  else {
      delete CT;
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
    else {
        delete NM;
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
    else {
        delete brachy;
        brachy = new Brachytherapy(this);
    }
     brachy->show();
}

/*noreturn : Indicates that the function does not return.
This attribute applies to the name of the function being declared in function declarations only.
The behavior is undefined if the function with this attribute actually returns. */

void MainWindow::on_actionExit_triggered()
{
    exit(EXIT_SUCCESS);
}
