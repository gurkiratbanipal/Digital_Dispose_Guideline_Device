
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

DigDisGUI::DigDisGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DigDisGUI)
{
    ui->setupUi(this);
    QPixmap logo("/home/pi/Downloads/logo.png");
    ui->Logo->setPixmap(logo.scaled(451,261,Qt::KeepAspectRatio));
        
    currentTime = new QTimer(this);
    connect(currentTime, SIGNAL(timeout()),this,SLOT(clockUpdate()));
    currentTime->start(1000);
}

DigDisGUI::~DigDisGUI()
{
    delete ui;
}

void DigDisGUI::clockUpdate()
{
    QTime updateTime = QTime::currentTime();
    QString time_text = updateTime.toString("hh : mm : ss");
    ui->label_Cdate_Ctime->setText(time_text);
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
void DigDisGUI::on_pushButton_6_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.vonage.com/communications-apis/", QUrl::TolerantMode));
}





