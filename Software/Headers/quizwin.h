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




private:
    Ui::QuizWin *ui;
};

#endif // QUIZWIN_H
