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
		cout << "1-Archivo" << endl;
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
			
			
			break;


		case 2:

			c1.mantenimiento();

			break;


		case 3:
			c1.reserva();
			break;
				

		case 4:
		
			
			break;
		}

	} while (menu != 0);
}