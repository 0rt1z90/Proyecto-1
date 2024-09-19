#include "Invoice.h"

void Invoice::purchase(Movie movie, User u1, Room room, Schedule schedule) {
    //Factura 
    cout << RED << endl;
    cout << "------------+FACTURA+---------------" << endl;
    cout << GREEN << "Pelicula: " << movie.getName() << endl;
    cout << "Sala: " << room.getRoomNumber() << endl;
    cout << "Total a pagar: " << room.getPrice() << " colones" << endl;
    cout << "Horario elejido: "; schedule.showSchedule();
    cout << BLUE << "Codigo unico: " << u1.getPurchaseCode() << endl;
    cout << RED << "------------+FACTURA+---------------" << RESET << endl;
}

bool Invoice::verifyCode(int _code, User code) {
    return _code == code.getPurchaseCode();//Verificacio del codgigo
}