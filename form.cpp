#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);


    ui->l_username_2->setPlaceholderText("Wpisz nazwę użytkownika");
   ui->l_passwd_2->setPlaceholderText("Wpisz hasło");
   ui->l_r_passwd_2->setPlaceholderText("Wpisz hasło ponownie");
   ui->l_name_2->setPlaceholderText("Wpisz imie");
   ui->l_last_name_2->setPlaceholderText("Wpisz nazwisko");
   ui->l_nr_tel_2->setPlaceholderText("Wpisz nr telefonu");














}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{

}


void Form::on_pushButton_2_clicked()
{













}

