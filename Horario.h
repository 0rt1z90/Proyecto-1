#pragma once
#ifndef HORARIO_H
#define HORARIO_H

#include <iostream>
#include "Pelicula.h"
using namespace std;

class Horario {
private:
    string fecha;
    int primeraFuncion;
    int segundaFuncion;
    int funcionFinal;
    int hora;
    int minutos;
    string periodo;
public:
    
    Horario();
    Horario(int, int);

    void mostrarHorario();

    int getHora();
    int getMinutos();

    void horas(Horario[]);
    void toString(Pelicula[], Horario[], Horario[], Horario[]);
};

#endif