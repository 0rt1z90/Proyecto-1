#include "Asiento.h"

Asiento::Asiento() {
    auxRows = 0;
    auxSeating = 0;
    rows = 6;
    seating = 6;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < seating; j++) {
            seats[i][j] = 0 + rand() % (1 + 1 - 0);
        }
    }

}

void Asiento::showArmchairs() {

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
                cout << "\033[41m   \033[0m|";
            }
            else {
                cout << "\033[42m   \033[0m|";
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
    cout << "    1 " << "  2 " << "  3 " << "  4 " << "  5 " << "  6 ";
    cout << endl;
}

bool Asiento::reserveSeat(int _row, int _seating) {
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

void Asiento::vaciar() {

    seats[auxRows][auxSeating] = 0;
    
}

void Asiento::seatsReserved(Factura f1, Asiento &s, Usuario u1, Pelicula peliculas[], Sala salas[],Horario horarios[], int indiceP, int indiceS, int indiceH) {
    char rowsFake = ' ';
    int seatingFake = 0;


    cout << "Ingrese la fila: "; cin >> rowsFake;
    cout << endl;


    cout << "Ingrese el asiento: "; cin >> seatingFake;
    cout << endl;
    seatingFake--;

    if (reserveSeat(asientos(rowsFake), seatingFake)) {
        cout << BLUE << "Asiento reservado con exito" << RESET << endl;
        auxRows = asientos(rowsFake);
        auxSeating = seatingFake;

        char reserve;
        cout << "El asiento es correcto? Y/N: "; cin >> reserve;
            cout << endl;
        

        if (reserve == 'Y' || reserve == 'y') {


            f1.compra(peliculas[indiceP - 1], u1, salas[indiceS - 1], horarios[indiceH-1]);


        }
        else if (reserve == 'N' || reserve == 'n') {

            s.vaciar();
            cout << RED << "Lamentamos su ineptitud, vuelva a ingresar" << RESET << endl;
            cout << "Regresando al menu...." << endl;

        }

    }
    else {
        cout << RED << "Asiento ocupado" << RESET << endl << endl;
    }

}

int Asiento::asientos(char _row) {
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
    case 'a':
        number = 0;
        break;
    case 'b':
        number = 1;
        break;
    case 'c':
        number = 2;
        break;
    case 'd':
        number = 3;
        break;
    case 'e':
        number = 4;
        break;
    case 'f':
        number = 5;
        break;
    }

    return number;
}