#include "jogador.h"



jogador::jogador(int moedasini)
{
	moedas = moedasini;

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
