#include "logic_verificare.h"
#include "librari.h"
#include "structuri.h"

/*
Funtie care verifica daca coordonatele fructului sunt identice cu cele ale sarpelui sau cu al vreunui element din coada sarpelui.
*/
void logic_verificare(short &fructX, short &fructY, short sarpeX, short sarpeY, coords coada[700], int lungime_coada) {
	bool ok = false;
	while (!ok) {
		for (int i = 0; i <= lungime_coada; i++) {
			if (fructX == sarpeX || fructY == sarpeY || fructX == coada[i].X || fructX == coada[i].Y) {
				fructX = (rand() % 17 + 1);
				fructY = (rand() % 32 + 1);
				ok = false;
			}
			else {
				ok = true;
			}
		}
	}
}