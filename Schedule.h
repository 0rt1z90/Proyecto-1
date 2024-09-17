#pragma once

#include <iostream>
#include "Movie.h"
using namespace std;

class Schedule {
private:
    string date;
    int firstShow;
    int secondShow;
    int lastShow;
    int hour;
    int minutes;
    string period;
public:

    Schedule();
    Schedule(int, int);

    void showSchedule();

    int getHour();
    int getMinutes();

    void hours(Schedule[]);
    void toString(Movie[], Schedule[], Schedule[], Schedule[]);
};