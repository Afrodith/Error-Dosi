#include "Brachytherapy.h"
#include "ui_Brachytherapy.h"

Brachytherapy::Brachytherapy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Brachytherapy)
{
    ui->setupUi(this);
}

Brachytherapy::~Brachytherapy()
{
    delete ui;
}
