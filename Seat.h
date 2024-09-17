#pragma once
#include <cstdlib>
#include <ctime>
#include "Invoice.h"
#include "Schedule.h"
#include "Room.h"

using namespace std;

class Seat {

private:
    int rows, seats; 
    int auxRows, auxSeats; 
    int seatMatrix[6][6];

public:
    Seat(); 

    void showSeats(); 

    bool reserveSeat(int _row, int _seat); 

    void clear();

    void reservedSeats(Invoice, Seat& s, User, Movie[], Room[], Schedule[], int, int, int); 

    int getSeatNumber(char _row); 

};
