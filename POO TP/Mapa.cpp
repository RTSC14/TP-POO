#include "Lib.h"

Mapa::Mapa() {
	this->jog = new jogador(nmoedas);
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
	if (jog->getmoedas() >= mapa.getPrecoNav()) {
		jog->setmoedas(jog->getmoedas() - mapa->getPrecoNav());
		jog->addnav();
	}
}
