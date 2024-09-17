#pragma once
#ifndef CINE_H
#define CINE_H

#include "Pelicula.h"
#include "Sala.h"
#include "Horario.h"
#include "Usuario.h"
#include "Factura.h"
#include "Asiento.h"
#include "Colores.h"
#include <time.h>

class Cine {

public:

    void reserva(Pelicula[], Sala[], Horario[], Horario[], Horario[]);
    void mantenimiento(Pelicula[], Horario[], Horario[], Horario[], Sala[]);
    void archivo();
    void venta(Factura, Usuario);
    int menu(Pelicula peliculas[], Sala salas[], Horario horarios[], Horario[], Horario[] );
};

#endif