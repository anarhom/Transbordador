#ifndef INICIARSESION_H
#define INICIARSESION_H

#include <QDialog>

namespace Ui {
class iniciarSesion;
}

class iniciarSesion : public QDialog
{
    Q_OBJECT

public:
    explicit iniciarSesion(QWidget *parent = nullptr);
    ~iniciarSesion();

private slots:
    void on_buttonBox_accepted();

    void on_comprueba_clicked();

private:
    Ui::iniciarSesion *ui;
};

#endif // INICIARSESION_H
