#include "logic_dir_sarpe.h"
#include "librari.h"

/*
Functie care stabileste dupa apasarea tastelor W A S D directia sarpelui.
*/

void logic_directie_sarpe(int &mv, int lungime_coada, bool &gameover) {
	if (lungime_coada == 0) {
		while (_kbhit()) {
			switch (_getch()) {
			case 'w':
				mv = 8;
				break;
			case 'W':
				mv = 8;
				break;
			case 's':
				mv = 2;
				break;
			case 'S':
				mv = 2;
				break;
			case 'a':
				mv = 4;
				break;
			case 'A':
				mv = 4;
				break;
			case 'd':
				mv = 6;
				break;
			case 'D':
				mv = 6;
				break;
			case 'Q':
				gameover = true;
				break;
			case 'q':
				gameover = true;
				break;

			}
		}
	}
	else {
		if (mv == 8) {
			while (_kbhit()) {
				switch (_getch()) {
				case 'w':
					mv = 8;
					break;
				case 'W':
					mv = 8;
					break;
				case 's':
					break;
				case 'S':
					break;
				case 'a':
					mv = 4;
					break;
				case 'A':
					mv = 4;
					break;
				case 'd':
					mv = 6;
					break;
				case 'D':
					mv = 6;
					break;
				case 'Q':
					gameover = true;
					break;
				case 'q':
					gameover = true;
					break;
				}
			}
		}
		else
			if (mv == 2) {
				while (_kbhit()) {
					switch (_getch()) {
					case 'w':
						break;
					case 'W':
						break;
					case 's':
						mv = 2;
						break;
					case 'S':
						mv = 2;
						break;
					case 'a':
						mv = 4;
						break;
					case 'A':
						mv = 4;
						break;
					case 'd':
						mv = 6;
						break;
					case 'D':
						mv = 6;
						break;
					case 'Q':
						gameover = true;
						break;
					case 'q':
						gameover = true;
						break;
					}
				}
			}
			else
				if (mv == 6) {
					while (_kbhit()) {
						switch (_getch()) {
						case 'w':
							mv = 8;
							break;
						case 'W':
							mv = 8;
							break;
						case 's':
							mv = 2;
							break;
						case 'S':
							mv = 2;
							break;
						case 'a':
							break;
						case 'A':
							break;
						case 'd':
							mv = 6;
							break;
						case 'D':
							mv = 6;
							break;
						case 'Q':
							gameover = true;
							break;
						case 'q':
							gameover = true;
							break;

						}
					}
				}
				else
					if (mv == 4) {
						while (_kbhit()) {
							switch (_getch()) {
							case 'w':
								mv = 8;
								break;
							case 'W':
								mv = 8;
								break;
							case 's':
								mv = 2;
								break;
							case 'S':
								mv = 2;
								break;
							case 'a':
								mv = 4;
								break;
							case 'A':
								mv = 4;
								break;
							case 'd':
								break;
							case 'D':
								break;
							case 'Q':
								gameover = true;
								break;
							case 'q':
								gameover = true;
								break;
							}

						}
					}
	}
}
