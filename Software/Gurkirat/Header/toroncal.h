#ifndef TORONCAL_H
#define TORONCAL_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class toroncal;
}

class toroncal : public QDialog
{
    Q_OBJECT

public:
    explicit toroncal(QWidget *parent = nullptr);
    ~toroncal();

private:
    Ui::toroncal *ui;
};

#endif // TORONCAL_H
