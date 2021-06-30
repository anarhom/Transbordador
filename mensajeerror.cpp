#include "mensajeerror.h"
#include "ui_mensajeerror.h"
#include "tripulacion.h"

extern int cargo;

mensajeError::mensajeError(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mensajeError)
{
    ui->setupUi(this);

}

mensajeError::~mensajeError()
{
    delete ui;
}
