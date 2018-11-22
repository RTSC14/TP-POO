#pragma once
#include "Lib.h"


class jogador
{
	int moedas;
	vector<barcos*> barcos;

public:
	jogador(int moedasini);

	int getmoedas();
	void setmoedas(int nmoedas);

	~jogador();
};

