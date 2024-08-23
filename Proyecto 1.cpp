#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include "Header.h"

int menu;

using namespace std;

int main() {
	Sala s1;
	Cine c1;
	
	do {
		cout << "************************************************" << endl;
		cout << "1-Arch111ivo" << endl;
		cout << "2-Mantenimiento" << endl;
		cout << "3-Reserva" << endl;
		cout << "4-Venta" << endl;
		cout << "Elija opciones entre 1-4" << endl;
		cin >> menu;
		cout << "************************************************" << endl;
		system("cls");
		switch (menu)
		{

		case 1:
			int menu3;

			cout << "1-Acerca de" << endl;
			cout << "2-Salir del sistema" << endl;
			cout << "Elija opciones entre 1-2" << endl;
			cin >> menu3;
			if (menu3 == 1) {
				c1.archivo();
			}
			else if (menu3 == 2) {
				cout << "Muchas gracias por su compra, adios" << endl;
				return 0;
			}

			break;


		case 2:

			c1.mantenimiento();

			break;


		case 3:
			c1.reserva();
			break;
				

		case 4:
			c1.venta();
			
			break;
		}

	} while (menu != 0);
}