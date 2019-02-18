#include "teren_level1.h"
#include "librari.h"
//terenul din primul level de joc
void teren_level1(short terenX, short terenY) {
	for (int i = 0; i < terenX; i++) {
		for (int j = 0; j < terenY; j++) {
			if (i == 0 || i == terenX - 1)
				printf("#");
			else
				if (j == 0 || j == terenY - 1 || ((j > 3 && j < 20) && i == 13))
					printf("#");
				else
					printf(" ");
		}
		printf("\n");
	}
}