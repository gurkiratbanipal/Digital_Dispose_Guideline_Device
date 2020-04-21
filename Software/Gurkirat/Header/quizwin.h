
#ifndef QUIZWIN_H
#define QUIZWIN_H

#include <QDialog>

namespace Ui {
class QuizWin;
}

class QuizWin : public QDialog
{
    Q_OBJECT

public:
    explicit QuizWin(QWidget *parent = nullptr);
    ~QuizWin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();



private:
    Ui::QuizWin *ui;
};

#endif // QUIZWIN_H
