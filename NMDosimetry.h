#ifndef NMDOSIMETRY_H
#define NMDOSIMETRY_H

#include <QDialog>
#include <QDir>
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
    QString currentDir;
    QString linux_activityCurves;
    QString linux_sadr;


private slots:
    void on_pushButton_clicked();

    void on_cB_radiopharma_currentIndexChanged(int index);

private:
    Ui::NMDosimetry *ui;
};

#endif // NMDOSIMETRY_H
