#include "Lib.h"



jogador::jogador(int moedasini)
{
	this->moedas = moedasini;
	barcos *barco1 = new barcoVeleiro();
	vbarcos.add(barco1);
	barcos *barco2 = new barcoEscuna();
	vbarcos.add(barco2);
	barcos *barco3 = new barcoGaleao();
	vbarcos.add(barco3);
	barcos *barco4 = new barcoFragata();
	vbarcos.add(barco4);
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

int jogador::addnav(char tipo)
{
	nbarcos=setNumnav(nbarcos + 1);
	barcos *barconovo;
	barconovo->spawnBarco(tipo);
	cout << "\nTem " << nbarcos << " navios";
	return nbarcos;
}

jogador::~jogador()
{
}
