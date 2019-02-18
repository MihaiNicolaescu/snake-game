#include "logic_coada.h"
#include "structuri.h"
#include "librari.h"
#include "gotoXY.h"


/*
Functie care deseneaza coada sarpelui pe teren.
*/

void logic_coada(coords codita[700], coords sarpe, int lungime_coada) {
	if (lungime_coada > 0) {
		for (int i = 0; i <= lungime_coada; i++) {
			codita[0].X = sarpe.oldX;
			codita[0].Y = sarpe.oldY;
			codita[0].oldX = codita[0].X;
			codita[0].oldY = codita[0].Y;
			if (i > 0) {
				codita[i].oldX = codita[i].X;
				codita[i].oldY = codita[i].Y;
				codita[i].X = codita[i - 1].oldX;
				codita[i].Y = codita[i - 1].oldY;
			}
			gotoXY(codita[i].X, codita[i].Y);
			printf("o");
		}
	}
}