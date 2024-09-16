#include "Factura.h"
#include "Colores.h"




void Factura::compra(Pelicula pelicula, Sala sala, Usuario u1) {
    cout << RED << endl;
    cout << "------------+Factura de la compra+---------------" << endl;
    cout << GREEN << "Pelicula: " << pelicula.getNombre() << endl;
    cout << "Sala: " << sala.getNumeroSala() << endl;
    cout << "Debe pagar un total de " << sala.getPrecio() << " colones" << endl;
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