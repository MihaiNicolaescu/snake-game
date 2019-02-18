#include "gameover_levele.h"
#include "structuri.h"
#include "librari.h"
#include "snake_level1.h"
#include "meniu.h"

void gameover_level(coords sarpe, coords coada[700], short terenX, short terenY, bool &gameover, int lugime_coada, int level) {
	if (level == 1) {
		if (sarpe.X == (terenX - 1) || sarpe.Y == (terenY - 1) || (sarpe.X == 13 && (sarpe.Y > 3 && sarpe.Y < 20))) {
			system("cls");
			gameover = true;
			printf("Level esuat! Sarpele sa izbit de zid!");
			printf("Pentru a reincepe acest nivel apasa tasta 'Y',\npentru a reveni la meniul principal apasa tasta 'N'.\n");
			char aps = _getch();
			while (aps != 'Y' && aps != 'y' && aps != 'N' && aps != 'n') {
				system("cls");
				printf("Pentru a reincepe acest nivel apasa tasta 'Y',\npentru a reveni la meniul principal apasa tasta 'N'.\n");
				aps = _getch();
			}
			if (aps == 'Y' || aps == 'y') {
				system("cls");
				snake_level1();
			}
			else {
				system("cls");
				meniu();
			}

		}
	}
}