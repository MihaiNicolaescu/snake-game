#include "sterge.h"
#include "librari.h"
#include "gotoXY.h"

/*
Functie care sterge ultimul element din coada sarpelui sau dupa capul sarpelui daca coada nu exista.
*/
void sterge(int coada, short oldsarpeX, short oldsarpeY, short coadaX, short coadaY) {
	if (coada == 0) {
		gotoXY(oldsarpeX, oldsarpeY);
		printf(" ");
	}
	else {
		gotoXY(coadaX, coadaY);
		printf(" ");
	}
}