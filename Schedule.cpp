#include "Schedule.h"
#include "Colors.h"

Schedule::Schedule() {
    date = " ";
    firstShow = 0;
    secondShow = 0;
    lastShow = 0;
}

Schedule::Schedule(int h, int m) {
    hour = h;
    minutes = m;
    if (hour <= 12) {
        period = "AM";
    }
    else if (hour > 12 && hour < 24) {
        period = "PM";
    }
}

void Schedule::hours(Schedule h1[]) {
    cout << MAGENTA << "Elija el horario que desea:" << RESET << endl;

    for (int i = 0; i < 2; i++) {
        cout << 1 + i << "- "; h1[i].showSchedule();
    }
}

void Schedule::toString(Movie vecM[], Schedule vecBen[], Schedule vecDb[], Schedule vecNa[]) {
    cout << BLUE << "El horario de las peliculas para el dia 17/09/2024 son: " << RESET << endl;

    cout << vecM[0].getName();
    cout << endl;
    for (int i = 0; i < 2; i++) {
        vecBen[i].showSchedule();
    }

    cout << endl;
    cout << vecM[1].getName();
    cout << endl;
    for (int i = 0; i < 2; i++) {
        vecDb[i].showSchedule();
    }

    cout << endl;
    cout << vecM[2].getName();
    cout << endl;
    for (int i = 0; i < 2; i++) {
        vecNa[i].showSchedule();
    }
}

int Schedule::getMinutes() {
    return minutes;
}

int Schedule::getHour() {
    return hour;
}

void Schedule::showSchedule() {
    if (hour < 10) {
        cout << "0" << hour << ":";
    }
    else {
        cout << hour << ":";
    }

    if (minutes < 10) {
        cout << "0" << minutes << ":";
    }
    else {
        cout << minutes << ":";
    }
    cout << period;
    cout << endl;
}