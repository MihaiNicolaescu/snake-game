#include "librari.h"
#include "gotoXY.h"

/*
Functie pentru setarea cursorului pe consola.
*/
void gotoXY(short linie, short coloana) {
	COORD coord; //structura care defineste coordonatele unui punct de pe consola
	coord.X = coloana;
	coord.Y = linie;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole, coord);
}