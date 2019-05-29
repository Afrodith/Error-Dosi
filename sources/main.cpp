#include "headers/mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    a.setApplicationName("Error Dosi");
    a.setOrganizationName("Bioemtech");
    a.setWindowIcon(QIcon(":/icons/icons/error.png"));
    QFile file(":/StyleSheets/Minimalist/Minimalist.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    a.setStyleSheet(styleSheet);


    w.show();

    return a.exec();
}
