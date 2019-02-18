#include "teren.h"
#include "librari.h"
/*
Functie pentru desenarea terenului de joc.
*/
void teren(short terenX, short terenY) {
	int sarpeX = terenX / 2;
	int sarpeY = terenY / 2;
	for (int i = 0; i < terenX; i++) {
		for (int j = 0; j < terenY; j++) {
			if (i == 0 || j == 0 || i == terenX - 1 || j == terenY - 1)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
}
