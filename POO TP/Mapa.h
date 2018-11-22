#pragma once
class Mapa
{
	jogador *jog;

	public:
		static int id_mapa;
		int colunas, linhas;
		void carregaMapa();
		void compranav();
		Mapa();
		~Mapa();
};

