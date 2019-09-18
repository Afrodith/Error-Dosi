#ifndef BRACHYTHERAPY_H
#define BRACHYTHERAPY_H


#include <QDialog>
#include <QString>
#include <QDesktopServices>
#include <QUrl>
#include <QDir>
#include <QtPrintSupport/QPrinter>
#include <QtQuickWidgets/QQuickWidget>
#include <QQuickView>


namespace Ui {
class Brachytherapy;
}

class Brachytherapy : public QDialog
{
    Q_OBJECT

public:
    explicit Brachytherapy(QWidget *parent = nullptr);
    ~Brachytherapy();
    QQuickView *view ;
    QWidget *container;





signals:
     void setSourceString(QVariant source);

private slots:

 void on_pushButton_pressed();


private:
    Ui::Brachytherapy *ui;
};

#endif // BRACHYTHERAPY_H
