#ifndef BRACHYTHERAPY_H
#define BRACHYTHERAPY_H


#include <QDialog>

namespace Ui {
class Brachytherapy;
}

class Brachytherapy : public QDialog
{
    Q_OBJECT

public:
    explicit Brachytherapy(QWidget *parent = nullptr);
    ~Brachytherapy();

private:
    Ui::Brachytherapy *ui;
};

#endif // BRACHYTHERAPY_H
