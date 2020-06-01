#include <iostream>
using namespace std;
int main()
{
	int numMes;
	char *mesext;
	bool invalido=false;
	cout << "Informe o numero do mes: ";
	cin >> numMes;
	switch (numMes)
	{
		case 1: mesext="Janeiro"; break;
		case 2: mesext="Fevereiro"; break;
		case 3: mesext="Marco"; break;
		case 4: mesext="Abril"; break;
		case 5: mesext="Maio"; break;
		case 6: mesext="Junho"; break;
		case 7: mesext="Julho"; break;
		case 8: mesext="Agosto"; break;
		case 9: mesext="Setembro"; break;
		case 10: mesext="Outubro"; break;
		case 11: mesext="Novembro"; break;
		case 12: mesext="Dezembro"; break;
		default: cout << "Mes invalido.";
		invalido=true;
	}
	if (!invalido)
	{
		cout << "O numero " << numMes << " equivale ao mes de " << mesext;
	}
}
