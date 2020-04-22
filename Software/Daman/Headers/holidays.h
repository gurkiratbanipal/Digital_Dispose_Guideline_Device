#ifndef HOLIDAYS_H
#define HOLIDAYS_H

#include <QDialog>
#include <QPixmap>
#include <QTextBrowser>

namespace Ui {
class HoliDays;
}

class HoliDays : public QDialog
{
    Q_OBJECT

public:
    explicit HoliDays(QWidget *parent = nullptr);
    ~HoliDays();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::HoliDays *ui;
};

#endif // HOLIDAYS_H
