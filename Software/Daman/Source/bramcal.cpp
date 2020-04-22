
#include "bramcal.h"
#include "ui_bramcal.h"
#include <QPixmap>
#include <QLabel>

Bramcal::Bramcal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bramcal)
{
    ui->setupUi(this);
    QPixmap pix("/home/pi/Downloads/FinalQT/Brampton.png");
    ui->label->setPixmap(pix.scaled(1250,1100,Qt::KeepAspectRatio));
}

Bramcal::~Bramcal()
{
    delete ui;
}
