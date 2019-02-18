#include "record.h"
#include "librari.h"
#include "meniu.h"
void record() {

	FILE *rec;
	char nume[20];
	int record_actual;
	fopen_s(&rec, "record.txt", "r");
	fscanf_s(rec, "%s", &nume, 20);
	fscanf_s(rec, "%d", &record_actual);
	printf("Recordul de cele mai multe puncte este detinut de %s care detine %d puncte.\n", nume, record_actual);
	printf("Daca vrei ca recordul sa iti apartina atunci joaca si tu si aduna cat mai multe puncte,\nin caz ca iti doresti asta iti urez succes!");
	printf("Pentru a te intoarce in meniul principal apasa orice tasta.");
	fclose(rec);
	if (_getch())
		meniu();


}