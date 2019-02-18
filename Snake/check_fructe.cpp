#include "check_fructe.h"
#include "librari.h"
#include "structuri.h"
#include "gotoXY.h"

//functie care verifica daca fructul a fost mancat cand coord sarpe este egal cu coord fruct

void check_fructe(int level, coords sarpe, fructs fructe[4], int &puncte, int &lungime_coada) {
	for (int i = 0; i < 4; i++) {
		if (sarpe.X == fructe[i].X && sarpe.Y == fructe[i].Y) {
			if (fructe[i].valid == 1) {
				puncte++;
				fructe[i].valid = 0;
				gotoXY(21, 0);
				printf("Ai adunat %d fructe din 4", puncte);
				lungime_coada += 3;
			}
		}
	}
}