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
    explicit integradeDose(QObject *parent = nullptr,int=0);
    ~integradeDose();

    int DosimetryType;
    char* p_time_activity_curves_filename = nullptr;
    char* p_sadrs_filename = nullptr;
    QWidget* dialog;
    QByteArray ba;
    QByteArray ba2;
    QVector<double> compute(QString, QString);
    QVector<double> compute(QString fname, QString manuf, QString protocol, int mAS, int CDTIVol, int energy);
    double total_activity;
    int dosimetry_type;

signals:

public slots:
    void getFileNames(QString,QString,double activity);
    void getFileNames(QString);



};

#endif // INTEGRADEDOSE_H
