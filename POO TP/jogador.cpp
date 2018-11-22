#include "Lib.h"



jogador::jogador(int moedasini)
{
	this->moedas = moedasini;

}

int jogador::getmoedas(void) {
	return moedas;
}
void jogador::setmoedas(int nmoedas) {
	moedas = nmoedas;
}

jogador::~jogador()
{
}
