#include "Room.h"
#include <cstdlib>
#include <ctime>

Room::Room(int _roomNumber, int _price) {
    roomNumber = _roomNumber;
    price = _price;
}

Room::Room() {

     roomNumber = 0;
     price = 0;
}

void Room::setRoomNumber(int _roomNumber) {
    roomNumber = _roomNumber;
}

int Room::getRoomNumber() {
    return roomNumber;
}

void Room::setPrice(int _price) {
    price = _price;
}

int Room::getPrice() {
    return price;
}

void Room::toString() {
    cout << "------------------------------------------------------" << endl;
    cout << "Room " << roomNumber << " Price: " << price << endl;
    cout << "------------------------------------------------------" << endl;
}

void Room::showRoom(Room rooms[]) {
    cout << MAGENTA << "Elija la sala: " << RESET << endl;
    for (int i = 0; i < 2; i++) {
        cout << i + 1 << "- " << rooms[i].getRoomNumber() << endl;
    }
}