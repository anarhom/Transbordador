#include "iniciarsesion.h"
#include "ui_iniciarsesion.h"
#include "menutripulante.h"
#include "nuevotripulante.h"
#include "tripulacion.h"
#include "mensajeerror.h"
#include "menuprincipal.h"

extern tripulacion persona;
int indicador;
int cargo;

iniciarSesion::iniciarSesion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::iniciarSesion)
{
    ui->setupUi(this);
}


iniciarSesion::~iniciarSesion()
{
    delete ui;
}

void iniciarSesion::on_buttonBox_accepted()
{
    close();
}

void iniciarSesion::on_comprueba_clicked()
{
    QString qsUser=ui->user->text();
    QString qsPassword=ui->password->text();
    string sUser=qsUser.toStdString();
    string sPassword=qsPassword.toStdString();

    int cargo=persona.buscarTripulante(sUser,sPassword);
    if (cargo==1){
        indicador=1;
        close();
        sleep(3);
        menuPrincipal f;
        f.exec();
    }
    else if (cargo==2){
        indicador=2;
        close();
        sleep(3);
        menuPrincipal f;
        f.exec();
    }
    else
    {
        mensajeError d;
        d.exec();
    }


}
