#include "Invoice.h"

void Invoice::purchase(Movie movie, User u1, Room room, Schedule schedule) {
    //Factura 
    cout << RED << endl;
    cout << "------------+Purchase Invoice+---------------" << endl;
    cout << GREEN << "Movie: " << movie.getName() << endl;
    cout << "Room: " << room.getRoomNumber() << endl;
    cout << "You need to pay a total of " << room.getPrice() << " colones" << endl;
    cout << "The chosen schedule is: "; schedule.showSchedule();
    cout << BLUE << "Code: " << u1.getPurchaseCode() << endl;
    cout << RED << "------------+Purchase Invoice+---------------" << RESET << endl;
}

bool Invoice::verifyCode(int _code, User code) {
    return _code == code.getPurchaseCode();//Verificacio del codgigo
}