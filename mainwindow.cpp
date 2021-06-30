#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menutripulante.h"
#include "nuevotripulante.h"
#include "tripulacion.h"
#include "mensajeerror.h"
#include "iniciarsesion.h"
#include "menuprincipal.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    menuTripulante d;
    d.exec();
}


void MainWindow::on_identificarse_clicked()
{
    iniciarSesion d;
    d.exec();
}
