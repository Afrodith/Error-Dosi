#include "headers/CTDosimetry.h"
#include "ui_CTDosimetry.h"

CTDosimetry::CTDosimetry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTDosimetry)
{
    ui->setupUi(this);
    this->setWindowTitle("Computed Tomography Dosimetry");
}

CTDosimetry::~CTDosimetry()
{
    delete ui;
}
