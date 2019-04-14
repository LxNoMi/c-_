#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->passwdEdit->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    if(ui->userEdit->text()=="ht"&&ui->passwdEdit->text()=="123456")
    {
        QMessageBox::information(this,"登陆提示:","登陆成功!");
        return ;
    }
    else
    {
        QMessageBox::information(this,"登陆提示:","登陆失败!");
        return;
    }
}

void MainWindow::on_passwdEdit_returnPressed()
{
    this->on_loginButton_clicked();
}
