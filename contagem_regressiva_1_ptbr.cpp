#include <iostream>
using namespace std;
int main()
{
	int cont;
	cout << "Informe o numero de partida da contagem regressiva: ";
	cin >> cont;
	do
	{
		cout << cont << "\n";
		cont--;
	} while (cont>-1);
	cout << "BOOM! =)";
}
