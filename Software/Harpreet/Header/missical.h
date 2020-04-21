#ifndef MISSICAL_H
#define MISSICAL_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class Missical;
}

class Missical : public QDialog
{
    Q_OBJECT

public:
    explicit Missical(QWidget *parent = nullptr);
    ~Missical();

private:
    Ui::Missical *ui;
};

#endif // MISSICAL_H
