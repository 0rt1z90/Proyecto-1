#pragma once
#include "Movie.h"
#include "Room.h"
#include "Schedule.h"
#include "User.h"
#include "Invoice.h"
#include "Seat.h"
#include "Colors.h"
#include <time.h>

class Cinema {

public:

    void reservation(Movie[], Room[], Schedule[], Schedule[], Schedule[]);
    void maintenance(Movie[], Schedule[], Schedule[], Schedule[], Room[]);
    void file();
    void sale(Invoice, User);
    int menu(Movie movies[], Room rooms[], Schedule schedules[], Schedule[], Schedule[]);
};