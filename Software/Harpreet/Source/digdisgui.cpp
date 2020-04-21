
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

DigDisGUI::DigDisGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DigDisGUI)
{
    ui->setupUi(this);
}

DigDisGUI::~DigDisGUI()
{
    delete ui;
}


void DigDisGUI::on_pushButton_2_clicked()
{
    QuizWin quizdialog;
    quizdialog.setModal(true);
    quizdialog.exec();
}

void DigDisGUI::on_pushButton_clicked()
{
    CalnWin calndialog;
    calndialog.setModal(true);
    calndialog.exec();
}
void DigDisGUI::on_pushButton_3_clicked()
{
    QFile file("/home/pi/Downloads/ThanksBook.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"Book",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}
void DigDisGUI::on_pushButton_4_clicked()
{
    QFile file("/home/pi/Downloads/GarbageBook.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"Book",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}
void DigDisGUI::on_pushButton_5_clicked()
{
    close();
}




