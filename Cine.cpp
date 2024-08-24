#include "Cine.h"

using namespace std;

Usuario u1;
Factura f1;
Sala s5, s6, s7, s8, s9, s10, s11, s12, s13;
int indiceP = 0, indiceS = 0;

int menu1;

void Cine::reserva(Pelicula peliculas[], Sala salas[], Horario horarios[]) {
	int menu2;

	cout << "*******************************************************" << endl;
	cout << "BIENVENIDO A LA COMPRA DE VOLETOS" << endl;
	cout << "Elija una  pelicula de las siguientes:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "- " << peliculas[i].getNombre() << endl;
	}
	cin >> menu2;

	switch (menu2) {//4
	case 1:

		indiceP = 1;
		cout << "Elija la sala:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "- " << salas[i].getNumeroSala() << endl;
		}
		cin >> menu2;//5

		switch (menu2) {

		case 1:
			indiceS = 1;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//8
			s5.showArmchairs();


			char reserve;
			cout << "Desea reservar asientos Y/N" << endl;
			cin >> reserve;

			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s5.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s5.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}
			else if (reserve == 'N' || reserve == 'n') {
				cout << "Regresando al menu...." << endl;
			}

			break;

		case 2:
			indiceS = 2;

			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//8
			s6.showArmchairs();


			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;

			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s6.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s6.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}

			break;
		case 3:
			indiceS = 3;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//8
			s7.showArmchairs();


			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;

			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s7.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s7.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}

			break;
		}
		break;






	case 2:

		indiceP = 2;
		cout << "Elija la sala:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "- " << salas[i].getNumeroSala() << endl;
		}
		cin >> menu2;//6

		switch (menu2) {//6
		case 1:
			indiceS = 1;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//6
			s8.showArmchairs();

			char reserve;
			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s8.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s8.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}


			break;
		case 2:
			indiceS = 2;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//6
			s9.showArmchairs();


			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s9.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s9.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}

			break;
		case 3:
			indiceS = 3;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//6
			s10.showArmchairs();


			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s10.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s10.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}

			break;
		}
		break;



	case 3:
		indiceP = 3;
		cout << "Elija la sala:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "- " << salas[i].getNumeroSala() << endl;
		}
		cin >> menu2;//7
		switch (menu2) {//7
		case 1:
			indiceS = 1;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//7
			s11.showArmchairs();

			char reserve;
			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s11.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s11.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}

			break;
		case 2:
			indiceS = 2;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//7
			s12.showArmchairs();


			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s12.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s12.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}


			}

			break;
		case 3:
			indiceS = 3;
			cout << "Elija el horario que desea:" << endl;

			cin >> menu2;//7
			s13.showArmchairs();


			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {

				u1.generador();

				s13.seatsReserved();

				cout << endl;
				cout << "El asiento reservado era correcto? Y/N";
				cin >> reserve;
				if (reserve == 'Y' || reserve == 'y') {

					f1.compra(peliculas[indiceP - 1], salas[indiceS - 1], u1);
				}
				else if (reserve == 'N' || reserve == 'n') {
					s13.vaciar();
					cout << "Lamentamos su ineptitud, vuelva a ingresar" << endl;
				}

			}

			break;
		}
		break;
	}
}

void Cine::mantenimiento(Pelicula peliculas[], Horario horarios[], Sala salas[]) {
	int menu1;

	cout << "1-Peliculas" << endl;
	cout << "2-Salas" << endl;
	cout << "3-Horarios" << endl;
	cout << "Elija opciones entre 1-3" << endl;
	cin >> menu1;//3

	switch (menu1) {//3
	case 1:

		for (int i = 0; i < 3; i++) {
			peliculas[i].toString();
		}

		break;

	case 2:

		cout << "Las salas disponibles son las siguientes: " << endl;
		for (int i = 0; i < 3; i++) {
			salas[i].toString();
		}
		break;

	case 3:
		for (int i = 0; i < 3; i++) {
			horarios[i].toString(peliculas, horarios);
		}
		break;
	}
}

void Cine::archivo() {

	cout << "El estudiante encargado de crear el sistema de voleteria se llama Kendall Ortiz, cursa ING en sistemas en la UNA" << endl;

}

void Cine::venta(Factura f1, Usuario u1) {

	int codigo, tarjeta, cedula;
	cout << "Le recordamos al usuario que primero debe reservar asientos" << endl;
	cout << "Ingrese su cedula: "; cin >> cedula;
	cout << "Ingrese el numero de tarjeta: "; cin >> tarjeta;
	cout << "Ingrese el codigo de compra: "; cin >> codigo;
	if (u1.cedula(cedula) == 9) {
		if (u1.tarjeta(tarjeta) == 8) {
			if (f1.code(codigo, u1)) {
				cout << "Disfrute su pelicula" << endl;
			}
			else {
				cout << "Codigo incorrecto o aun no ha reservado campos..." << endl;
			}
		}
		else {
			cout << "El numero de tarjeta es incorrecto..." << endl;
		}
	}
	else {
		cout << "El numero de cedula es incorrecto..." << endl;
	}
}

int Cine::menu(Pelicula peliculas[], Sala salas[], Horario horarios[]) {


	do {
		cout << "************************************************" << endl;
		cout << "1-Arhivo" << endl;
		cout << "2-Mantenimiento" << endl;
		cout << "3-Reserva" << endl;
		cout << "4-Venta" << endl;
		cout << "Elija opciones entre 1-4" << endl;
		cin >> menu1;
		cout << "************************************************" << endl;
		system("cls");
		switch (menu1)
		{

		case 1:
			int menu3;

			cout << "1-Acerca de" << endl;
			cout << "2-Salir del sistema" << endl;
			cout << "Elija opciones entre 1-2" << endl;
			cin >> menu3;
			if (menu3 == 1) {
				archivo();
			}
			else if (menu3 == 2) {
				cout << "Muchas gracias por su compra, adios" << endl;
				return 0;
				break;
			}

			break;


		case 2:

			mantenimiento(peliculas, horarios, salas);
			break;


		case 3:

			reserva(peliculas, salas, horarios);
			break;


		case 4:
			venta(f1, u1);

			break;
		}

	} while (menu1 != 0);

}
