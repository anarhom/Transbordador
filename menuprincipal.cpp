#include "menuprincipal.h"
#include "ui_menuprincipal.h"
#include "menutripulante.h"
#include "nuevotripulante.h"
#include "tripulacion.h"
#include "mensajeerror.h"
#include "iniciarsesion.h"

extern int indicador;
menuPrincipal::menuPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuPrincipal)
{
    ui->setupUi(this);
}

menuPrincipal::~menuPrincipal()
{
    delete ui;
}

void menuPrincipal::on_pushButton_clicked()
{
    if (indicador==1)
        ui->label->setText("Despegando");
    else if (indicador==2)
        ui->label->setText("Despegando por copi");
}

void menuPrincipal::on_aterrizar_clicked()
{

}
