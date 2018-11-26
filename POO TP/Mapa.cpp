#pragma once
#include "Lib.h"

Mapa::Mapa(int nmoedas, int nprobpirata, int npreconavio, int nprecosoldado, int nprecovendpeixe, int nprecocompmerc, int nprecovendmerc, int nsoldadosporto, int nprobevento, int nprobtempestade, int nprobsereias, int nprobcalmaria, int nprobmotim, string linha, int x, int y) {
	this->jog = new jogador(nmoedas);
	this->probpirata = nprobpirata;
	this->preconavio = npreconavio;
	this->precosoldado = nprecosoldado;
	this->precovendpeixe = nprecovendpeixe;
	this->precocompmerc = nprecocompmerc;
	this->precovendmerc = nprecovendmerc;
	this->soldadosporto = nsoldadosporto;
	this->probevento = nprobevento;
	this->probtempestade = nprobtempestade;
	this->probsereias = nprobsereias;
	this->probcalmaria = nprobcalmaria;
	this->probmotim = nprobmotim;
	this->map = linha;
	this->x = x;
	this->y = y;
}

int Mapa::getX() {
	return x;
}

int Mapa::getY() {
	return y;
}

string Mapa::getMap() {
	return map;
}

void Mapa::compranav() {
	/*if (jog->getmoedas() >= mapa.getPrecoNav()) {
		jog->setmoedas(jog->getmoedas() - mapa->getPrecoNav());
		jog->addnav();
	}*/
}

Mapa::~Mapa() {

}