#ifndef CTDOSIMETRY_H
#define CTDOSIMETRY_H

#include <QDialog>

namespace Ui {
class CTDosimetry;
}

class CTDosimetry : public QDialog
{
    Q_OBJECT

public:
    explicit CTDosimetry(QWidget *parent = nullptr);
    ~CTDosimetry();

private:
    Ui::CTDosimetry *ui;
};

#endif // CTDOSIMETRY_H
