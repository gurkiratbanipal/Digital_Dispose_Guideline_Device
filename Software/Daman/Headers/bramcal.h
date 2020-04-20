
#ifndef BRAMCAL_H
#define BRAMCAL_H

#include <QDialog>

namespace Ui {
class Bramcal;
}

class Bramcal : public QDialog
{
    Q_OBJECT

public:
    explicit Bramcal(QWidget *parent = nullptr);
    ~Bramcal();

private:
    Ui::Bramcal *ui;
};

#endif // BRAMCAL_H
