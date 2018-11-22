#pragma once
#include "Lib.h"
class Interface
{
	Mapa *map;

public:
	Interface(Mapa *m);
	void corre();
	~Interface();
	void imprime();
};

