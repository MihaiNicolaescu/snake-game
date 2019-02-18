#include "teren.h"
#include "logic_dir_sarpe.h"
#include "logic_desen_sarpe.h"
#include "start.h"
#include "sterge.h"
#include "logic_fruct_normal.h"
#include "logic_verificare.h"
#include "logic_coada.h"
#include "scor.h"
#include "logic_gameover.h"
#include "librari.h"
#include "structuri.h"
#include "ajutor.h"


void snake() {
	//variabile dimensiuni teren
	short terenX = 20;
	short terenY = 35;

	bool gameOver;

	// variabile pentru setarea afisarea scorului in joc
	int scorX = 21, scorY = 0, puncte;


	//variabile legate de sarpe si directia acestuia
	coords sarpe;
	coords coada[700];
	int directie = 0;
	sarpe.X = terenX / 2;
	sarpe.Y = terenY / 2;
	sarpe.oldX = sarpe.X;
	sarpe.oldY = sarpe.Y;
	int lungime_coada;
	int viteza_sarpelui = 200;
	int count = 0;

	// variabila pentru a defini level-ul
	int level = 0;

	//variabile pentru aparitia si coord fruct
	short fructX = rand();
	short fructY = rand();
	int aparitie_fruct;

	//variabile pentru retinerea numelui celui care a stabilit un record respectiv punctajul
	int record_vechi;
	char nume[20];
	FILE *record;
	fopen_s(&record, "record.txt", "r");
	fscanf_s(record, "%s", &nume, 20);
	fscanf_s(record, "%d", &record_vechi);
	fclose(record);

	start(gameOver, lungime_coada, aparitie_fruct, puncte);
	teren(terenX, terenY);
	ajutor();
	while (!gameOver) {
		fruct(fructX, fructY, sarpe.X, sarpe.Y, lungime_coada, aparitie_fruct, coada, puncte, count);
		logic_directie_sarpe(directie, lungime_coada, gameOver);
		logic_desen_sarpe(sarpe.X, sarpe.Y, sarpe.oldX, sarpe.oldY, directie);
		scor(scorX, scorY, puncte);
		logic_coada(coada, sarpe, lungime_coada);
		sterge(lungime_coada, sarpe.oldX, sarpe.oldY, coada[lungime_coada].oldX, coada[lungime_coada].oldY);
		logic_gameover(sarpe, coada, terenX, terenY, lungime_coada, gameOver, puncte, record_vechi, nume);
		if (count == 10) {
			viteza_sarpelui -= 15;
			count = 0;
		}
		Sleep(viteza_sarpelui);
	}
}