#include "nuevotripulante.h"
#include "ui_nuevotripulante.h"
#include "mainwindow.h"
#include "QString"
#include "tripulacion.h"

extern int p;
string sPuesto;

tripulacion persona;
nuevoTripulante::nuevoTripulante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevoTripulante)
{
    ui->setupUi(this);

}

nuevoTripulante::~nuevoTripulante()
{
    delete ui;
}

void nuevoTripulante::on_pushButton_clicked()
{
    QString qsUser=ui->user->text();
    QString qsPassword=ui->password->text();
    string sUser=qsUser.toStdString();
    string sPassword=qsPassword.toStdString();

    if (p==1){
        sPuesto="piloto";
        persona.insertarTripulante(sPuesto,sUser,sPassword);

    }
    else if (p==2){
        sPuesto="copiloto";
        persona.insertarTripulante(sPuesto,sUser,sPassword);
    }
    else if (p==3){
        sPuesto="tripulante";
        persona.insertarTripulante(sPuesto,sUser,sPassword);

    }
    ui->user->clear();
    ui->password->clear();

}
