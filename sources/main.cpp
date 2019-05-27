#include "headers/mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setApplicationName("Error Dosi");
    a.setOrganizationName("Bioemtech");
    w.show();

    return a.exec();
}
