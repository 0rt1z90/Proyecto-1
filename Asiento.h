#pragma once
#ifndef ASIENTO_H
#define ASIENTO_H
#include <cstdlib>
#include <ctime>
#include "Factura.h"
#include "Horario.h"
#include "Sala.h"

using namespace std;

class Asiento {

private:
    int rows, seating;
    int auxRows, auxSeating;
    int seats[6][6];

public:
    Asiento();

    void showArmchairs();

    bool reserveSeat(int _row, int _seating);
   void vaciar();

   void seatsReserved(Factura , Asiento &s, Usuario , Pelicula [], Sala [],Horario[], int, int,int);

   int asientos(char _row);

};

#endif