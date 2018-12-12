#pragma once
#include "Lib.h"


class jogador;
class barcos;
class Interface;

class Mapa
{
	jogador *jog;
	int probpirata,
		preconavio,
		precosoldado,
		precovendpeixe,
		precocompmerc,
		precovendmerc,
		soldadosporto,
		probevento,
		probtempestade,
		probsereias,
		probcalmaria,
		probmotim,
		x,
		y;
	 string map;

	public:
		static int id_mapa;
		int colunas, linhas;
		void compranav(char tipo);
		Mapa(int nmoedas, int nprobpirata, int npreconavio, int nprecosoldado, int nprecovendpeixe, int nprecocompmerc, int nprecovendmerc, int nsoldadosporto, int nprobevento, int nprobtempestade, int nprobsereias, int nprobcalmaria, int nprobmotim, string linha, int x, int y);
		~Mapa();
		int getX();
		int getY();
		string getMap();
		int getPrecoNav();
};

