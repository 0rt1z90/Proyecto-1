#include "Cine.h"

using namespace std;


Horario mostrarH;
Sala s4;
Usuario u1;
Factura f1;
Asiento  a1, a2, a3, a4, a5, a6, a7, a8, a9 ;

int indiceP = 0, indiceS = 0, indiceH = 0;

int menu1;

void Cine::archivo() {

	cout << "El estudiante encargado de crear el sistema de voleteria se llama Kendall Ortiz, cursa ING en sistemas en la UNA" << endl;
	cout << RED << "Por favor no contratarlo mas, programa de la m*erda." << RESET << endl;

}

void Cine::mantenimiento(Pelicula peliculas[], Horario horariosBen[], Horario horariosDb[], Horario horariosNa[], Sala salas[]) {
	int menu1;

	cout << "1-Peliculas" << endl;
	cout << "2-Salas" << endl;
	cout << "3-Horarios" << endl;
	cout << BLUE << "Elija opciones entre 1-3" << RESET << endl;
	cin >> menu1;

	switch (menu1) {
	case 1:

		for (int i = 0; i < 3; i++) {
			peliculas[i].toString();
		}

		break;

	case 2:

		cout << BLUE << "Las salas disponibles son las siguientes: " << RESET << endl;
		for (int i = 0; i < 2; i++) {
			salas[i].toString();
		}
		break;

	case 3:
		mostrarH.toString(peliculas, horariosBen, horariosDb, horariosNa);
		break;
	}
	system("pause");
	system("cls");
}

void Cine::reserva(Pelicula peliculas[], Sala salas[], Horario horariosBen[],Horario horariosDb[],Horario horariosNa[]) {
	int menu2;

	time_t* fechaHora = new time_t;//crea una variable tipo time_t que se puede sumar, restar, comparar
	_time64(fechaHora);
	tm* horalocal = new tm;//crea una variable tipo tm para obtener cada dato por aparte y desplegar en pantalla
	localtime_s(horalocal, fechaHora);//esta función convierte de time_t a tm
	//cout << horalocal->tm_hour << ":" << horalocal->tm_min << ":" << horalocal->tm_sec << endl;

	
	cout << "*******************************************************" << endl;
	cout << MAGENTA << "BIENVENIDO A LA COMPRA DE VOLETOS" << endl;
	cout << "Elija una  pelicula de las siguientes:" << RESET << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "- " << peliculas[i].getNombre() << endl;
	}
	cin >> menu2;

	switch (menu2) {

	case 1:

		indiceP = 1;
		s4.mostrarSala(salas);
		cin >> menu2;
		switch (menu2) {

		case 1:
			indiceS = 1;
			mostrarH.horas(horariosBen);
			cin >> menu2;
			switch (menu2) {

			case 1:
				indiceH = 1;
				if (horariosBen[indiceH - 1].getHora() != horalocal->tm_hour) {

					a1.showArmchairs();
					u1.generador();
					a1.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else if ((horariosBen[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosBen[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a1.showArmchairs();
					u1.generador();
					a1.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;

			case 2:
				indiceH = 2;

				if (horariosBen[indiceH - 1].getHora() != horalocal->tm_hour) {

					a1.showArmchairs();
					u1.generador();
					a1.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else if ((horariosBen[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosBen[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a1.showArmchairs();
					u1.generador();
					a1.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;
			}
			
			break;

		case 2:
			indiceS = 2;
			mostrarH.horas(horariosBen);
			cin >> menu2;
			switch (menu2)
			{
			case 1:
				indiceH = 1;
				if (horariosBen[indiceH - 1].getHora() != horalocal->tm_hour) {

					a2.showArmchairs();
					u1.generador();
					a2.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else if ((horariosBen[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosBen[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a2.showArmchairs();
					u1.generador();
					a2.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}
				
				break;

			case 2:
				indiceH = 2;
				if (horariosBen[indiceH - 1].getHora() != horalocal->tm_hour) {

					a2.showArmchairs();
					u1.generador();
					a2.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else if ((horariosBen[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosBen[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a2.showArmchairs();
					u1.generador();
					a2.seatsReserved(f1, a1, u1, peliculas, salas, horariosBen, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;
			}
			break;
		
		}
	break;


	case 2:
		indiceP = 2;
		s4.mostrarSala(salas);
		cin >> menu2;

		switch (menu2) {
		case 1:

			indiceS = 1;
			mostrarH.horas(horariosDb);
			cin >> menu2;

			switch (menu2)
			{
			case 1:
				indiceH = 1;

				if (horariosDb[indiceH - 1].getHora() != horalocal->tm_hour) {

					a4.showArmchairs();
					u1.generador();
					a4.seatsReserved(f1, a4, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else if ((horariosDb[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosDb[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a4.showArmchairs();
					u1.generador();
					a4.seatsReserved(f1, a4, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;

			case 2:
				indiceH = 2;
				if (horariosDb[indiceH - 1].getHora() != horalocal->tm_hour) {

					a4.showArmchairs();
					u1.generador();
					a4.seatsReserved(f1, a4, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else if ((horariosDb[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosDb[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a4.showArmchairs();
					u1.generador();
					a4.seatsReserved(f1, a4, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}
				break;
			}

			break;

		  case 2:
			indiceS = 2;
			mostrarH.horas(horariosDb);

			cin >> menu2;
			switch (menu2)
			{
			case 1:
				indiceH = 1;
				if (horariosDb[indiceH - 1].getHora() != horalocal->tm_hour) {

					a5.showArmchairs();
					u1.generador();
					a5.seatsReserved(f1, a5, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else if ((horariosDb[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosDb[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a5.showArmchairs();
					u1.generador();
					a5.seatsReserved(f1, a5, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}
				
				break;

			case 2:
				indiceH = 2;
				if (horariosDb[indiceH - 1].getHora() != horalocal->tm_hour) {

					a5.showArmchairs();
					u1.generador();
					a5.seatsReserved(f1, a5, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else if ((horariosDb[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosDb[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

					a5.showArmchairs();
					u1.generador();
					a5.seatsReserved(f1, a5, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;
			}
			break;
		}
	case 3:
			indiceP = 3;
			s4.mostrarSala(salas);
			cin >> menu2;

			switch (menu2) {
			case 1:
				indiceS = 1;
				mostrarH.horas(horariosNa);

				cin >> menu2;
				switch (menu2)
				{
					case 1:
						indiceH = 1;
						if (horariosDb[indiceH - 1].getHora() != horalocal->tm_hour) {

							a7.showArmchairs();
							u1.generador();
							a7.seatsReserved(f1, a7, u1, peliculas, salas, horariosNa, indiceP, indiceS, indiceH);

						}
						else if ((horariosDb[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosDb[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

							a5.showArmchairs();
							u1.generador();
							a5.seatsReserved(f1, a5, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

						}
						else {

							cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

						}
						
					break;

					case 2:
						indiceH = 2;

						if (horariosDb[indiceH - 1].getHora() != horalocal->tm_hour) {

							a7.showArmchairs();
							u1.generador();
							a7.seatsReserved(f1, a7, u1, peliculas, salas, horariosNa, indiceP, indiceS, indiceH);

						}
						else if ((horariosDb[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosDb[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

							a5.showArmchairs();
							u1.generador();
							a5.seatsReserved(f1, a5, u1, peliculas, salas, horariosDb, indiceP, indiceS, indiceH);

						}
						else {

							cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

						}
						break;
				}
				break;
			case 2:
				indiceS = 2;
				mostrarH.horas(horariosNa);

				cin >> menu2;
				switch (menu2)
				{
				case 1:
					indiceH = 1;
					if (horariosDb[indiceH - 1].getHora() != horalocal->tm_hour) {

						a8.showArmchairs();
						u1.generador();
						a8.seatsReserved(f1, a8, u1, peliculas, salas, horariosNa, indiceP, indiceS, indiceH);

					}
					else if ((horariosNa[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosNa[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

						a8.showArmchairs();
						u1.generador();
						a8.seatsReserved(f1, a8, u1, peliculas, salas, horariosNa, indiceP, indiceS, indiceH);

					}
					else {

						cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

					}
					break;

				case 2:
					indiceH = 2;
					if (horariosNa[indiceH - 1].getHora() != horalocal->tm_hour) {

						a8.showArmchairs();
						u1.generador();
						a8.seatsReserved(f1, a8, u1, peliculas, salas, horariosNa, indiceP, indiceS, indiceH);

					}
					else if ((horariosNa[indiceH - 1].getHora() == horalocal->tm_hour) && ((horariosNa[indiceH - 1].getMinutos() - 30) > horalocal->tm_min)) {

						a8.showArmchairs();
						u1.generador();
						a8.seatsReserved(f1, a8, u1, peliculas, salas, horariosNa, indiceP, indiceS, indiceH);

					}
					else {

						cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

					}

					break;
				}

				break;

			}
		break;
	}
}

void Cine::venta(Factura f1, Usuario u1) {

	int codigo, tarjeta, cedula;
	cout << RED << "Le recordamos al usuario que primero debe reservar asientos" << RESET << endl;
	cout << "Ingrese su cedula" << RED << "(9 digitos): " << RESET; cin >> cedula;
	cout << "Ingrese el numero de tarjeta" << RED << "(8 digitos): " << RESET; cin >> tarjeta;
	cout << "Ingrese el codigo de compra: "; cin >> codigo;
	if (u1.cedula(cedula) == 9) {
		if (u1.tarjeta(tarjeta) == 8) {
			if (f1.code(codigo, u1)) {
				cout << CYAN << "Disfrute su pelicula" << RESET << endl;
			}
			else {
				cout << RED << "Codigo incorrecto o aun no ha reservado campos..." << RESET << endl;
			}
		}
		else {
			cout << RED << "El numero de tarjeta es incorrecto..." << RESET << endl;
		}
	}
	else {
		cout << RED << "El numero de cedula es incorrecto..." << RESET << endl;
	}
	system("pause");
	system("cls");
}

int Cine::menu(Pelicula peliculas[], Sala salas[], Horario horariosBen[],Horario horariosDb[],Horario horariosNa[]) {

	do {
		cout << "************************************************" << endl;
		cout << "1-Arhivo" << endl;
		cout << "2-Mantenimiento" << endl;
		cout << "3-Reserva" << endl;
		cout << "4-Venta" << endl;
		cout << GREEN << "Elija opciones entre 1-4" << RESET << endl;
		cin >> menu1;
		cout << "************************************************" << endl;
		system("cls");
		switch (menu1)
		{

		case 1:
			int menu3;

			cout << "1-Acerca de" << endl;
			cout << "2-Salir del sistema" << endl;
			cout << GREEN << "Elija opciones entre 1-2" << RESET << endl;
			cin >> menu3;
			if (menu3 == 1) {
				archivo();
			}
			else if (menu3 == 2) {
				cout  << BLUE << "Muchas gracias por su compra, adios" << RESET << endl;
				return 0;
				break;
			}
			else {
				cout << RED << "No sea pelotudo y elija bien" << RESET << endl;
			}
			system("pause");
			system("cls");
			break;


		case 2:

			mantenimiento(peliculas, horariosBen, horariosBen, horariosBen, salas);
			break;


		case 3:

			reserva(peliculas, salas, horariosBen, horariosDb, horariosNa );
			break;


		case 4:
			venta(f1, u1);

			break;
		}

	} while (menu1 != 0);

}