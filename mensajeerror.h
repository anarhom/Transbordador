#ifndef MENSAJEERROR_H
#define MENSAJEERROR_H

#include <QDialog>

namespace Ui {
class mensajeError;
}

class mensajeError : public QDialog
{
    Q_OBJECT

public:
    explicit mensajeError(QWidget *parent = nullptr);
    ~mensajeError();

private:
    Ui::mensajeError *ui;
};

#endif // MENSAJEERROR_H
