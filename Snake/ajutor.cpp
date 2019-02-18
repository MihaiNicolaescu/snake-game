#include "ajutor.h"
#include "librari.h"
#include "gotoXY.h"

//functie care afiseaza in timpul jocului tastele pentru directia sarpelui 

void ajutor() {
	for (int i = 35; i < 55; i++) {
		for (int j = 10; j < 17; j++) {
			if (i == 35 || i == 54 || j == 10 || j == 16) {
				gotoXY(j,i);
				printf("*");
			}
		}
	}
	gotoXY(11, 36);
	printf("SUS: \"W\"");
	gotoXY(12, 36);
	printf("JOS: \"S\"");
	gotoXY(13, 36);
	printf("STANGA: \"A\"");
	gotoXY(14, 36);
	printf("DREAPTA: \"D\"");
	gotoXY(15, 36);
	printf("Iesire: \"Q\"");
}