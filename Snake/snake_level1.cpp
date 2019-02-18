#include "snake_level1.h"
#include "teren_level1.h"
#include "librari.h"
#include "structuri.h"
#include "logic_coada.h"
#include "logic_desen_sarpe.h"
#include "logic_dir_sarpe.h"
#include "sterge.h"
#include "gotoXY.h"
#include "gameover_levele.h"
#include "check_fructe.h"
#include "meniu.h"
#include "ajutor.h"

//primul nivel (si singurul) din modul de joc level
void snake_level1(){

	short terenX = 20;
	short terenY = 35;
	bool gameover = false;
	int directie = 0;

	coords sarpe;
	coords coada[700];

	fructs fructe[4];


	sarpe.X = terenX / 2;
	sarpe.Y = terenY / 2;
	sarpe.oldX = sarpe.X;
	sarpe.oldY = sarpe.Y;
	int lungime_coada = 0;

	int level = 1;

	int puncte = 0, record_vechi = 0;
	char nume[20] = "Adm";


	printf("Salut, ai intrat in modul level, tot ce trebuie sa faci este sa\nstrangi numarul de fructe necesar pentru a termina nivelul.\n");
	printf("Atentie! Nu trebuie sa lovesti zidurile din teren, daca lovesti un zid pierzi nivelul si vei repeta nivelul!");
	Sleep(4000);
	system("cls");
	printf("Level 1\n");
	teren_level1(terenX, terenY);
	ajutor();
	if (level == 1) {
		fructe[0].X = 3;
		fructe[0].Y = 7;
		gotoXY(fructe[0].X, fructe[0].Y);
		printf("@");
		fructe[1].X = 15;
		fructe[1].Y = 25;
		gotoXY(fructe[1].X, fructe[1].Y);
		printf("@");
		fructe[2].X = 16;
		fructe[2].Y = 7;
		gotoXY(fructe[2].X, fructe[2].Y);
		printf("@");
		fructe[3].X = 11;
		fructe[3].Y = 27;
		gotoXY(fructe[3].X, fructe[3].Y);
		printf("@");
		fructe[0].valid = 1;
		fructe[1].valid = 1;
		fructe[2].valid = 1;
		fructe[3].valid = 1;
	}
	while (!gameover) {
		if (puncte == 4)
			break;
		logic_directie_sarpe(directie, lungime_coada, gameover);
		logic_desen_sarpe(sarpe.X, sarpe.Y, sarpe.oldX, sarpe.oldY, directie);
		logic_coada(coada, sarpe, lungime_coada);
		sterge(lungime_coada, sarpe.oldX, sarpe.oldY, coada[lungime_coada].oldX, coada[lungime_coada].oldY);
		gameover_level(sarpe, coada, terenX, terenY, gameover, lungime_coada, level);
		check_fructe(level, sarpe, fructe, puncte, lungime_coada);
		Sleep(100);
	}
	system("cls");
	printf("Felicitari, ai terminat nivelul jocului!\n");
	printf("Apasa orice tasta pentru a reveni la meniul principal.");
	if (_getch()) {
		meniu();
	}

}