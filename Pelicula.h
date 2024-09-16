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
    string resenia;

public:
    Pelicula(string, int, int, string, string);

    void setNombre(string _nombre);
    string getNombre();

    void setAnio(int _anio);
    int getAnio();

    void setDuracion(int _duracion);
    int getDuracion();

    void setPais(string _pais);
    string getPais();

    void setResenia(string _resenia);
    string getResenia();

    void toString();
};


#endif