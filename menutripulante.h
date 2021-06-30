#ifndef MENUTRIPULANTE_H
#define MENUTRIPULANTE_H

#include <QDialog>

namespace Ui {
class menuTripulante;
}

class menuTripulante : public QDialog
{
    Q_OBJECT

public:
    explicit menuTripulante(QWidget *parent = nullptr);
    ~menuTripulante();

private slots:
    void on_botonPiloto_clicked();

    void on_commandLinkButton_clicked();

    void on_botonCopiloto_clicked();

    void on_botonPasajero_clicked();

private:
    Ui::menuTripulante *ui;
};

#endif // MENUTRIPULANTE_H
