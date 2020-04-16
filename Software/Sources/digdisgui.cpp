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


