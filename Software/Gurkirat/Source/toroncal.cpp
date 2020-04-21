#include "toroncal.h"
#include "ui_toroncal.h"
#include <QPixmap>
#include <QLabel>

toroncal::toroncal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::toroncal)
{
    ui->setupUi(this);
    QPixmap pix("/home/pi/Downloads/Toronto.png");
    ui->label->setPixmap(pix.scaled(3550,6000,Qt::KeepAspectRatio));
        
}

toroncal::~toroncal()
{
    delete ui;
}
