#include "Seat.h"

Seat::Seat() {
    auxRows = 0;
    auxSeats = 0;
    rows = 6;
    seats = 6;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < seats; j++) {
            seatMatrix[i][j] = 0 + rand() % (1 + 1 - 0);//Generacion aleatoria de 1 y 0
        }
    }
}

void Seat::showSeats() {
    //mostrar espacios
    cout << "****************************************************************************************" << endl;
    cout << "---------SCREEN-----------";
    cout << endl << endl;
    cout << "  +";
    for (int i = 0; i < seats; i++) {
        cout << "---+";
    }
    cout << endl;

    for (int i = 0; i < seats; i++) {
        cout << char(65 + i) << " |";

        for (int j = 0; j < seats; j++) {
            if (seatMatrix[i][j] == 1) {
                cout << "\033[41m   \033[0m|";//color rojo
            }
            else {
                cout << "\033[42m   \033[0m|";//color verde
            }
        }
        cout << endl;

        cout << "  +";
        for (int i = 0; i < seats; i++) {
            cout << "---+";
        }
        cout << endl;
    }
    cout << endl;
    cout << "    1 " << "  2 " << "  3 " << "  4 " << "  5 " << "  6 ";
    cout << endl;
}

bool Seat::reserveSeat(int _row, int _seat) {
    bool reserved = false;

    if (seatMatrix[_row][_seat] == 1) {//Deteccion de ocupado
        reserved = false;
    }
    else {
        seatMatrix[_row][_seat] = 1;//Se reserva el campo
        reserved = true;
    }

    return reserved;
}

void Seat::clear() {
    seatMatrix[auxRows][auxSeats] = 0;//Vaciar campo
}

void Seat::reservedSeats(Invoice f1, Seat& s, User u1, Movie movies[], Room rooms[], Schedule schedules[], int movieIndex, int roomIndex, int scheduleIndex) {
    char rowLetter = ' ';
    int seatNumber = 0;

    cout << "Ingrese la fila: "; cin >> rowLetter;
    cout << endl;

    cout << "Ingrese el asiento: "; cin >> seatNumber;
    cout << endl;
    seatNumber--;

    if (reserveSeat(getSeatNumber(rowLetter), seatNumber)) {//Verifica si esta libre
        cout << BLUE << "Asiento reservado con exito" << RESET << endl;
        auxRows = getSeatNumber(rowLetter);
        auxSeats = seatNumber;

        char confirmReservation;
        cout << "El asiento es correcto? Y/N: "; cin >> confirmReservation;
        cout << endl;

        if (confirmReservation == 'Y' || confirmReservation == 'y') {
            f1.purchase(movies[movieIndex - 1], u1, rooms[roomIndex - 1], schedules[scheduleIndex - 1]);//Factura
        }
        else if (confirmReservation == 'N' || confirmReservation == 'n') {//Asiento incorrecto
            s.clear();
            cout << RED << "Lamentamos su ineptitud, vuelva a ingresar" << RESET << endl;
            cout << "Regresando al menu...." << endl;
        }
    }
    else {
        cout << RED << "Asiento ocupado" << RESET << endl << endl;
    }
}

int Seat::getSeatNumber(char _row) {
    int number = 0;
    //Pasar de letra a numero
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
