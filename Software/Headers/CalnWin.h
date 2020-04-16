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

private:
    Ui::CalnWin *ui;
};

#endif // CALNWIN_H
