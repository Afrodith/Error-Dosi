#include "NMDosimetry.h"
#include "ui_NMDosimetry.h"

NMDosimetry::NMDosimetry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NMDosimetry)
{
    ui->setupUi(this);
    phantom_match = nullptr;
}

NMDosimetry::~NMDosimetry()
{
    delete ui;
}

void NMDosimetry::on_pushButton_clicked()
{
    if(phantom_match==nullptr)
        phantom_match=new integradeDose(this);
    phantom_match->compute();
}
