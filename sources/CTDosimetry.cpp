#include "headers/CTDosimetry.h"
#include "ui_CTDosimetry.h"
#include <QFile>


CTDosimetry::CTDosimetry(QWidget *parent) :
    ui(new Ui::CTDosimetry)
{
    ui->setupUi(this);
    this->setWindowTitle("Computed Tomography Dosimetry");

}

CTDosimetry::~CTDosimetry()
{
    delete ui;
}

void CTDosimetry::closeEvent(QCloseEvent* e)
{
    e->accept();
    emit closed();


}
