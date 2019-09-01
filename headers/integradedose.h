#ifndef INTEGRADEDOSE_H
#define INTEGRADEDOSE_H

#include <QObject>
#include <QTextEdit>
#include <QFileDialog>
#include <QStandardPaths>
#include <QBuffer>
#include <QDateTime>
#include <QtPrintSupport/QPrinter>
#include <QDesktopServices>
#include <QTextStream>



class integradeDose : public QObject
{
    Q_OBJECT
public:
    explicit integradeDose(QObject *parent = nullptr);
    ~integradeDose();

    char* p_time_activity_curves_filename = nullptr;
    char* p_sadrs_filename = nullptr;
    QWidget* dialog;
    QByteArray ba;
    QByteArray ba2;
    void compute(QString, QString);
    double total_activity;
    int dosimetry_type;

signals:

public slots:
    void getFileNames(QString,QString,double activity);



};

#endif // INTEGRADEDOSE_H
