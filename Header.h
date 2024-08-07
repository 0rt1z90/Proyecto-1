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
	int fecha;
	int horaInicial;
	int horaFinal;

public:
	Horario(int, int, int);


	void setFecha(int);
	int getFecha();
	void setHoraInicial(int);
	int getHoraInicial();
	void setHoraFinal(int);
	int getHoraFinal();

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

};
class cine {

private:

public:

	/*int elegirPeli();
	int elegirSala();
	int elegirHora();
	void factu();
	void mostrar();*/

};
