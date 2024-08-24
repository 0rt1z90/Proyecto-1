#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include "Sala.h"
#include "Cine.h"
#include "Horario.h"
#include "Factura.h"
#include "Pelicula.h"
#include "Usuario.h"

Sala s1(23, 3500);
Sala s2(20, 1500);
Sala s3(21, 2500);

Pelicula p1("Ben_10", 2009, 70, "Estados_Unidos", 8.9);
Pelicula p2("Dragon_Ball", 2019, 90, "Japon", 9.5);
Pelicula p3("Naruto", 2015, 86, "Japon", 7.7);

Horario h1("23/5/2010", 7, 12, 5);
Horario h2("3/6/2020", 7, 9, 6);
Horario h3("1/11/2015", 8, 1, 9);
Horario h4;

Horario vecH[3] = { h1,h2,h3 };
Sala vecS[3] = { s1,s2,s3 };
Pelicula vecP[3] = { p1, p2,  p3 };


Cine c1;

using namespace std;

int main() {


	c1.menu(vecP, vecS, vecH);
	
}