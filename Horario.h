#pragma once
#ifndef HORARIO_H
#define HORARIO_H


#include <iostream>
#include "Pelicula.h"
using namespace std;

class Horario {
private:
    string fecha;
    int horaInicial;
    int segundaFuncion;
    int horaFinal;

public:
    Horario(string, int, int, int);
    Horario();

    void setFecha(string);
    string getFecha();

    void setHoraInicial(int);
    int getHoraInicial();

    void setSegundaFuncion(int);
    int getSegundaFuncion();

    void setHoraFinal(int);
    int getHoraFinal();

    void horas();
    void toString(Pelicula[], Horario[], int);
};

#endif