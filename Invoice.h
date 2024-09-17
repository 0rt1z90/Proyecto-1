#pragma once
#include "Movie.h"
#include "User.h"
#include "Colors.h"
#include "Room.h"
#include "Schedule.h"

class Invoice {
public:

    void purchase(Movie, User, Room, Schedule);

    bool verifyCode(int, User);
};