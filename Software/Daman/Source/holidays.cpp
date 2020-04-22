#include "holidays.h"
#include "ui_holidays.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QTextBrowser>

HoliDays::HoliDays(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HoliDays)
{
    ui->setupUi(this);
    QPixmap pix("/home/pi/Downloads/FinalQT/Holiday.png");
    ui->label->setPixmap(pix.scaled(1200,750,Qt::KeepAspectRatio));
}

HoliDays::~HoliDays()
{
    delete ui;
}

void HoliDays::on_pushButton_clicked()
{
    QFile file("/home/pi/Downloads/FinalQT/garbageitems.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"Book",file.errorString());

        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());

}

void HoliDays::on_pushButton_2_clicked()
{
    QFile file("/home/pi/Downloads/FinalQT/recycleitems.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"Book",file.errorString());

        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
}

void HoliDays::on_pushButton_3_clicked()
{
    QFile file("/home/pi/Downloads/FinalQT/Notactrecycle.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"Book",file.errorString());

        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
}

void HoliDays::on_pushButton_4_clicked()
{
    QFile file("/home/pi/Downloads/FinalQT/dropofdepot.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"Book",file.errorString());

        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
}
