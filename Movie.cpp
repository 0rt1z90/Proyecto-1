#include "Movie.h"
#include "Colors.h"

Movie::Movie(string _name, int _year, int _duration, string _country, string _review) {
    name = _name;
    year = _year;
    duration = _duration;
    country = _country;
    review = _review;
}

void Movie::setName(string _name) {
    name = _name;
}

string Movie::getName() {
    return name;
}

void Movie::setYear(int _year) {
    year = _year;
}

int Movie::getYear() {
    return year;
}

void Movie::setDuration(int _duration) {
    duration = _duration;
}

int Movie::getDuration() {
    return duration;
}

void Movie::setCountry(string _country) {
    country = _country;
}

string Movie::getCountry() {
    return country;
}

void Movie::setReview(string _review) {
    review = _review;
}

string Movie::getReview() {
    return review;
}

void Movie::toString() {
    cout << "////////////////////////////////////////////////////////" << endl;
    cout << "Nombre de la pelicula: " << name << endl;
    cout << "Anio de lanzamiento: " << year << endl;
    cout << "Duracion(MIN): " << duration << " minutos" << endl;
    cout << "Pais de origen: " << country << endl;
    cout << BLUE << "Resenia: " << review << RESET << endl;
    cout << "////////////////////////////////////////////////////////" << endl;
}