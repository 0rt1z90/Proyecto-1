#include "Cinema.h"  

using namespace std;

Schedule showSchedules;  
Room room;    
User user;    
Invoice invoice;  
Seat seat1, seat2, seat3, seat4, seat5, seat6;  

int movieIndex = 0; 
int roomIndex = 0;   
int timeIndex = 0;   

int menuOption; 

void Cinema::file() {

	cout << "El estudiante encargado de crear el sistema de voleteria se llama Kendall Ortiz, cursa ING en sistemas en la UNA" << endl;
	cout << RED << "Por favor no contratarlo mas, programa de la m*erda." << RESET << endl;

}

void Cinema::maintenance(Movie movies[], Schedule benSchedules[], Schedule dbSchedules[], Schedule naSchedules[], Room rooms[]) {
	int menu1;

	cout << "1-Peliculas" << endl;
	cout << "2-Salas" << endl;
	cout << "3-Horarios" << endl;
	cout << BLUE << "Elija opciones entre 1-3" << RESET << endl;
	cin >> menu1;

	switch (menu1) {
	case 1:

		for (int i = 0; i < 3; i++) {
			movies[i].toString();
		}

		break;

	case 2:

		cout << BLUE << "Las salas disponibles son las siguientes: " << RESET << endl;
		for (int i = 0; i < 2; i++) {
			rooms[i].toString();
		}
		break;

	case 3:
		showSchedules.toString(movies, benSchedules, dbSchedules, naSchedules);
		break;
	}
	system("pause");
	system("cls");
}

void Cinema::reservation(Movie movies[], Room rooms[], Schedule benSchedules[], Schedule dbSchedules[], Schedule naSchedules[]) {
	int menu2;

	time_t* dateTime = new time_t;
	_time64(dateTime);
	tm* localTime = new tm; 
	localtime_s(localTime, dateTime); 

	cout << "*******************************************************" << endl;
	cout << MAGENTA << "BIENVENIDO A LA COMPRA DE VOLETOS" << endl;
	cout << "Elija una  pelicula de las siguientes:" << RESET << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "- " << movies[i].getName() << endl;
	}
	cin >> menu2;

	switch (menu2) {

	case 1:

		movieIndex = 1;
		room.showRoom(rooms);
		cin >> menu2;
		switch (menu2) {

		case 1:
			roomIndex = 1;
			showSchedules.hours(benSchedules);
			cin >> menu2;
			switch (menu2) {

			case 1:
				timeIndex = 1;

				if ((benSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (benSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((benSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat1.showSeats();
					user.generate();
					seat1.reservedSeats(invoice, seat1, user, movies, rooms, benSchedules, movieIndex, roomIndex, timeIndex);
					
					
				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;

			case 2:
				timeIndex = 2;

				if ((benSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (benSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((benSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat1.showSeats();
					user.generate();
					seat1.reservedSeats(invoice, seat1, user, movies, rooms, benSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;
			}

			break;

		case 2:
			roomIndex = 2;
			showSchedules.hours(benSchedules);
			cin >> menu2;
			switch (menu2)
			{
			case 1:
				timeIndex = 1;

				if ((benSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (benSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((benSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat2.showSeats();
					user.generate();
					seat2.reservedSeats(invoice, seat2, user, movies, rooms, benSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;

			case 2:
				timeIndex = 2;
				if ((benSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (benSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((benSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat2.showSeats();
					user.generate();
					seat2.reservedSeats(invoice, seat2, user, movies, rooms, benSchedules, movieIndex, roomIndex, timeIndex);

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
		movieIndex = 2;
		room.showRoom(rooms);
		cin >> menu2;

		switch (menu2) {
		case 1:

			roomIndex = 1;
			showSchedules.hours(dbSchedules);
			cin >> menu2;

			switch (menu2)
			{
			case 1:
				timeIndex = 1;

				if ((dbSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (dbSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((dbSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat3.showSeats();
					user.generate();
					seat3.reservedSeats(invoice, seat3, user, movies, rooms, dbSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;

			case 2:
				timeIndex = 2;

				if ((dbSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (dbSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((dbSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat3.showSeats();
					user.generate();
					seat3.reservedSeats(invoice, seat3, user, movies, rooms, dbSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}
				break;
			}

			break;

		case 2:
			roomIndex = 2;
			showSchedules.hours(dbSchedules);

			cin >> menu2;
			switch (menu2)
			{
			case 1:
				timeIndex = 1;

				if ((dbSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (dbSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((dbSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat4.showSeats();
					user.generate();
					seat4.reservedSeats(invoice, seat4, user, movies, rooms, dbSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;

			case 2:
				timeIndex = 2;
				if ((dbSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (dbSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((dbSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat4.showSeats();
					user.generate();
					seat4.reservedSeats(invoice, seat4, user, movies, rooms, dbSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;
			}
			break;
		}

	case 3:
		movieIndex = 3;
		room.showRoom(rooms);
		cin >> menu2;

		switch (menu2) {
		case 1:
			roomIndex = 1;
			showSchedules.hours(naSchedules);

			cin >> menu2;
			switch (menu2)
			{
			case 1:
				timeIndex = 1;

				if ((naSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (naSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((naSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat5.showSeats();
					user.generate();
					seat5.reservedSeats(invoice, seat5, user, movies, rooms, naSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}

				break;

			case 2:
				timeIndex = 2;

				if ((naSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (naSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((naSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat5.showSeats();
					user.generate();
					seat5.reservedSeats(invoice, seat5, user, movies, rooms, naSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}
				break;
			}
			break;
		case 2:
			roomIndex = 2;
			showSchedules.hours(naSchedules);

			cin >> menu2;
			switch (menu2)
			{
			case 1:
				timeIndex = 1;
				if ((naSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (naSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((naSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat6.showSeats();
					user.generate();
					seat6.reservedSeats(invoice, seat6, user, movies, rooms, naSchedules, movieIndex, roomIndex, timeIndex);

				}
				else {

					cout << RED << "NO TIENES UN RELOJ PARA VER LA HORA CIEGO??!!" << RESET << endl;

				}
				break;

			case 2:
				timeIndex = 2;

				if ((naSchedules[timeIndex - 1].getHour() != localTime->tm_hour) || (naSchedules[timeIndex - 1].getHour() == localTime->tm_hour) && ((naSchedules[timeIndex - 1].getMinutes() - 30) > localTime->tm_min)) {

					seat6.showSeats();
					user.generate();
					seat6.reservedSeats(invoice, seat6, user, movies, rooms, naSchedules, movieIndex, roomIndex, timeIndex);

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

void Cinema::sale(Invoice f1, User u1) {

	int code, card, id;
	cout << RED << "Le recordamos al usuario que primero debe reservar asientos" << RESET << endl;
	cout << "Ingrese su cedula" << RED << "(9 digitos): " << RESET;
	cin >> id;
	cout << "Ingrese el numero de tarjeta" << RED << "(8 digitos): " << RESET;
	cin >> card;
	cout << "Ingrese el codigo de compra: ";
	cin >> code;

	if (user.card(id) == 9) {//Verifica la cedula
		if (user.card(card) == 8) {//Verifica la tarjeta
			if (invoice.verifyCode(code, u1)) {//Verifica el codigo
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

int Cinema::menu(Movie movies[], Room rooms[], Schedule benSchedules[], Schedule dbSchedules[], Schedule naSchedules[]) {
	
	do {
		cout << "************************************************" << endl;
		cout << "1-Arhivo" << endl;
		cout << "2-Mantenimiento" << endl;
		cout << "3-Reserva" << endl;
		cout << "4-Venta" << endl;
		cout << GREEN << "Elija opciones entre 1-4" << RESET << endl;
		cin >> menuOption;
		cout << "************************************************" << endl;
		system("cls");

		switch (menuOption) {
		case 1:
			int menu3;

			cout << "1-Acerca de" << endl;
			cout << "2-Salir del sistema" << endl;
			cout << GREEN << "Elija opciones entre 1-2" << RESET << endl;
			cin >> menu3;

			if (menu3 == 1) {
				file();
			}
			else if (menu3 == 2) {
				cout << BLUE << "Muchas gracias por su compra, adios" << RESET << endl;
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
			maintenance(movies, benSchedules, benSchedules, benSchedules, rooms);
			break;

		case 3:
			reservation(movies, rooms, benSchedules, dbSchedules, naSchedules);
			break;

		case 4:
			sale(invoice, user);
			break;
		}

	} while (menuOption != 0);
}