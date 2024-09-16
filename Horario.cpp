#include "Horario.h"
#include "Colores.h"

Horario::Horario(string _fecha, int _horaInicial, int _segundaFuncion, int _horaFinal) {
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

void Horario::setFecha(string _fecha) {
    fecha = _fecha;
}

string Horario::getFecha() {
    return fecha;
}

void Horario::setHoraInicial(int _horaInicial) {
    horaInicial = _horaInicial;
}

int Horario::getHoraInicial() {
    return horaFinal;
}

void Horario::setSegundaFuncion(int _segundaFuncion) {
    segundaFuncion = _segundaFuncion;
}

int Horario::getSegundaFuncion() {
    return segundaFuncion;
}

void Horario::setHoraFinal(int _horaFinal) {
    horaFinal = _horaFinal;
}

int Horario::getHoraFinal() {
    return horaFinal;
}

void Horario::horas() {

    cout << "Primer horario " << horaInicial << "am" << endl;
    cout << "Segundo horario " << segundaFuncion << "pm" << endl;
    cout << "Tercer horario " << horaFinal << "pm" << endl;
    cout << "***************************************" << endl;
}

void Horario::toString(Pelicula vecP[], Horario vecH[], int i) {
    cout <<BLUE<< "El horario de las peliculas son: "<<RESET << endl;

            cout << vecP[i].getNombre() << endl;
            vecH[i].horas();
       

}