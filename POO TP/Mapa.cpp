#include "Lib.h"

void Mapa::carregaMapa()
{
	string line;

	ifstream input_file("exemplo.txt");
	do
	{
		getline(input_file, line);
		cout << line;
	} while (getline(input_file, line));
}
