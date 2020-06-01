#include <iostream>
using namespace std;
int main ()
{
	int cont=0, qtd=0, num;
	for (cont=1;cont<=10;cont++)
	{
		cout << "Informe o " << cont << "o numero para saber se ele e multiplo de 3: ";
		cin >> num;
		if (num%3==0)
		{
			cout << "O numero " << num << " e multiplo de 3!\n";
			qtd++;
		}
		else
		{
			cout << "O numero " << num << " nao e multiplo de 3.\n";
		}
	}
	cout << "De todos os numeros informados " << qtd << " deles sao multiplos de 3.";
}
