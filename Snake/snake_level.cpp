#include "snake_level.h"
#include "snake_level1.h"
#include "librari.h"

//functie care apeleaza functia respectiva nivelului avut in modul de joc level
void snake_level() {
	int level = 1;
	if (level == 1) {
		snake_level1();
	}
}