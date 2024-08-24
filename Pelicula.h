#pragma once
#ifndef PELICULA_H
#define PELICULA_H



#include <iostream>
using namespace std;

class Pelicula {
private:
    string nombre;
    int anio;
    int duracion;
    string pais;
    float resenia;

public:
    Pelicula(string, int, int, string, float);

    void setNombre(string _nombre);
    string getNombre();

    void setAnio(int _anio);
    int getAnio();

    void setDuracion(int _duracion);
    int getDuracion();

    void setPais(string _pais);
    string getPais();

    void setResenia(float _resenia);
    float getResenia();

    void toString();
};


#endif