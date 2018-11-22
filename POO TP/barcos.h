#pragma once
#include "Lib.h"
class barcos
{
	int id;
	char tipo;
	int x, y;

	
public:
	barcos(int xx, int yy, char tipo);
	
	void setX(int xx);
	int getX();

	void setY(int yy);
	int getY();

	int getId();
	char getTipo();



	~barcos();
};

