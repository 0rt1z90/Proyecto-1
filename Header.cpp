#include "Header.h"
int menu2;

Pelicula p1("Ben_10", 2009, 70, "Estados_Unidos", 8.9);
Pelicula p2("Dragon_Ball", 2019, 90, "Japon", 9.5);
Pelicula p3("Naruto", 2015, 86, "Japon", 7.7);
Pelicula vecP[3] = { p1,p2,p3 };

Sala s1(23, 3500);
Sala s2(20, 1500);
Sala s3(21, 2500);
Sala vecS[3] = { s1,s2,s3 };
Sala s5, s6, s7, s8, s9, s10, s11, s12, s13;

Horario h1("23/5/2010", 7, 12, 5);
Horario h2("3/6/2020", 7, 9, 6);
Horario h3("1/11/2015", 8, 1, 9);
Horario vecH[3] = { h1,h2,h3 };
Horario h4;

Usuario u1;
Factura f1;


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
Horario::Horario(string _fecha, int _horaInicial,int _segundaFuncion, int _horaFinal)
{
	fecha = _fecha;
	horaInicial = _horaInicial;
	segundaFuncion = _segundaFuncion;
	horaFinal = _horaFinal;
}
Horario::Horario() {
	fecha = " ";
	horaInicial = 0;
	segundaFuncion = 0;
	horaFinal = 0;
}
void Horario::setFecha(string _fecha)
{
	fecha = _fecha;
}
string Horario::getFecha()
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
void Horario::setSegundaFuncion(int _segundaFuncion)
{
	segundaFuncion = _segundaFuncion;
}
int Horario::getSegundaFuncion()
{
	return segundaFuncion;
}
void Horario::setHoraFinal(int _horaFinal)
{
	horaFinal = _horaFinal;
}
int Horario::getHoraFinal()
{
	return horaFinal;
}
void Horario::toStringHoras() {

	cout << "////////////////////////////////////////////////////////" << endl;
	cout << "Fecha: " << fecha << endl;
	cout << "Primera funcion: " << horaInicial << endl;
	cout << "Ultima funcion: " << horaFinal << " minutos" << endl;
	cout << "////////////////////////////////////////////////////////" << endl;

}
void Horario::horas() {

	
	cout << "Primer horario " << horaInicial << "am" << endl;
	cout << "Segundo horario " << segundaFuncion << "pm" << endl;
	cout << "Tercer horario " << horaFinal << "pm" << endl;
	cout << "***************************************" << endl;

}
void Horario::toString() {

	cout << "El horario de las peliculas son: " << endl;
	cout << vecP[0].getNombre() << endl;
	vecH[0].horas();
	cout << vecP[1].getNombre() << endl;
	vecH[1].horas();
	cout << vecP[2].getNombre() << endl;
	vecH[2].horas();
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

		char rowsFake = 0;
		int seatingFake = 0;
		cout << "Ingrese la fila: "; cin >> rowsFake;
		cout << endl;
		cout << "Ingrese el asiento: "; cin >> seatingFake;
		cout << endl;
		
		seatingFake--;
		
		if (reserveSeat(asientos(rowsFake), seatingFake)) {
			cout << "Asiento reservado con exito" << endl;
		}
		else {
			cout << "Asiento ocupado" << endl << endl;
		}

	}
	else if (reserve == 'N' || reserve == 'n') {
		cout << "Regresando al menu...." << endl << endl;

	}


}
int Sala::asientos(char letra){

	switch (letra){
	case 'A': case 'a':

		return 0;

		break;
	case 'B': case 'b':

		return 1;

		break;
	case 'C': case 'c':

		return 2;

		break;
	case 'D': case 'd':

		return 3;

		break;
	case 'E': case 'e':

		return 4;

		break;
	case 'F': case 'f':

		return 5;

		break;
	case 'G': case 'g':

		return 6;

		break;
	case 'H': case 'h':

		return 7;

		break;
	case 'I': case 'i':

		return 8;

		break;
	case 'J': case 'j':

		return 9;

		break;

	}
}
void Sala::toString() {
	cout << "////////////////////////////////////////////////////////" << endl;
	
	cout << "Numero de sala: " << numeroSala << endl;
	cout << "Precio de la sala: " << precio << endl;
	cout << "////////////////////////////////////////////////////////" << endl;
}




//Clase Usuario
void Usuario::setCodigoCompra(int _codigoCompra)
{
	codigoCompra = _codigoCompra;
}
int Usuario::getCodigoCompra()
{
	return codigoCompra;
}
int Usuario::tarjeta(int tarje) {
	int num_Cifra = 1;
	while (tarje >= 10) {
		tarje /= 10;
		num_Cifra++;
	}
	return num_Cifra;
}
int Usuario::generador() {
	return codigoCompra = rand() % 10000 + 1;
}




//Toda la clase factura
void Factura::compra(Pelicula p1, Sala s1, Horario h1) {
	
	cout << p1.getNombre() << endl;
	cout << s1.getNumeroSala() << endl;
	cout << "Su codido de compra es: " << u1.generador() << endl;
	
}
void Factura::factu() {
	


}
bool Factura::code(int _codigo) {
	if (_codigo == u1.getCodigoCompra()) {
		return true;
	}
	else {
		return false;
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

//void Cine::elegirP()
//{
//
//	int auxP, auxS;
//	cout << "*******************************************************" << endl;
//	cout << "BIENBENIDO A LA COMPRA DE VOLETOS" << endl;
//	cout << "Elija una  pelicula de las siguientes:" << endl;
//	cout << "1- Ben 10" << endl;
//	cout << "2- Dragon Ball" << endl;
//	cout << "3- Naruto" << endl;
//	cin >> auxP;
//	
//	for (int i = 0; i < 3; i++) {
//		if (vecPp[i] == auxP-1) {
//			pElejida=vecP[i];
//	    }
//	}
//
//	cout << endl << endl;
//cout << "Elija la sala:" << endl;
//	cout << "1- S1" << endl;
//	cout << "2- S2" << endl;
//	cout << "3- S3" << endl;
//	cin >> auxS;
//
//	for (int i = 0; i < 3; i++) {
//		if (vecSs[i] == auxS - 1) {
//			sElejida = vecS[i];
//		}
//	}
//
//	cout << endl << endl;
//	
//	int i;
//	for (i = 0; i < 3; i++) {
//		cout << i << " ";
//		if (((auxP - 1) == 0) && ((auxP-1) != 1 && (auxP - 1) != 2)) {
//			cout << "Elija el horario que desea:" << endl;
//			cout << "1- 7:00am" << endl;
//			cout << "2- 12:30md" << endl;
//			cout << "3- 5:00pm" << endl;
//
//		}
//		else if (((auxP - 1) == 1) && ((auxP - 1) != 0 && (auxP - 1) != 2)) {
//			cout << "Elija el horario que desea:" << endl;
//			cout << "1- 7:00am" << endl;
//			cout << "2- 9:30am" << endl;
//			cout << "3- 6:00pm" << endl;
//
//
//		}
//		else if (((auxP - 1) == 2) && ((auxP - 1) != 1 && (auxP - 1) != 0)) {
//			cout << "Elija el horario que desea:" << endl;
//			cout << "1- 8:00am" << endl;
//			cout << "2- 1:pm" << endl;
//			cout << "3- 9:00pm" << endl;
//
//
//		}
//	}
//}

void Cine::reserva()
{

	cout << "*******************************************************" << endl;
	cout << "BIENVENIDO A LA COMPRA DE VOLETOS" << endl;
	cout << "Elija una  pelicula de las siguientes:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "- " << vecP[i].getNombre() << endl;
	}
	cin >> menu2;

	switch (menu2) {//4
	case 1:

		cout << "Elija la sala:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "- " << vecS[i].getNumeroSala() << endl;
		}
		cin >> menu2;//5
		switch (menu2) {

		case 1:

			cout << "Elija el horario que desea:" << endl;
			h1.horas();
			cin >> menu2;//8
			s5.showArmchairs();
			s5.seatsReserved();

			char reserve;
			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;

			if (reserve == 'Y' || reserve == 'y') {


				f1.compra(p1, s1, h1);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		case 2:


			cout << "Elija el horario que desea:" << endl;
			h1.horas();
			cin >> menu2;//8
			s6.showArmchairs();
			s6.seatsReserved();

			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;

			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p1, s2, h2);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		case 3:

			cout << "Elija el horario que desea:" << endl;
			h1.horas();
			cin >> menu2;//8
			s7.showArmchairs();
			s7.seatsReserved();


			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p1, s3, h3);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		}
		break;






	case 2:

		cout << "Elija la sala:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "- " << vecS[i].getNumeroSala() << endl;
		}
		cin >> menu2;//6
		switch (menu2) {//6
		case 1:
			cout << "Elija el horario que desea:" << endl;
			h2.horas();
			cin >> menu2;//6
			s8.showArmchairs();
			s8.seatsReserved();
			char reserve;
			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p2, s1, h1);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}


			break;
		case 2:
			cout << "Elija el horario que desea:" << endl;
			h2.horas();
			cin >> menu2;//6
			s9.showArmchairs();
			s9.seatsReserved();

			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p2, s2, h2);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		case 3:
			cout << "Elija el horario que desea:" << endl;
			h2.horas();
			cin >> menu2;//6
			s10.showArmchairs();
			s10.seatsReserved();

			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p2, s3, h3);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		}
		break;



	case 3:

		cout << "Elija la sala:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << "- " << vecS[i].getNumeroSala() << endl;
		}
		cin >> menu2;//7
		switch (menu2) {//7
		case 1:
			cout << "Elija el horario que desea:" << endl;
			h3.horas();
			cin >> menu2;//7
			s11.showArmchairs();
			s11.seatsReserved();
			char reserve;
			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p3, s1, h1);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		case 2:
			cout << "Elija el horario que desea:" << endl;
			h3.horas();
			cin >> menu2;//7
			s12.showArmchairs();
			s12.seatsReserved();

			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p3, s2, h2);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		case 3:
			cout << "Elija el horario que desea:" << endl;
			h3.horas();
			cin >> menu2;//7
			s13.showArmchairs();
			s13.seatsReserved();

			cout << "Desea procesar la compra? Y/N" << endl;
			cin >> reserve;
			if (reserve == 'Y' || reserve == 'y') {
				f1.compra(p3, s3, h3);
			}
			else {
				cout << "Regresando al menu...." << endl;
			}

			break;
		}
		break;
	}

}
void Cine::mantenimiento() {
	int menu1;

	cout << "1-Peliculas" << endl;
	cout << "2-Salas" << endl;
	cout << "3-Horarios" << endl;
	cout << "Elija opciones entre 1-3" << endl;
	cin >> menu1;//3

	switch (menu1) {//3
	case 1:
		p1.toString();
		p2.toString();
		p3.toString();
		
		break;

	case 2:
		cout << "Las salas disponibles son las siguientes: " << endl;
		s1.toString();
		s2.toString();
		s3.toString();
		break;
	case 3:
		h4.toString();
		break;
	}
}
void Cine::archivo() {
	int menu3;


	cout << "1-Acerca de" << endl;
	cout << "2-Salir del sistema" << endl;
	cout << "Elija opciones entre 1-2" << endl;
	cin >> menu3;

	switch (menu3) {
	case 1:
		cout << "El estudiante encargado de crear el sistema de voleteria se llama Kendall Ortiz, cursa ING en sistemas en la UNA" << endl;
		break;

	case 2:
		cout << endl;
		cout << "Muchas gracias por su compra, adios" << endl;

		break;
	}
}
void Cine::venta() {
	int codigo, tarjeta;
	cout << "Le recordamos al usuario que primero debe reservar asientos" << endl;
	cout << "Ingrese el numero de tarjeta: "; cin >> tarjeta;
	cout << "Ingrese el codigo de compra: "; cin >> codigo;
	if (u1.tarjeta(tarjeta) == 8) {
		if (f1.code(codigo)) {
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
