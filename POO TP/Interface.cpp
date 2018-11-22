#include "Lib.h"


Interface::Interface(Mapa * m) {
	mapa = m;
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
						delete mundo;
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
						mapa->compranav();
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
									if (str.compare("criaf") == 0 && num > 0 && (c == 'E' || c == 'C' || c == 'V' || c == 'A' || c == 'H')) {
										if (mundo->existeNinhoID(num3) == true) {
											mundo->trataFormiga(num, num3, c);
											imprime();
										}
									}
									else {
										printf("Erro de sintaxe");
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
											if (str.compare("cria1") == 0 && (c == 'E' || c == 'C' || c == 'V' || c == 'A' || c == 'H') && num > 0 && num2 >= 0 && num2 < mundo->getDim() && num3 >= 0 && num3 < mundo->getDim()) { // CONDITIONSSSSS
												if (mundo->existeNinhoID(num)) {
													mundo->acrescentaFormiga(c, num, num2, num3);
													imprime();
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
		}
		iss.str("");
	}
}



Interface::~Interface()
{
}
