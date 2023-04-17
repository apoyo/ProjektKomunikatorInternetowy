#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << QSqlDatabase::drivers();

}

MainWindow::~MainWindow()
{
    delete ui;



}


void MainWindow::on_DbConnect_clicked()
{
    QSqlDatabase db= QSqlDatabase::addDatabase("QMYSQL");
               db.setHostName("127.0.0.1");
                db.setUserName("root");
                db.setPassword("");
                db.setDatabaseName("mysql");


                if(db.open()){




                   QMessageBox::information(this,"Connection","Database Connected Successfully");
               }
               else{


                    QMessageBox::information(this,"Not Connected","Database Connected UnSuccessfully");


               }
}

