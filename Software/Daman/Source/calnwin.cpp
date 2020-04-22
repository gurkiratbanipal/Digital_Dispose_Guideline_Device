#include "calnwin.h"
#include "ui_calnwin.h"
#include "scarcal.h"
#include "bramcal.h"
#include "toroncal.h"
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

void CalnWin::on_pushButton_clicked()
{
    toroncal tronpic;
    tronpic.setModal(true);
    tronpic.exec();
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
void CalnWin::on_pushButton_3_clicked()
{
    Missical misspic;
    misspic.setModal(true);
    misspic.exec();
}

void CalnWin::on_pushButton_5_clicked()
{
    norykcal norypic;
    norypic.setModal(true);
    norypic.exec();
}

void CalnWin::on_pushButton_4_clicked()
{
    HaltonCal haltonpic;
    haltonpic.setModal(true);
    haltonpic.exec();
}

void CalnWin::on_pushButton_10_clicked()
{
    HoliDays holidayspic;
    holidayspic.setModal(true);
    holidayspic.exec();
}

void CalnWin::on_pushButton_9_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.toronto.ca/services-payments/recycling-organics-garbage/houses/collection-schedule/", QUrl::TolerantMode));
}

