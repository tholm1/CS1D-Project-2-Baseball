#include "login.h"
#include "ui_login.h"
#include "maintenance.h"
#include "QMessageBox"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_login_pushButton_clicked()
{
    QString username = ui->username_LineEdit->text();
       QString password = ui->password_LineEdit->text();

       if(username == "Admin" && password == "1234")
       {
           QMessageBox::information(this, "Login", "Logged in");
           maintenance maintenance;
           hide();
           maintenance.setModal(true);
           maintenance.exec();

       }
       else
       {
           QMessageBox::warning(this, "Login", "Username or Password is Incorrect");
       }
}
