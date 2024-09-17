#include "Horario.h"
#include "Colores.h"

Horario::Horario() {
    fecha = " ";
    primeraFuncion = 0;
    segundaFuncion = 0;
    funcionFinal = 0;
}

Horario::Horario(int h, int m)
{
    hora = h;
    minutos = m;
    if (hora <= 12) {
        periodo = "AM";
    }
    else if (hora > 12 && hora < 24) {
        periodo = "PM";
    }

}

void Horario::horas(Horario h1[]) {
    cout << MAGENTA << "Elija el horario que desea:" << RESET << endl;

    for (int i = 0; i < 2; i++) {
        cout << 1 + i << "- "; h1[i].mostrarHorario();
    }
}

void Horario::toString(Pelicula vecP[], Horario vecBen[], Horario vecDb[], Horario vecNa[]) {

    cout <<BLUE<< "El horario de las peliculas son: "<<RESET << endl;

     cout << vecP[0].getNombre();
    cout << endl;
    for (int i = 0; i < 2; i++) {

        vecBen[i].mostrarHorario();
    }
    cout << endl;
    cout << vecP[1].getNombre();
    cout << endl;
    for (int i = 0; i < 2; i++) {

        vecDb[i].mostrarHorario();
    }

    cout << endl;
    cout << vecP[2].getNombre();
    cout << endl;
    for (int i = 0; i < 2; i++) {

        vecNa[i].mostrarHorario();
    }
       
}

int Horario::getMinutos() {
    return minutos;
}

int Horario::getHora() {
    return hora;
}

void Horario::mostrarHorario() {

    if (hora < 10) {
        cout << "0" << hora << ":";
    }
    else {
        cout << hora << ":";
    }
    if (minutos < 10) {
        cout << "0" << minutos << ":";
    }
    else {
        cout << minutos << ":";
    }
    cout << periodo;

    cout << endl;
}