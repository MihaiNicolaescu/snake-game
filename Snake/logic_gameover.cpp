#include "logic_gameover.h"
#include "structuri.h"
#include "librari.h"
#include "meniu.h"
#include "snake_level1.h"


/*
Functie care verifica condiitile pentru sfarsitul  jocului si inregistreaza un record  daca exista.
*/
void logic_gameover(coords sarpe, coords codita[700],short terenX, short terenY, int lungime_coada, bool &gameover, int puncte, int record_vechi, char nume[20]) {
	if (sarpe.X == (terenX - 1) || sarpe.X == 0 || sarpe.Y == (terenY - 1) || sarpe.Y == 0) {
		system("cls");
		printf("Ai pierdut deoarece sarpele sa lovit de zid!\n");
		if (puncte > record_vechi) {
			FILE *rec;
			fopen_s(&rec, "record.txt", "w+");
			char player[20];
			printf("Te rog introdu numele sau o porecla (de maxim 20 caractere) deoarece ai stabilit un record.\n");
			printf("Nume: ");
			scanf_s("%s", &player, 100);
			while (strlen(player) > 20) {
				printf("Numele sau porecla nu poate contine mai mult de 20 de caractere!\nTe rog introdu alt nume sau porecla: ");
				scanf_s("%s", &player, 100);
			}
			printf("Felicitari %s, ai stabilit un record de %d puncte,\nfostul record il detinea %s cu %d puncte.\n", player, puncte, nume, record_vechi);
			fprintf_s(rec, "%s %d", player, puncte);
			fclose(rec);
		}
		else
			printf("Ai obtinut un scor de %d puncte! Felicitari!", puncte);
		gameover = true;
		Sleep(5000);
		system("cls");
		printf("Apasa orice tasta pentru a reveni in meniul principal!");
		if (_getch())
			meniu();
	}
	for (int i = 0; i <= lungime_coada; i++) {
		if (sarpe.X == codita[i].X && sarpe.Y == codita[i].Y) {
			system("cls");
			printf("Ai pierdut deoarece sarpele si-a mancat coada!\n");
			if (puncte > record_vechi) {
				FILE *rec;
				fopen_s(&rec, "record.txt", "w+");
				char player[20];
				printf("Te rog introdu numele sau o porecla (de maxim 20 caractere) deoarece ai stabilit un record.\n");
				printf("Nume: ");
				scanf_s("%s", &player, 100);
				while (strlen(player) > 20) {
					printf("Numele sau porecla nu poate contine mai mult de 20 de caractere!\nTe rog introdu alt nume sau porecla: ");
					scanf_s("%s", &player, 100);
				}
				printf("Felicitari %s, ai stabilit un record de %d puncte,\nfostul record il detinea %s cu %d puncte.\n", player, puncte, nume, record_vechi);
				fprintf_s(rec, "%s %d", player, puncte);
				fclose(rec);
			}
			else
				printf("Ai obtinut un scor de %d puncte! Felicitari!", puncte);
			gameover = true;
			Sleep(5000);
			system("cls");
			printf("Apasa orice tasta pentru a reveni in meniul principal!");
			if (_getch())
				meniu();
			break;
		}
	}

}