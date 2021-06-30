#include "tripulacion.h"

tripulacion::tripulacion()
{

}
tripulacion::~tripulacion(){

}

void tripulacion::insertarTripulante(string _puesto,string user, string password){
    usuario=user;
    contrasenna=password;
    puesto=_puesto;
    if (puesto=="piloto")
        listaPilotos.insert(make_pair(usuario,contrasenna));
    if (puesto=="copiloto")
        listaCopilotos.insert(make_pair(usuario,contrasenna));
    if (puesto=="tripulante")
        listaTripulante.insert(make_pair(usuario,contrasenna));
}

int tripulacion::buscarTripulante(string user, string password){

    usuario=user;
    contrasenna=password;
    string sPassword;
    int esPiloto=0, esCopiloto=0, count1=0, count2=0;
    count1=listaPilotos.count(usuario);
    count2=listaCopilotos.count(usuario);

    if (count2 != 0) { //Si está la palabra q se busca
        sPassword=listaCopilotos.find(usuario)->second;
        if (sPassword==contrasenna)
            esCopiloto=2;
        return esCopiloto;
    }
    else if (count1 != 0){

        sPassword=listaPilotos.find(usuario)->second;
        if (sPassword==contrasenna)
            esPiloto=1;
        return esPiloto;
    }
    else
        return 3;
}

