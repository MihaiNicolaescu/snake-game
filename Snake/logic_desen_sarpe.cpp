#include "logic_desen_sarpe.h"
#include "gotoXY.h"
#include "librari.h"
/*
Functie care deseneaza sarpele pe terenul de joc.
*/
void logic_desen_sarpe(short &sarpeX, short &sarpeY, short &sarpeoldX, short &sarpeoldY, int &mv) {
	switch (mv) {
	case 8:
		sarpeoldX = sarpeX;
		sarpeoldY = sarpeY;
		sarpeX--;
		gotoXY(sarpeX, sarpeY);
		printf("^");
		break;
	case 2:
		sarpeoldX = sarpeX;
		sarpeoldY = sarpeY;
		sarpeX++;
		gotoXY(sarpeX, sarpeY);
		printf("v");
		break;
	case 4:
		sarpeoldX = sarpeX;
		sarpeoldY = sarpeY;
		sarpeY--;
		gotoXY(sarpeX, sarpeY);
		printf("<");
		break;
	case 6:
		sarpeoldX = sarpeX;
		sarpeoldY = sarpeY;
		sarpeY++;
		gotoXY(sarpeX, sarpeY);
		printf(">");
		break;
	}
}