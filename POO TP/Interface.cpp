#include "Lib.h"


Interface::Interface(Mapa * m) {
	map = m;
}

void Interface::corre() {

	string comando;
	int comandoEsp = 0;
	string str;
	string str2;
	int num;
	int num2;
	int num3;
	char c;

	int x = 0;
	int y = 2;

	while (true) {

		imprime();
		Consola::gotoxy(0, 1);
		cout << "                    ";

		comandoEsp = 0;
		Consola::gotoxy(0, 0);
		cout << "para ver todos os comandos escreva [help]\n> ";
		getline(cin, comando);
		istringstream iss(comando);

		for (int i = 0; i < int(comando.length()); i++) {
			if (isspace(comando[i])) {
				comandoEsp++;
			}
		}

		if (comandoEsp == 0) {
			Consola::clrscr();
			Consola::gotoxy(0, 2);
			iss >> str;
			if (str.compare("prox") == 0) {
				
			}
			else {
				if (str.compare("lista") == 0) {
					
				}
				else {
					if (str.compare("sair") == 0) {
						delete map;
						exit(0);
					}
				}
			}
			if (str.compare("help") == 0) {
				
			}
		}
		else {
			if (comandoEsp == 1) {
				Consola::clrscr();
				Consola::gotoxy(0, 2);
				iss >> str;
				iss >> num;
				if (iss.fail()) {
					iss >> str2;
				}
				else {
					if (str.compare("compranav") == 0 ) {
						map->compranav();
					}
					else {
						if (str.compare("vendenav") == 0 ) {
							
						}
						else {
							if (str.compare("vende") == 0 ) {
								
							}
							else {
								if (str.compare("auto") == 0 ) {
									
								}
							}
						}
					}
				}

				if (str.compare("stop") == 0) {
					
				}

				if (str.compare("moedas") == 0) {
					
				}

				if (str.compare("saveg") == 0) {
					
				}

				if (str.compare("loadg") == 0) {

				}

				if (str.compare("delg") == 0) {

				}


			}
			else {
				if (comandoEsp == 2) {
					Consola::clrscr();
					Consola::gotoxy(0, 2);
					iss >> str;
					iss >> num;
					iss >> num2;
					if (iss.fail()) {

					}
					else {
						if (str.compare("compra") == 0 ) {
				
						}
						else if (str.compare("move") == 0 ) {
							
						}
						else if (str.compare("evnav") == 0 ) {
							
						}
						else if (str.compare("vaipara") == 0 ) {
							
						}
						else if (str.compare("comprasold") == 0 ) {
							
						}
					}
				}
				else {
					if (comandoEsp == 3) {
						Consola::clrscr();
						Consola::gotoxy(0, 2);
						iss >> str;

						if (str.compare("pirata") == 0) {
							
						}

						if (str.compare("evpos") == 0) {

						}

						if (str.compare("vaipara") == 0) {

						}


						iss >> num;
						if (!iss.fail()) {
							iss >> c;
							if (!iss.fail()) {
								iss >> num3;
								if (!iss.fail()) {
									if (str.compare("commando") == 0) {
										
									}
									else {
										cout << "Erro de sintaxe";
									}

								}

							}
						}

					}
					else {
						if (comandoEsp == 4) {
							Consola::clrscr();
							Consola::gotoxy(0, 2);
							iss >> str;
							iss >> c;
							if (!iss.fail()) {
								iss >> num;
								if (!iss.fail()) {
									iss >> num2;
									if (!iss.fail()) {
										iss >> num3;
										if (!iss.fail()) {
											if (str.compare("cria1") == 0 ) { // CONDITIONSSSSS
												
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iss.str("");
	}
}


void Interface::imprime() {
	int x = 65;
	int y = 5;
	int xi = 65;
	int yi = 5;
	int itt = 0;
	int chitt = 0;

	string mapa = map->getMap();
	char chMap[1024];

	strcpy_s(chMap, mapa.c_str());

	while (x < map->getY() + xi && y < map->getX() + yi) {
		Consola::setTextColor(Consola::AMARELO);
		//imprime reguas
		if (itt == 0) {
			Consola::gotoxy(x + itt * 2 - 5, y);
			cout << y - yi;
		}
		if (yi - y == 0) {
			Consola::gotoxy(x + itt * 2, y - 2);
			cout << itt;
		}
		//end reguas
		Consola::gotoxy(x + itt * 2, y);

		cout << chMap[chitt];

		if (x - xi == map->getY() - 1) {
			x = xi - 1;
			itt = -1;
			y++;
		}
		x++;
		itt++;
		chitt++;
		Consola::setBackgroundColor(Consola::PRETO);
	}
	Consola::setTextColor(Consola::VERDE);
}


Interface::~Interface()
{
}
