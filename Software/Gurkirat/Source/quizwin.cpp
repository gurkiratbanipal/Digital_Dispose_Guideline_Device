
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

void QuizWin::on_pushButton_9_clicked()
{
    if(ui->checkBox_26->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_25->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_27->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_10_clicked()
{
    if(ui->checkBox_28->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
             QMessageBox::information(this,"Answer","Don't forget to remove battries from your remote control");
        }
        else if(ui->checkBox_29->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
             QMessageBox::information(this,"Answer","Don't forget to remove battries from your remote control");
       }
        else if(ui->checkBox_30->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
          QMessageBox::information(this,"Answer","Don't forget to remove battries from your remote control");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_11_clicked()
{
    if(ui->checkBox_33->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_32->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_31->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_12_clicked()
{
    if(ui->checkBox_34->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_35->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_36->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_13_clicked()
{
    if(ui->checkBox_39->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_38->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_37->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_14_clicked()
{
    if(ui->checkBox_42->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
               QMessageBox::information(this,"Answer","Yes, this item is Household Hazardous Waste(HHW).");
                 QMessageBox::information(this,"Answer","You have to drop-off this at Drop-off Depots. ");
        }
        else if(ui->checkBox_40->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
             QMessageBox::information(this,"Answer","This item is Household Hazardous Waste(HHW).");
               QMessageBox::information(this,"Answer","You have to drop-off this at Drop-off Depots. ");
        }
        else if(ui->checkBox_41->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
          QMessageBox::information(this,"Answer","This item is Household Hazardous Waste(HHW).");
            QMessageBox::information(this,"Answer","You have to drop-off this at Drop-off Depots. ");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_15_clicked()
{
    if(ui->checkBox_43->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_44->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_45->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_16_clicked()
{
    if(ui->checkBox_46->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_47->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_48->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_17_clicked()
{
    if(ui->checkBox_51->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
               QMessageBox::information(this,"Answer","Yes, this item is Household Hazardous Waste(HHW).");
                 QMessageBox::information(this,"Answer","You have to drop-off this at Drop-off Depots. ");
        }
        else if(ui->checkBox_50->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
             QMessageBox::information(this,"Answer","This item is Household Hazardous Waste(HHW).");
               QMessageBox::information(this,"Answer","You have to drop-off this at Drop-off Depots. ");
        }
        else if(ui->checkBox_49->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
          QMessageBox::information(this,"Answer","This item is Household Hazardous Waste(HHW).");
            QMessageBox::information(this,"Answer","You have to drop-off this at Drop-off Depots. ");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_18_clicked()
{
    if(ui->checkBox_52->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_53->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_54->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}

void QuizWin::on_pushButton_19_clicked()
{
    if(ui->checkBox_56->isChecked())
        {
             QMessageBox::information(this,"Answer","Yes!! You are Correct");
        }
        else if(ui->checkBox_55->isChecked())
        {
             QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else if(ui->checkBox_57->isChecked())
        {
          QMessageBox::information(this,"Answer","NO!! You are wrong");
        }
        else
        {
             QMessageBox::information(this,"Answer","Please select one checkbox");
        }
}
