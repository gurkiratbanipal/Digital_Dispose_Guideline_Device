
#ifndef NORYKCAL_H
#define NORYKCAL_H

#include <QDialog>

namespace Ui {
class norykcal;
}

class norykcal : public QDialog
{
    Q_OBJECT

public:
    explicit norykcal(QWidget *parent = nullptr);
    ~norykcal();

private:
    Ui::norykcal *ui;
};

#endif // NORYKCAL_H
