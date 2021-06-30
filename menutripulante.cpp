#include "menutripulante.h"
#include "ui_menutripulante.h"
#include "nuevotripulante.h"
#include "mainwindow.h"
#include "tripulacion.h"

int p;

extern tripulacion persona;
menuTripulante::menuTripulante(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuTripulante)
{
    ui->setupUi(this);
}

menuTripulante::~menuTripulante()
{
    delete ui;
}

void menuTripulante::on_botonPiloto_clicked()
{
    p=1;
    nuevoTripulante d;
    d.exec();


}

void menuTripulante::on_commandLinkButton_clicked()
{
    close();
}

void menuTripulante::on_botonCopiloto_clicked()
{
    p=2;
    nuevoTripulante d;
    d.exec();
}

void menuTripulante::on_botonPasajero_clicked()
{
    p=3;
    nuevoTripulante d;
    d.exec();
}
