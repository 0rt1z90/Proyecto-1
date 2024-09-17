#pragma once

#include <iostream>
using namespace std;


class Movie {
private:
    string name;
    int year;
    int duration;
    string country;
    string review;

public:
    Movie(string, int, int, string, string);

    void setName(string _name);
    string getName();

    void setYear(int _year);
    int getYear();

    void setDuration(int _duration);
    int getDuration();

    void setCountry(string _country);
    string getCountry();

    void setReview(string _review);
    string getReview();

    void toString();
};