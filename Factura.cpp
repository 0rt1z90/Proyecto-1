#include "Factura.h"


const string RESET = "\033[0m";
const string BOLD = "\033[1m";
const string UNDERLINE = "\033[4m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string MAGENTA = "\033[35m";
const string CYAN = "\033[36m";


void Factura::compra(Pelicula pelicula, Sala sala, Usuario u1) {
    cout << RED << endl;
    cout << "------------+Factura de la compra+---------------" << endl;
    cout << "Factura:" << endl;
    cout << GREEN << "Pelicula: " << pelicula.getNombre() << RED << endl;
    cout << "Sala: " << sala.getNumeroSala() << endl;
    cout << BLUE << "Codigo: " << u1.getCodigoCompra() << endl;
    cout << RED << "------------+Factura de la compra+---------------" << RESET << endl;
}


bool Factura::code(int _codigo, Usuario u1) {
    if (_codigo == u1.getCodigoCompra()) {
        return true;
    }
    else {
        return false;
    }
}