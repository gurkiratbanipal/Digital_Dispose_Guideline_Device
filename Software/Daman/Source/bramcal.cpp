
#include "bramcal.h"
#include "ui_bramcal.h"
#include <QPixmap>
#include <QLabel>

Bramcal::Bramcal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bramcal)
{
    ui->setupUi(this);
}

Bramcal::~Bramcal()
{
    delete ui;
}
