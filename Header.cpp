#include "Header.h"

//cine::cine(){
//
//
//	// for (int i = 0; i < 3; i++) {
//	//	 p1[i].setPeli(peli[i]);
//
//	// }
//	//for (int i = 0; i < 3; i++) {
//	//	 h1[i].sethorario(hora[i]);
//
//	// }
//	// for (int i = 0; i < 3; i++) {
//	//	 s1[i].setSala(saala[i]);
//
//	// }
//
//}

//Toda la clase pelicula
Pelicula::Pelicula(string _nombre, int _anio, int _duracion, string _pais, float _resenia){

	nombre = _nombre;
	anio = _anio;
	duracion = _duracion;
	pais = _pais;
	resenia = _resenia;

}
void Pelicula::setNombre(string _nombre)
{
	nombre = _nombre;
}
string Pelicula::getNombre()
{
	return nombre;
}
void Pelicula::setAnio(int _anio)
{
	anio = _anio;
}
int Pelicula::getAnio()
{
	return anio;
}
void Pelicula::setDuracion(int _duracion)
{
	duracion = _duracion;
}
int Pelicula::getDuracion()
{
	return duracion;
}
void Pelicula::setPais(string _pais)
{
	pais = _pais;
}
string Pelicula::getPais()
{
	return pais;
}
void Pelicula::setResenia(float _resenia)
{
	resenia = _resenia;
}
float Pelicula::getResenia()
{
	return resenia;
}
void Pelicula::toString() {

	cout << "////////////////////////////////////////////////////////" << endl;
	cout << "Nombre de la pelicula: " << nombre << endl;
	cout << "Anio de lanzamiento: " << anio << endl;
	cout << "Duracion(MIN): " << duracion << " minutos" << endl;
	cout << "Pais de origen: " << pais << endl;
	cout << "Resenia obtenida: " << resenia << endl;
	cout << "////////////////////////////////////////////////////////" << endl;

}


//Toda la clase horario
Horario::Horario(int _fecha, int _horaInicial, int _horaFinal)
{
	fecha = _fecha;
	horaInicial = _horaInicial;
	horaFinal = _horaFinal;
}
void Horario::setFecha(int _fecha)
{
	fecha = _fecha;
}
int Horario::getFecha()
{
	return fecha;
}
void Horario::setHoraInicial(int _horaInicial)
{
	horaInicial = _horaInicial;
}
int Horario::getHoraInicial()
{
	return horaFinal;
}
void Horario::setHoraFinal(int _horaFinal)
{
	horaFinal = _horaFinal;
}
int Horario::getHoraFinal()
{
	return horaFinal;
}


//Toda la clase Sala
Sala::Sala(int _numeroSala, int _precio)
{
	rows = 10;
	seating = 10;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < seating; j++) {

			seats[i][j] = 0 + rand() % (1 + 1 - 0);
		}
	}
	numeroSala = _numeroSala;
		precio = _precio;
}
Sala::Sala() {
	rows = 10;
	seating = 10;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < seating; j++) {

			seats[i][j] = 0 + rand() % (1 + 1 - 0);
		}
	}

	numeroSala = 0;
	precio = 0;
}
void Sala::setNumeroSala(int _numeroSala)
{
	numeroSala = _numeroSala;
}
int Sala::getNumeroSala()
{
	return numeroSala;
}
void Sala::setPrecio(int _precio)
{
	precio = _precio;
}
int Sala::getPrecio()
{
	return precio;
}
void Sala::showArmchairs() {
	//Inicializa butacas al azar
	srand(time(NULL));

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
bool Sala::reserveSeat(int rowsFake, int seatingFake) {
	//Verifica que los campos esten disponibles

	if (seats[rowsFake][seatingFake] == 0) {
		seats[rowsFake][seatingFake] = 1;
		return true;
	}
	else {

		return false;
	}
}
void Sala::seatsReserved() {
	//Verificar si desea reservar campos
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


//void cine::factu() {
//
//	elegirPeli();
//	elegirSala();
//	elegirHora();
//
//	for (int i = 0; i < 3; i++) {
//		if (s1[i].getSala() - 1 == i) {
//			cout << "La sala es: " << s1[i].getSala();
//		}
//		if (h1[i].gethorario() - 1 == i) {
//			cout << "La sala es: " << h1[i].gethorario();
//		}
//	}
//
//}
//int cine::elegirHora() {
//	int menu;
//	cout << endl;
//	cout << "Ingrese la hora: " << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "- " << h1[i].gethorario() << endl;
//	}
//	cin >> menu;
//	switch (menu) {
//	case 1:
//		return menu;
//		break;
//	case 2:
//		return menu;
//		break;
//	case 3:
//		return menu;
//		break;
//	}
//	cout << endl;
//}
//int cine::elegirSala() {
//	int menu;
//	cout << endl;
//	cout << "Ingrese la sala que desea: " << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "- " << s1[i].getSala() << endl;
//	}
//	cin >> menu;
//	switch (menu) {
//	case 1:
//
//		return menu;
//		break;
//	case 2:
//
//		return menu;
//		break;
//	case 3:
//
//		return menu;
//		break;
//	}
//	cout << endl;
//}
//int cine::elegirPeli() {
//
//	cout << endl;
//	int menu;
//	cout << "Ingrese la pelicula que desea: " << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << i + 1 << "- " << p1[i].getpeli() << endl;
//	}
//	cin >> menu;
//	switch (menu) {
//	case 1:
//
//		return menu;
//		break;
//	case 2:
//
//		return menu;
//		break;
//	case 3:
//
//		return menu;
//		break;
//	}
//	cout << endl;
//}