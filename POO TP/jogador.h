#pragma once
#include "Lib.h"

class barcos;
class portos;
class config;
class Mapa;

class jogador
{
	int moedas, nbarcos = 4;
	vector<barcos*> vbarcos;

public:
	jogador(int moedasini);

	int getmoedas();
	void setmoedas(int nmoedas);
	int setNumnav(int numbarcos);
	int addnav(char tipo);

	~jogador();
};

