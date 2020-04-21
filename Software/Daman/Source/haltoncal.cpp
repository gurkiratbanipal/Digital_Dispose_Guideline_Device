
#include "haltoncal.h"
#include "ui_haltoncal.h"

HaltonCal::HaltonCal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HaltonCal)
{
    ui->setupUi(this);
    QPixmap pix("/home/pi/Downloads/Halton.png");
    ui->label->setPixmap(pix.scaled(4000,4000,Qt::KeepAspectRatio));



}

HaltonCal::~HaltonCal()
{
    delete ui;
}
