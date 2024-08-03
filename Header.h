#pragma once
#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include "Header.h"

using namespace std;

class cine {

private:
	int rows, seating;
	int seats[15][15];
public:
	cine();
	void showArmchairs();

	bool reserveSeat(int, int);

	void seatsReserved();

};
