#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include "Header.h"

using namespace std;


int main() {
	Sala c1;
	Pelicula p1("Ben_10", 2009, 70, "Estados_Unidos", 8.9);
	Pelicula p2("Dragon_Ball", 2019, 90, "Japon", 9.5);
	Pelicula p3("Naruto", 2015, 86, "Japon", 7.7);

	int menu;

	do {
		cout << "************************************************" << endl;
		cout << "1-Archivo" << endl;
		cout << "2-Mantenimiento" << endl;
		cout << "3-Reserva" << endl;
		cout << "4-Venta" << endl;
		cout << "Elija opciones entre 1-4" << endl;
		cin >> menu;
		cout << "************************************************" << endl;

		switch (menu)
		{

		case 1:
			int menu2;
			cout << "1-Acerca de" << endl;
			cout << "2-Salir del sistema" << endl;
			cout << "Elija opciones entre 1-2" << endl;
			cin >> menu2;

			switch (menu2) {
			case 1:
				cout << "El estudiante encargado de crear el sistema de voleteria se llama Kendall Ortiz, cursa ING en sistemas en la UNA" << endl;
				break;

			case 2:
				cout << endl;
				cout << "Muchas gracias por su compra, adios" << endl;
				return 0;

				break;
			}
			break;


		case 2:

			int menu3;

			cout << "1-Peliculas" << endl;
			cout << "2-Salas" << endl;
			cout << "3-Horarios" << endl;
			cout << "Elija opciones entre 1-3" << endl;
			cin >> menu3;

			switch (menu3) {
			case 1:
				p1.toString();
				p2.toString();
				p3.toString();
				//c1.showArmchairs();
				break;

			case 2:
				break;
			case 3:
				break;
			}

			break;

		case 3:
			//c1.elegirPeli();
			//c1.factu();
			//c1.seatsReserved();
				break;
				
		case 4:
			//c1.mostrar();
			break;
			}
		} while (menu != 0);
}