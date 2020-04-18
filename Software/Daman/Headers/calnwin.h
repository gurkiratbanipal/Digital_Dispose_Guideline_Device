#ifndef CALNWIN_H
#define CALNWIN_H

#include <QDialog>

namespace Ui {
class CalnWin;
}

class CalnWin : public QDialog
{
    Q_OBJECT

public:
    explicit CalnWin(QWidget *parent = nullptr);
    ~CalnWin();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();
    
    private:
    Ui::CalnWin *ui;
};

#endif // CALNWIN_H

