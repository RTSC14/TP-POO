#pragma once
#include "Lib.h"
class barcos
{
	int id;
	char tipo;
	int x, y;
	int n_soldados, quant_agua;

	
public:
	barcos(int xx, int yy, char tipo);

	void setX(int xx);
	int getX();

	void setY(int yy);
	int getY();

	int getId();
	char getTipo();

	void setSoldados(int n_soldados);
	void spawnBarco(char tipo);

	~barcos();
};


class barcoVeleiro :public barcos {
	barcoVeleiro(int n_soldados);
};

class barcoEscuna : public barcos {

};

class barcoGaleao : public barcos {

};

class barcoFragata : public barcos {

};
