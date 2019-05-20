#ifndef INTEGRADEDOSE_H
#define INTEGRADEDOSE_H

#include <QObject>
#include <QTextEdit>
#include <QFileDialog>
#include <QStandardPaths>
#include <QDateTime>



class integradeDose : public QObject
{
    Q_OBJECT
public:
    explicit integradeDose(QObject *parent = nullptr);
    ~integradeDose();

    char* p_time_activity_curves_filename = nullptr;
    char* p_sadrs_filename = nullptr;
    QWidget* dialog;
    void compute();


signals:

public slots:
    void getFileNames(QString,QString);



};

#endif // INTEGRADEDOSE_H
