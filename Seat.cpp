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
            else if(seatMatrix[i][j] == 0) {
                cout << "\033[42m   \033[0m|";//color verde
            }
            else if (seatMatrix[i][j] == 2) {
                cout << "\033[43m   \033[0m|";//color amarillo
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

void Seat::cancelReservation(int row, int seat) {
    //verifica si el asiento está reservado (marcado como 1)
    if (seatMatrix[row][seat] == 1) {
        
        seatMatrix[row][seat] = 0;
        char rowLetter = 'A' + row;
        cout << GREEN << "Reserva cancelada exitosamente para el asiento "
            << rowLetter << (seat + 1) << RESET << endl;
    }
    else {
        char rowLetter = 'A' + row; //convierte el indice de fila a letra
        cout << RED << "El asiento "
            << rowLetter << (seat + 1)
            << " no estaba reservado o ya está disponible." << RESET << endl;
    }
}

void Seat::reservedSeats(Invoice f1, Seat& s, User u1, Movie movies[], Room rooms[], Schedule schedules[], int movieIndex, int roomIndex, int scheduleIndex) {
  
    const int MAX_SELECTIONS = 10; //tamaoo maximo del arreglo de reservas temporales
    int reservedSeats[MAX_SELECTIONS][2]; //arreglo para almacenar asientos reservados (fila, asiento)
    int numReservations = 0;

    char rowLetter = ' ';
    int seatNumber = 0;
    char continueSelection = 'Y';

    while (continueSelection == 'Y' || continueSelection == 'y') {
        cout << "Ingrese la fila: ";
        cin >> rowLetter;
        cout << endl;

        cout << "Ingrese el asiento: ";
        cin >> seatNumber;
        cout << endl;
        seatNumber--;

        int rowIndex = getSeatNumber(rowLetter);
        int seatIndex = seatNumber;

        //verifica si el asiento está libre
        if (reserveSeat(rowIndex, seatIndex)) {
            cout << BLUE << "Asiento reservado con éxito" << RESET << endl;

            //agrega el asiento al arreglo de reservas temporales
            if (numReservations < MAX_SELECTIONS) {
                reservedSeats[numReservations][0] = rowIndex;
                reservedSeats[numReservations][1] = seatIndex;
                numReservations++;
            }
            else {
                cout << RED << "No se pueden reservar más asientos" << RESET << endl;
              
            }

            showSeats();

            
            cout << "Desea seleccionar otro asiento? Y/N: ";
            cin >> continueSelection;
            cout << endl;
        }
        else {
           
            cout << RED << "Asiento ocupado" << RESET << endl << endl;
        }
    }

  
    char confirmReservation;
    cout << "Confirma su(s) reserva(s)? Y/N: ";
    cin >> confirmReservation;
    cout << endl;

    if (confirmReservation == 'Y' || confirmReservation == 'y') {
       
            f1.purchase(movies[movieIndex - 1], u1, rooms[roomIndex - 1], schedules[scheduleIndex - 1]);
            cout << BLUE << "Vaya a venta para terminar la compra" << RESET << endl;
      
    }
    else if (confirmReservation == 'N' || confirmReservation == 'n') {
        //deshace las reservas 
        for (int i = 0; i < numReservations; i++) {
            cancelReservation(reservedSeats[i][0], reservedSeats[i][1]); 
        }
        s.clear(); //limpia la selección si cancela
        cout << RED << "Lamentamos su ineptitud, vuelva a ingresar" << RESET << endl;
        cout << "Regresando al menu...." << endl;
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
