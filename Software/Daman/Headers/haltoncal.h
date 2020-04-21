
#ifndef HALTONCAL_H
#define HALTONCAL_H

#include <QDialog>

namespace Ui {
class HaltonCal;
}

class HaltonCal : public QDialog
{
    Q_OBJECT

public:
    explicit HaltonCal(QWidget *parent = nullptr);
    ~HaltonCal();

private:
    Ui::HaltonCal *ui;
};

#endif // HALTONCAL_H
