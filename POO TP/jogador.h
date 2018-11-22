#pragma once
#include "Lib.h"

class barcos;
class portos;
class config;
class Mapa;

class jogador
{
	int moedas;
	vector<barcos*> vbarcos;

public:
	jogador(int moedasini);

	int getmoedas();
	void setmoedas(int nmoedas);

	~jogador();
};

