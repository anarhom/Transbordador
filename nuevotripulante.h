#ifndef NUEVOTRIPULANTE_H
#define NUEVOTRIPULANTE_H

#include <QDialog>

namespace Ui {
class nuevoTripulante;
}

class nuevoTripulante : public QDialog
{
    Q_OBJECT

public:
    explicit nuevoTripulante(QWidget *parent = nullptr);
    ~nuevoTripulante();

private slots:
    void on_pushButton_clicked();

private:
    Ui::nuevoTripulante *ui;
};

#endif // NUEVOTRIPULANTE_H
