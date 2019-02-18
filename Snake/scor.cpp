#include "scor.h"
#include "gotoXY.h"
#include "librari.h"
/*
Functie pentru afisarea scorului in timpul jocului.
*/
void scor(short scorX, short scorY, int punctaj) {
	gotoXY(scorX, scorY);
	printf("SCOR: %d!", punctaj);
}