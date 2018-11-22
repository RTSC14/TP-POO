#pragma once
class Mapa
{
	jogador *jog = new jogador(nmoedas);

	public:
		static int id_mapa;
		int colunas, linhas;
		void carregaMapa();
		void compranav();
		Mapa();
		~Mapa();
};

