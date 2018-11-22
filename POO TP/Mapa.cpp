#include "Lib.h"

class jogador;

Mapa::Mapa() {
	
}

void Mapa::carregaMapa()
{
	string line;

	ifstream input_file("exemplo.txt");
	do
	{
		getline(input_file, line);
		cout << line;
	} while (getline(input_file, line));
}

void Mapa::compranav() {
	if (jogador->getmoedas() >= mapa->getPrecoNav()) {
		jogador->setmoedas(jogador->getmoedas() - mapa->getPrecoNav());
		jogador->addnav()
	}
}
