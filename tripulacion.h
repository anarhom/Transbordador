#ifndef TRIPULACION_H
#define TRIPULACION_H
#include "mainwindow.h"
#include <map>


class tripulacion
{
    public:
        string usuario;
        string contrasenna;
        string puesto;
        map<string,string> listaPilotos;
        map<string,string> listaCopilotos;
        map<string,string> listaTripulante;
    public:
        tripulacion();
        ~tripulacion();
        void insertarTripulante(string,string,string);
        int buscarTripulante(string, string);
};

#endif // TRIPULACION_H
