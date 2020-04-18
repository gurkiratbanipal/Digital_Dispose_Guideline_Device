
#include "quizwin.h"
#include "ui_quizwin.h"
#include <QMessageBox>

QuizWin::QuizWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuizWin)
{
    ui->setupUi(this);
}

QuizWin::~QuizWin()
{
    delete ui;
}

void QuizWin::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
     {
         QMessageBox::information(this,"Answer","NO!! You are wrong");
     }
     else if(ui->checkBox_2->isChecked())
     {
         QMessageBox::information(this,"Answer","Yes!! You are Correct");
     }
     else if(ui->checkBox_3->isChecked())
     {
         QMessageBox::information(this,"Answer","NO!! You are wrong");
     }
     else
     {
         QMessageBox::information(this,"Answer","Please select one checkbox");
     }
}

void QuizWin::on_pushButton_2_clicked()
{
    if(ui->checkBox_5->isChecked())
    {
        QMessageBox::information(this,"Answer","NO!! You are wrong");
    }
    else if(ui->checkBox_4->isChecked())
    {
        QMessageBox::information(this,"Answer","Yes!! You are Correct");
    }
    else if(ui->checkBox_6->isChecked())
    {
        QMessageBox::information(this,"Answer","NO!! You are wrong");
    }
    else
    {
        QMessageBox::information(this,"Answer","Please select one checkbox");
    }
}

void QuizWin::on_pushButton_3_clicked()
{
    if(ui->checkBox_8->isChecked())
    {
        QMessageBox::information(this,"Answer","NO!! You are wrong");
    }
    else if(ui->checkBox_7->isChecked())
    {
        QMessageBox::information(this,"Answer","Yes!! You are Correct");
    }
    else if(ui->checkBox_9->isChecked())
    {
        QMessageBox::information(this,"Answer","NO!! You are wrong");
    }
    else
    {
        QMessageBox::information(this,"Answer","Please select one checkbox");
    }
}

void QuizWin::on_pushButton_4_clicked()
{
    if(ui->checkBox_11->isChecked())
    {
        QMessageBox::information(this,"Answer","NO!! You are wrong");
    }
    else if(ui->checkBox_12->isChecked())
    {
        QMessageBox::information(this,"Answer","Yes!! You are Correct");
    }
    else if(ui->checkBox_10->isChecked())
    {
        QMessageBox::information(this,"Answer","NO!! You are wrong");
    }
    else
    {
        QMessageBox::information(this,"Answer","Please select one checkbox");
    }
}

void QuizWin::on_pushButton_5_clicked()
{
    if(ui->checkBox_14->isChecked())
        {
            QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_13->isChecked())
        {
            QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_15->isChecked())
        {
            QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
            QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_6_clicked()
{
    if(ui->checkBox_16->isChecked())
        {
            QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_17->isChecked())
        {
            QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_18->isChecked())
        {
            QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
            QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_7_clicked()
{
    if(ui->checkBox_19->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_20->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_21->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_8_clicked()
{
    if(ui->checkBox_23->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_22->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_24->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}
