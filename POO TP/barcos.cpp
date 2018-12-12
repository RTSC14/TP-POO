#include "Lib.h"

barcos::barcos(int xx, int yy, char tipo)
{
}

int barcos::getId()
{
	return id;
}

void barcos::setSoldados(int n_soldados)
{
	this->n_soldados = n_soldados;
}

void barcos::spawnBarco(char tipo)
{
	int id = barcos::getId();

	switch (tipo) {
		case 'V': new barcoVeleiro();
			break;
		case 'G': new barcoGaleao();
			break;
		case 'E': new barcoEscuna();
			break;
		case 'F': new barcoFragata();
			break;
		case 'e': break;
	}
}

barcos::~barcos()
{
}
