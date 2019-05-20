#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include "CTDosimetry.h"
#include "NMDosimetry.h"
#include "Brachytherapy.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    CTDosimetry *CT;
    NMDosimetry *NM;
    Brachytherapy *brachy;

private slots:
    void on_pb_CT_clicked();

    void on_pb_NM_clicked();

    void on_pb_brachy_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
