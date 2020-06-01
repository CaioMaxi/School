#include <iostream>
using namespace std;
int main()
{
	int desenha, linha, total;
	cout << "Quantas linhas o triangulo de asteriscos tera? ";
	cin >> total;
	for (linha=1;linha<=total;linha++)
	{
		cout << "\n";
		for (desenha=1;desenha<=linha;desenha++)
		{
			cout << "*";
		}
	}
}
