#include <iostream>
using namespace std;
int main ()
{
	int cont;
	cout << "Informe o numero de partida da contagem regressiva: ";
	cin >> cont;
	while (cont>-1)
	{
		cout << cont << "\n";
		cont--;
	}
	cout << "BOOM! =)";
}
