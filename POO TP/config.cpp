#include "Lib.h"

		

void config::conf(int valor)
{
	int moedas = 1000,
	    probpirata = 20,
		preconavio = 100, 
		precosoldado = 1, 
		precovendpeixe = 1, 
		precocompmerc = 2, 
		precovendmerc = 3, 
		soldadosporto = 100, 
		probevento = 30, 
		probtempestade = 30, 
		probsereias = 30, 
		probcalmaria = 20, 
		probmotim = 20;
	if (valor == 1)
	{
		string fmapa;
		int nmoedas = -1000,
			nprobpirata = -1000,
			npreconavio = -1000,
			nprecosoldado = -1000,
			nprecovendpeixe = -1000,
			nprecocompmerc = -1000,
			nprecovendmerc = -1000,
			nsoldadosporto = -1000,
			nprobevento = -1000,
			nprobtempestade = -1000,
			nprobsereias = -1000,
			nprobcalmaria = -1000,
			nprobmotim = -1000,
			x,
			y;
		cout << "Insira o nome do ficheiro do mapa: ";
		cin >> fmapa;
		string line;
		string item1, item2, lixo;

		ifstream input_file(fmapa);
		getline(input_file, item1);
		istringstream iss1(item1);
		iss1 >> lixo;
		iss1 >> x;
		getline(input_file, item2);
		istringstream iss2(item1);
		iss2 >> lixo;
		iss2>> y;
		while (input_file.eof() == false) {
			getline(input_file, line);
		}
		cout << "CONFIGURACAO" << endl;
		fflush(stdin);
		cout << "Numero de moedas iniciais (default: 1000): ";
		cin >> nmoedas;
		if (nmoedas != -1000)
			nmoedas = moedas;
		cout << "Probabilidade de surgir um barco pirata num turno (default: 20%): ";
		cin >> nprobpirata;
		if (nprobpirata != -1000)
			nprobpirata = probpirata;
		cout << "Preco dos navios (default: 100): ";
		cin >> npreconavio;
		if (npreconavio != -1000)
			npreconavio = preconavio;
		cout << "Preco dos soldados (default: 1): ";
		cin >> nprecosoldado;
		if (nprecosoldado != -1000)
			nprecosoldado = precosoldado;
		cout << "Preco da venda de mercadoria (default: 1): ";
		cin >> nprecovendmerc;
		if (nprecovendpeixe != -1000)
			nprecovendpeixe = precovendpeixe;
		cout << "Preco da compra de mercadorias (deafult: 2): ";
		cin >> nprecocompmerc;
		if (nprecocompmerc != -1000)
			nprecocompmerc = precocompmerc;
		cout << "Preco da venda de mercadorias (default: 3): ";
		cin >> nprecovendmerc;
		if (nprecovendmerc != -1000)
			nprecovendmerc = precovendmerc;
		cout << "Numero de soldados de um porto: (default: 100)";
		cin >> nsoldadosporto;
		if (nsoldadosporto != -1000)
			nsoldadosporto = soldadosporto;
		cout << "Probabilidade de ocorrer um evento num turno (default: 30%): ";
		cin >> nprobevento;
		if (nprobevento != -1000)
			nprobevento = probevento;
		cout << "Probabilidade de tempestade (default: 30%): ";
		cin >> nprobtempestade;
		if (nprobtempestade != -1000)
			nprobtempestade = probtempestade;
		cout << "Probabilidade de sereias (default: 30%): ";
		cin >> nprobsereias;
		if (nprobsereias != -1000)
			nprobsereias = probsereias;
		cout << "Probabilidade de calmaria (default: 20%): ";
		cin >> nprobcalmaria;
		if (nprobcalmaria != -1000)
			nprobcalmaria = probcalmaria;
		cout << "Probabilidade de motim (default: 20%): ";
		cin >> nprobmotim;
		if (nprobmotim != -1000)
			nprobmotim = probmotim;
		Mapa *map = new Mapa(nmoedas, nprobpirata, npreconavio, nprecosoldado, nprecovendpeixe, nprecocompmerc, nprecovendmerc, nsoldadosporto, nprobevento, nprobtempestade, nprobsereias, nprobcalmaria, nprobmotim, line, x, y);
		Interface inter(map);
		inter.corre();
	}
	else if (valor == 2)
	{
		string fmapa,fconf;
		cout << "Insira o nome do ficheiro do mapa: ";
		cin >> fmapa;
		cout << "Insira o nome do ficheiro das configuracoes: ";
		cin >> fconf;
	}
}
