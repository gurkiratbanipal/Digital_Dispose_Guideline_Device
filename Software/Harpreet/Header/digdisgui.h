
#ifndef DIGDISGUI_H
#define DIGDISGUI_H

#include <QMainWindow>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class DigDisGUI; }
QT_END_NAMESPACE

class DigDisGUI : public QMainWindow
{
    Q_OBJECT

public:
    DigDisGUI(QWidget *parent = nullptr);
    ~DigDisGUI();
    
public slots:
    void clockUpdate();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();
    
    void on_pushButton_6_clicked();

private:
    Ui::DigDisGUI *ui;
    QTimer *currentTime;
};
#endif // DIGDISGUI_H
