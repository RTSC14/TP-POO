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

int jogador::setNumnav(int numbarcos)
{
	return numbarcos;
}

int jogador::addnav(void)
{
	nbarcos=setNumnav(nbarcos + 1);
	cout << "\nTem " << nbarcos << " navios";
	return nbarcos;
}

jogador::~jogador()
{
}
