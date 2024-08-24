#include "Pelicula.h"

Pelicula::Pelicula(string _nombre, int _anio, int _duracion, string _pais, float _resenia) {
    nombre = _nombre;
    anio = _anio;
    duracion = _duracion;
    pais = _pais;
    resenia = _resenia;
}

void Pelicula::setNombre(string _nombre) {
    nombre = _nombre;
}

string Pelicula::getNombre() {
    return nombre;
}

void Pelicula::setAnio(int _anio) {
    anio = _anio;
}

int Pelicula::getAnio() {
    return anio;
}

void Pelicula::setDuracion(int _duracion) {
    duracion = _duracion;
}

int Pelicula::getDuracion() {
    return duracion;
}

void Pelicula::setPais(string _pais) {
    pais = _pais;
}

string Pelicula::getPais() {
    return pais;
}

void Pelicula::setResenia(float _resenia) {
    resenia = _resenia;
}

float Pelicula::getResenia() {
    return resenia;
}

void Pelicula::toString() {
    cout << "////////////////////////////////////////////////////////" << endl;
    cout << "Nombre de la pelicula: " << nombre << endl;
    cout << "Anio de lanzamiento: " << anio << endl;
    cout << "Duracion(MIN): " << duracion << " minutos" << endl;
    cout << "Pais de origen: " << pais << endl;
    cout << "Resenia obtenida: " << resenia << endl;
    cout << "////////////////////////////////////////////////////////" << endl;
}