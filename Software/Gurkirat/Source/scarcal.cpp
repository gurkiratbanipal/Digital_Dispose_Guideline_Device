
#include "scarcal.h"
#include "ui_scarcal.h"
#include <QLabel>
#include <QPixmap>

Scarcal::Scarcal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Scarcal)
{
    ui->setupUi(this);
}

Scarcal::~Scarcal()
{
    delete ui;
}
