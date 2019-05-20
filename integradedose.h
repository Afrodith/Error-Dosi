#ifndef INTEGRADEDOSE_H
#define INTEGRADEDOSE_H

#include <QObject>


class integradeDose : public QObject
{
    Q_OBJECT
public:
    explicit integradeDose(QObject *parent = nullptr,QString="",QString="");

    char* p_time_activity_curves_filename = nullptr;
    char* p_sadrs_filename = nullptr;
    void compute();


signals:

public slots:






};

#endif // INTEGRADEDOSE_H
