#include "CTDosimetry.h"
#include "ui_CTDosimetry.h"

CTDosimetry::CTDosimetry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CTDosimetry)
{
    ui->setupUi(this);
}

CTDosimetry::~CTDosimetry()
{
    delete ui;
}
