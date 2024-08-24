#include "Sala.h"
#include <cstdlib>
#include <ctime>



Sala::Sala(int _numeroSala, int _precio) {
    auxRows = 0;
    auxSeating = 0;
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
    auxRows = 0;
    auxSeating = 0;
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

void Sala::setNumeroSala(int _numeroSala) {
    numeroSala = _numeroSala;
}

int Sala::getNumeroSala() {
    return numeroSala;
}

void Sala::setPrecio(int _precio) {
    precio = _precio;
}

int Sala::getPrecio() {
    return precio;
}

void Sala::showArmchairs() {
    srand(time(NULL));

    cout << "****************************************************************************************" << endl;
    cout << "---------PANTALLA-----------";
    cout << endl << endl;
    cout << "  +";
    for (int i = 0; i < seating; i++) {
        cout << "---+";
    }
    cout << endl;

    for (int i = 0; i < seating; i++) {
        cout << char(65 + i) << " |";

        for (int j = 0; j < seating; j++) {
            if (seats[i][j] == 1) {
                cout << "\033[41m 1 \033[0m|";
            }
            else {
                cout << "\033[42m 0 \033[0m|";
            }
        }
        cout << endl;

        cout << "  +";
        for (int i = 0; i < seating; i++) {
            cout << "---+";
        }
        cout << endl;
    }
    cout << endl;
    cout << "    1 " << "  2 " << "  3 " << "  4 " << "   5 " << "   6 " << "  7 " << "  8 " << "  9 " << "  10 ";
    cout << endl;
}

bool Sala::reserveSeat(int _row, int _seating) {
    bool reserved = false;

    if (seats[_row][_seating] == 1) {
        reserved = false;
    }
    else {
        seats[_row][_seating] = 1;
        reserved = true;
    }

    return reserved;
}

void Sala::vaciar() {

    seats[auxRows][auxSeating] = 0;

}

void Sala::seatsReserved() {
    char rowsFake = ' ';
    int seatingFake = 0;


    cout << "Ingrese la fila: "; cin >> rowsFake;
    cout << endl;


    cout << "Ingrese el asiento: "; cin >> seatingFake;
    cout << endl;
    seatingFake--;

    if (reserveSeat(asientos(rowsFake), seatingFake)) {
        cout << "Asiento reservado con exito" << endl;
        auxRows = asientos(rowsFake);
        auxSeating = seatingFake;

    }
    else {
        cout << "Asiento ocupado" << endl << endl;
    }

}

int Sala::asientos(char _row) {
    int number = 0;

    switch (_row) {
    case 'A':
        number = 0;
        break;
    case 'B':
        number = 1;
        break;
    case 'C':
        number = 2;
        break;
    case 'D':
        number = 3;
        break;
    case 'E':
        number = 4;
        break;
    case 'F':
        number = 5;
        break;
    case 'G':
        number = 6;
        break;
    case 'H':
        number = 7;
        break;
    case 'I':
        number = 8;
        break;
    case 'J':
        number = 9;
        break;
    case 'K':
        number = 10;
        break;
    case 'L':
        number = 11;
        break;
    case 'M':
        number = 12;
        break;
    case 'N':
        number = 13;
        break;
    case 'O':
        number = 14;
        break;
    }

    return number;
}

void Sala::toString() {
    cout << "------------------------------------------------------" << endl;
    cout << "Sala " << numeroSala << " Precio: " << precio << endl;
    cout << "------------------------------------------------------" << endl;
}