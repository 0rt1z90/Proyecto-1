#include "Usuario.h"
#include <cstdlib>
#include <time.h>

void Usuario::setCodigoCompra(int _codigoCompra) {
	codigoCompra = _codigoCompra;
}

int Usuario::getCodigoCompra() {
	return codigoCompra;
}

int Usuario::generador() {

	codigoCompra = rand() % 10000 + 1;
	return codigoCompra;
}

int Usuario::tarjeta(int tarje) {
	int num_Cifra = 1;
	while (tarje >= 10) {
		tarje /= 10;
		num_Cifra++;
	}
	return num_Cifra;
}

int Usuario::cedula(int _cedula) {
	int num_Cifra = 1;
	while (_cedula >= 10) {
		_cedula /= 10;
		num_Cifra++;
	}
	return num_Cifra;


}