#pragma once
#ifndef SALA_H
#define SALA_H

#include <iostream>
#include"Colores.h"

using namespace std;

class Sala {
private:
    
    int numeroSala;
    int precio;


public:
    Sala(int, int);
    Sala();
  
    void setNumeroSala(int);
    int getNumeroSala();

    void setPrecio(int);
    int getPrecio();

    void toString();
    void mostrarSala(Sala[]);
    
};

#endif