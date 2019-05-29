#ifndef CTDOSIMETRY_H
#define CTDOSIMETRY_H

#include <QWidget>
#include <QMainWindow>
#include <QCloseEvent>


namespace Ui {
class CTDosimetry;
}

class CTDosimetry : public QWidget
{
    Q_OBJECT

signals:
void closed();

public:
    explicit CTDosimetry(QWidget *parent = nullptr);
    ~CTDosimetry();

protected:
 virtual void closeEvent(QCloseEvent* e) override;

private:
    Ui::CTDosimetry *ui;
};

#endif // CTDOSIMETRY_H
