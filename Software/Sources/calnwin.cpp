#include "calnwin.h"
#include "ui_calnwin.h"
#include "scarcal.h"
#include "bramcal.h"
#include <QLabel>

CalnWin::CalnWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalnWin)
{
    ui->setupUi(this);
}

CalnWin::~CalnWin()
{
    delete ui;
}

void CalnWin::on_pushButton_6_clicked()
{
    Scarcal scarpic;
    scarpic.setModal(true);
    scarpic.exec();
}

void CalnWin::on_pushButton_2_clicked()
{
   Bramcal brampic;
   brampic.setModal(true);
   brampic.exec();
}
