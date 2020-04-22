
#include "scarcal.h"
#include "ui_scarcal.h"
#include <QLabel>
#include <QPixmap>

Scarcal::Scarcal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Scarcal)
{
    ui->setupUi(this);
    QPixmap pix("/home/pi/Downloads/FinalQT/peterborough.png");
    ui->imageLabel->setPixmap(pix.scaled(1250,1100,Qt::KeepAspectRatio));
}

Scarcal::~Scarcal()
{
    delete ui;
}
