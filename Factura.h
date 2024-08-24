#pragma once
#ifndef FACTURA_H
#define FACTURA_H
#include "Pelicula.h"
#include "Usuario.h"
#include "Sala.h"

class Factura {
public:

    void compra(Pelicula, Sala, Usuario);

    bool code(int, Usuario);

};

#endif