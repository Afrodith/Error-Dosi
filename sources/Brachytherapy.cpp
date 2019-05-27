#include "headers/Brachytherapy.h"
#include "ui_Brachytherapy.h"

Brachytherapy::Brachytherapy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Brachytherapy)
{
    ui->setupUi(this);
    this->setWindowTitle("Brachytherapy");
}

Brachytherapy::~Brachytherapy()
{
    delete ui;
}
