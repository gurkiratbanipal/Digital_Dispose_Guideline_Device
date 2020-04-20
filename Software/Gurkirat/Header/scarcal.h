
#ifndef SCARCAL_H
#define SCARCAL_H

#include <QDialog>
#include <QScrollArea>

namespace Ui {
class Scarcal;
}

class Scarcal : public QDialog
{
    Q_OBJECT

public:
    explicit Scarcal(QWidget *parent = nullptr);
    ~Scarcal();

private:
    Ui::Scarcal *ui;

};

#endif // SCARCAL_H
