#include "messageprep.h"
#include "form2.h"
#include "qsqlquerymodel.h"
#include "ui_messageprep.h"
void messageprep::UpdateField(QString text)
{
    ui->label_3->clear();
    ui->label_3->setText(text);

    ui->label_4->clear();


    QSqlQueryModel *model = new QSqlQueryModel;
    QString active="NIE";
    QString nazwa;


    nazwa = ui->label_3->text();

    ui->label_4->setText(nazwa);

    model->setQuery("SELECT nazwa  FROM users where active= '"+active+"' and NOT nazwa='"+nazwa+"' ");



    // ui->label_3->setText(nazwa);
    ui->comboBox->setModel(model);

}
messageprep::messageprep(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::messageprep)
{
    ui->setupUi(this);


}


messageprep::~messageprep()
{
    delete ui;
}

void messageprep::on_pushButton_clicked()
{
    QString DoKogo;
    DoKogo = ui->comboBox->currentText();

    QAbstractSocket *poloczenie;
       poloczenie = new QAbstractSocket(QAbstractSocket::TcpSocket,this);

    //poloczenie->connectToHost("127.0.0.1","8030",,);



   // QTcpSocket *poloczenie;
    // poloczenie = new QTcpSocket(this);










}

