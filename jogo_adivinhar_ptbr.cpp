#include <iostream>
using namespace std;
int main()
{
	int numeros[9], ind, tent=0, num;
	bool achou=false;
	cout << "*** Rodada do PRIMEIRO JOGADOR *** \n";
	for (ind=0;ind<=9;ind++)
	{
		cout << "Informe o " << ind+1 << "o numero para ser armazenado: ";
		cin >> numeros[ind];
	}
	cout << "*** Rodada do SEGUNDO JOGADOR *** \n";
	cout << "Tente adinhar um numero armazenado pelo PRIMEIRO JOGADOR: ";
	cin >> num;
	tent=1;
	ind=0;
	while (!achou && tent<3)
	{
		while (!achou && ind<=9)
		{
			if (numeros[ind]==num)
			{
				achou=true;
			}
			ind++;
		}
		if (!achou)
		{
			tent++;
			cout << "Numero nao encontrado. \n";
			cout << "Tentativa " << tent << " - Tente adinhar um numero armazenado pelo PRIMEIRO JOGADOR: ";
			cin >> num;
			ind=0;
		}
	}
	if (achou)
	{
		cout << "Parabens! Este numero esta na posicao " << ind << " do vertor. Voce usou " << tent << " tentativas.";
	}
	else
	{
		cout << "Que pena. Voce nao acertou...";
	}
}
