#include "missical.h"
#include "ui_missical.h"
#include <QPixmap>
#include <QLabel>

Missical::Missical(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Missical)
{
    ui->setupUi(this);
    QPixmap pix("/home/pi/Downloads/Burlington.png");
    ui->label->setPixmap(pix.scaled(4000,4000,Qt::KeepAspectRatio));
}

Missical::~Missical()
{
    delete ui;
}
