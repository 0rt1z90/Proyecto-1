#include "Sala.h"
#include <cstdlib>
#include <ctime>


Sala::Sala(int _numeroSala, int _precio) {

    numeroSala = _numeroSala;
    precio = _precio;
}

Sala::Sala() {

}

void Sala::setNumeroSala(int _numeroSala) {
    numeroSala = _numeroSala;
}

int Sala::getNumeroSala() {
    return numeroSala;
}

void Sala::setPrecio(int _precio) {
    precio = _precio;
}

int Sala::getPrecio() {
    return precio;
}

void Sala::toString() {
    cout << "------------------------------------------------------" << endl;
    cout << "Sala " << numeroSala << " Precio: " << precio << endl;
    cout << "------------------------------------------------------" << endl;
}

void Sala::mostrarSala(Sala salas[]) {

    cout << MAGENTA << "Elija la sala:" << RESET << endl;
    for (int i = 0; i < 2; i++) {
        cout << i + 1 << "- " << salas[i].getNumeroSala() << endl;
    }
}