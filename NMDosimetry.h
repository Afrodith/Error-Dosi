#ifndef NMDOSIMETRY_H
#define NMDOSIMETRY_H

#include <QDialog>
#include "integradedose.h"

namespace Ui {
class NMDosimetry;
}

class NMDosimetry : public QDialog
{
    Q_OBJECT

public:
    explicit NMDosimetry(QWidget *parent = nullptr);
    ~NMDosimetry();
    integradeDose *phantom_match;

private slots:
    void on_pushButton_clicked();

private:
    Ui::NMDosimetry *ui;
};

#endif // NMDOSIMETRY_H
