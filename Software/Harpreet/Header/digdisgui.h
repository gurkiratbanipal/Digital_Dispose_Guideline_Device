
#ifndef DIGDISGUI_H
#define DIGDISGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DigDisGUI; }
QT_END_NAMESPACE

class DigDisGUI : public QMainWindow
{
    Q_OBJECT

public:
    DigDisGUI(QWidget *parent = nullptr);
    ~DigDisGUI();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::DigDisGUI *ui;
};
#endif // DIGDISGUI_H
