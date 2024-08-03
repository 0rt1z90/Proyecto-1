#include "Header.h"

cine::cine(){
	 rows = 10;
	 seating = 10;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < seating; j++) {

			seats[i][j] = 0 + rand() % (1 + 1 - 0);
		}
	}
}

void cine::showArmchairs(){
    srand(time(NULL));

	/*for (int i = 0; i < rows; i++) {
		for (int j = 0; j < seating; j++) {

			seats[i][j] = ;
		}
	}*/

	cout << "****************************************************************************************" << endl;
	cout << "---------PANTALLA-----------";
	cout << endl << endl;
	for (int i = 0; i < rows; i++) {

		cout << char(65 + i) << "-  ";

		for (int j = 0; j < seating; j++) {

			cout << seats[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "    1 " << "2 " << "3 " << "4 " << "5 " << "6 " << "7 " << "8 " << "9 " << "10 ";
	cout << endl;
	cout << "****************************************************************************************" << endl;
}

bool cine::reserveSeat(int rowsFake, int seatingFake){
	
		
		if (seats[rowsFake][seatingFake] == 0) {
			seats[rowsFake][seatingFake] = 1;
			return true;
		}
		else {
			
			return false;
		}
}

void cine::seatsReserved() {

	char reserve;
	cout << "Desea reservar asientos? Y/N" << endl;
	cin >> reserve;

	if (reserve == 'Y' || reserve == 'y') {

		int rowsFake = 0, seatingFake = 0;
		cout << "Ingrese la fila: "; cin >> rowsFake;
		cout << endl;
		cout << "Ingrese el asiento: "; cin >> seatingFake;
		cout << endl;

		if (reserveSeat(rowsFake, seatingFake)) {

		}
		else {
			cout << "Asiento reservado" << endl << endl;
		}

	}
	else if (reserve == 'N' || reserve == 'n') {
		cout << "Regresando al menu...." << endl << endl;

	}


}
