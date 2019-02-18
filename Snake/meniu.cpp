#include "librari.h"
#include "snake.h"
#include "record.h"
#include "snake_level.h"

void meniu() {
	system("cls");
	char aleg;
	printf("Snake game!\n1.Start game\n2.Level mode\n3.Record\n4.Exit");
	aleg = _getch();
	while (aleg != '1' && aleg != '2' && aleg != '3' && aleg != '4')
		meniu();
	if (aleg == '1') {
		system("cls");
		snake();
	}
	else
		if (aleg == '2') {
			system("cls");
			snake_level();
		}
		else
			if (aleg == '3') {
				system("cls");
				record();

			}
			else
				if (aleg == '4') {
					exit(0);
					Sleep(2000);
					meniu();
				}
}