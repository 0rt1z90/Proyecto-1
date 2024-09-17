#pragma once
#ifndef FACTURA_H
#define FACTURA_H
#include "Pelicula.h"
#include "Usuario.h"
#include "Colores.h"
#include "Sala.h"
#include "Horario.h"

class Factura {
public:

    void compra(Pelicula, Usuario, Sala ,Horario);

    bool code(int, Usuario);

};

#endif