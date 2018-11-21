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
		string fmapa,
		    nmoedas,
			nprobpirata,
			npreconavio,
			nprecosoldado,
			nprecovendpeixe,
			nprecocompmerc,
			nprecovendmerc,
			nsoldadosporto,
			nprobevento,
			nprobtempestade,
			nprobsereias,
			nprobcalmaria,
			nprobmotim;
		cout << "Insira o nome do ficheiro do mapa: ";
		cin >> fmapa;
		cout << "CONFIGURACAO" << endl;
		fflush(stdin);
		cout << "Numero de moedas iniciais (default: 1000): ";
		getline(cin, nmoedas);
		if (nmoedas.compare("") == 0)
			nmoedas = moedas;
		cout << "Probabilidade de surgir um barco pirata num turno (default: 20%): ";
		getline(cin, nprobpirata);
		if (nprobpirata.compare("") == 0)
			nprobpirata = probpirata;
		cout << "Preco dos navios (default: 100): ";
		getline(cin, npreconavio);
		if (npreconavio.compare("") == 0)
			npreconavio = preconavio;
		cout << "Preco dos soldados (default: 1): ";
		getline(cin, nprecosoldado);
		if (nprecosoldado.compare("") == 0)
			nprecosoldado = precosoldado;
		cout << "Preco da venda de mercadoria (default: 1): ";
		getline(cin, nprecovendmerc);
		if (nprecovendpeixe.compare("") == 0)
			nprecovendpeixe = precovendpeixe;
		cout << "Preco da compra de mercadorias (deafult: 2): ";
		getline(cin, nprecocompmerc);
		if (nprecocompmerc.compare("") == 0)
			nprecocompmerc = precocompmerc;
		cout << "Preco da venda de mercadorias (default: 3): ";
		getline(cin, nprecovendmerc);
		if (nprecovendmerc.compare("") == 0)
			nprecovendmerc = precovendmerc;
		cout << "Numero de soldados de um porto: (default: 100)";
		getline(cin, nsoldadosporto);
		if (nsoldadosporto.compare("") == 0)
			nsoldadosporto = soldadosporto;
		cout << "Probabilidade de ocorrer um evento num turno (default: 30%): ";
		getline(cin, nprobevento);
		if (nprobevento.compare("") == 0)
			nprobevento = probevento;
		cout << "Probabilidade de tempestade (default: 30%): ";
		getline(cin, nprobtempestade);
		if (nprobtempestade.compare("") == 0)
			nprobtempestade = probtempestade;
		cout << "Probabilidade de sereias (default: 30%): ";
		getline(cin, nprobsereias);
		if (nprobsereias.compare("") == 0)
			nprobsereias = probsereias;
		cout << "Probabilidade de calmaria (default: 20%): ";
		getline(cin, nprobcalmaria);
		if (nprobcalmaria.compare("") == 0)
			nprobcalmaria = probcalmaria;
		cout << "Probabilidade de motim (default: 20%): ";
		getline(cin, nprobmotim);
		if (nprobmotim.compare("") == 0)
			nprobmotim = probmotim;
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
