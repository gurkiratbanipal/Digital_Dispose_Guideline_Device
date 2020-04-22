
#include "norykcal.h"
#include "ui_norykcal.h"
#include <QPixmap>
#include <QLabel>

norykcal::norykcal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::norykcal)
{
    ui->setupUi(this); 
    QPixmap pix("/home/pi/Downloads/FinalQT/Ottawa.png");
    ui->labelpic->setPixmap(pix.scaled(1250,1100,Qt::KeepAspectRatio));
}

norykcal::~norykcal()
{
    delete ui;
}
