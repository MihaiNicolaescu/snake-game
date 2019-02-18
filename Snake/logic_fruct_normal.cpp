#include "logic_fruct_normal.h"
#include "librari.h"
#include "gotoXY.h"
#include "logic_verificare.h"
#include "structuri.h"
/*
Functie care reseteaza 'marul' pe terenul de joc dupa ce sarpele in mananca.
*/

void fruct(short &fructX, short &fructY,short sarpeX, short sarpeY, int &lungime_coada, int &ap_fruct, coords coada[700], int &puncte, int &viteza) {
	if ((sarpeX == fructX )&& (sarpeY == fructY)) {
		ap_fruct = 0;
		lungime_coada++;
		puncte++;
		viteza++;


	}
	if(ap_fruct == 0) {
		fructX = (rand() % 17 + 1);
		fructY = (rand() % 30 + 1);
		logic_verificare(fructX, fructY, sarpeX, sarpeY, coada, lungime_coada);
		ap_fruct = 1;
	}
	gotoXY(fructX, fructY);
	printf("@");
}
