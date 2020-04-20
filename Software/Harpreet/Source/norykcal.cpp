
#include "norykcal.h"
#include "ui_norykcal.h"
#include <QPixmap>
#include <QLabel>

norykcal::norykcal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::norykcal)
{
    ui->setupUi(this);    
}

norykcal::~norykcal()
{
    delete ui;
}
