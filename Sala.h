#pragma once
#ifndef SALA_H
#define SALA_H

#include <iostream>
#include "Pelicula.h"
#include "Usuario.h"

using namespace std;



class Sala {
private:
    int rows, seating;
    int auxRows, auxSeating;
    int seats[15][15];
    int numeroSala;
    int precio;


public:
    Sala(int, int);
    Sala();

    void setNumeroSala(int);
    int getNumeroSala();

    void setPrecio(int);
    int getPrecio();

    void showArmchairs();
    bool reserveSeat(int, int);
    int asientos(char);
    void toString();
    void seatsReserved();
    void vaciar();

};



#endif