#pragma once
#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include "Header.h"

using namespace std;

class Pelicula{
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
class Horario{
private:
	string fecha;
	int horaInicial;
	int segundaFuncion;
	int horaFinal;


public:
	Horario(string, int, int, int);
	Horario();

	void setFecha(string);
	string getFecha();
	void setHoraInicial(int);
	int getHoraInicial();
	void setSegundaFuncion(int);
	int getSegundaFuncion();
	void setHoraFinal(int);
	int getHoraFinal();
	void toStringHoras();
	void horas();
	void toString();

};
class Sala{
private:

	int rows, seating;
	int seats[15][15];
	int numeroSala;
	int precio;

public:
	Sala(int, int);
	Sala();
	void setNumeroSala(int);
	int getNumeroSala();
	void setPrecio(int);
	int getPrecio();
	void showArmchairs();
	bool reserveSeat(int, int);
	void seatsReserved();
	int asientos(char);
	void toString();

};
class Cine {
private:
	

public:
	void reserva();
	void mantenimiento();
	void archivo();
	void venta();
};
class Factura {



public:

	void compra(Pelicula, Sala, Horario);
	void factu();
	bool code(int);

	/*int elegirPeli();
	int elegirSala();
	int elegirHora();
	void factu();
	void mostrar();*/

};

class Usuario {
private:
	int codigoCompra;
public:
	void setCodigoCompra(int);
	int getCodigoCompra();
	int generador();
	int tarjeta(int);
};