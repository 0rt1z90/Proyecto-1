#pragma once
#include <iostream>
#include "Colors.h"

using namespace std;

class Room {
private:
    int roomNumber;
    int price;

public:
    Room(int, int);
    Room();

    void setRoomNumber(int);
    int getRoomNumber();

    void setPrice(int);
    int getPrice();

    void toString();
    void showRoom(Room[]);
};
