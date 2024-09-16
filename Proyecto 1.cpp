#include <iostream>
#include <time.h> 
#include <stdlib.h>
#include "Sala.h"
#include "Cine.h"
#include "Horario.h"
#include "Factura.h"
#include "Pelicula.h"
#include "Usuario.h"


Pelicula p1("Ben_10", 2009, 70, "Estados_Unidos", "Ben 10 es una serie animada que sigue a Ben Tennyson, un joven que descubre el Omnitrix, un reloj alienigena que le permite transformarse en diferentes criaturas extraterrestres. A lo largo de la serie, Ben usa sus nuevas habilidades para luchar contra villanos y proteger el planeta, todo mientras enfrenta desafios tipicos de la adolescencia.");
Pelicula p2("Dragon_Ball", 2019, 90, "Japon", "Dragon Ball es una iconica serie de anime y manga creada por Akira Toriyama. Sigue las aventuras de Goku, un guerrero saiyajin que busca las esferas del dragon y lucha contra poderosos enemigos para proteger la Tierra. La serie combina accion, humor y valores como la amistad y la superacion personal, y ha dejado un legado profundo en la cultura popular mundial.");
Pelicula p3("Naruto", 2015, 86, "Japon", "Naruto es una serie de anime y manga creada por Masashi Kishimoto. Sigue a Naruto Uzumaki, un joven ninja que busca reconocimiento en su aldea y desea convertirse en Hokage, el lider de la misma.La historia explora temas de perseverancia, amistad y superacion, mientras Naruto y sus amigos enfrentan poderosos enemigos y descubren secretos de su mundo ninja.");

Sala s1(23, 3500);
Sala s2(20, 1500);
Sala s3(21, 2500);


Horario h1("23/5/2010", 7, 12, 5);
Horario h2("3/6/2020", 7, 9, 6);
Horario h3("1/11/2015", 8, 1, 9);

Pelicula vecP[3] = { p1, p2,  p3 };
Sala vecS[3] = { s1,s2,s3 };
Horario vecH[3] = { h1,h2,h3 };

using namespace std;

int main() {
	Cine c1;

	c1.menu(vecP, vecS, vecH);
	
}