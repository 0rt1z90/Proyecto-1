#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include "Room.h"
#include "Cinema.h"
#include "Schedule.h"
#include "Invoice.h"
#include "Movie.h"
#include "User.h"

Movie m1("Ben_10", 2009, 70, "United_States", "Ben 10 es una serie animada que sigue a Ben Tennyson, un joven que descubre el Omnitrix, un reloj alienigena que le permite transformarse en diferentes criaturas extraterrestres. A lo largo de la serie, Ben usa sus nuevas habilidades para luchar contra villanos y proteger el planeta, todo mientras enfrenta desafios tipicos de la adolescencia.");
Movie m2("Dragon_Ball", 2019, 90, "Japan", "Dragon Ball es una iconica serie de anime y manga creada por Akira Toriyama.Sigue las aventuras de Goku, un guerrero saiyajin que busca las esferas del dragon y lucha contra poderosos enemigos para proteger la Tierra.La serie combina accion, humor y valores como la amistad y la superacion personal, y ha dejado un legado profundo en la cultura popular mundial..");
Movie m3("Naruto", 2015, 86, "Japan", "Naruto es una serie de anime y manga creada por Masashi Kishimoto.Sigue a Naruto Uzumaki, un joven ninja que busca reconocimiento en su aldea y desea convertirse en Hokage, el lider de la misma.La historia explora temas de perseverancia, amistad y superacion, mientras Naruto y sus amigos enfrentan poderosos enemigos y descubren secretos de su mundo ninja.");

Room r1(23, 3500);
Room r2(20, 1500);

Schedule s1(14, 59);
Schedule s2(9, 30);
Schedule s3(10, 0);
Schedule s4(13, 32);
Schedule s5(15, 40);
Schedule s6(21, 55);

Schedule vecBen[2] = { s1, s2 };
Schedule vecDb[2] = { s3, s4 };
Schedule vecNa[2] = { s5, s6 };

Movie vecM[3] = { m1, m2, m3 };
Room vecR[2] = { r1, r2 };

using namespace std;

int main() {
	Cinema c1;

	c1.menu(vecM, vecR, vecBen, vecDb, vecNa);

	return 0;
}