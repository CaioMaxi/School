#include <iostream>
using namespace std;
int main()
{
	int cont, qtd_par=0, qtd_impar=0, limit, num;
	cout << "Informe quantos numeros voce quer informar: ";
	cin >> limit;
	for (cont=1;cont<=limit;cont++)
	{
		cout << "Informe o " << cont << "o numero: ";
		cin >> num;
		if (num%2==0)
		{
			cout << "Este numero e PAR!\n";
			qtd_par++;
		}
		else
		{
			cout << "Este numero e IMPAR!\n";
			qtd_impar++;
		}
	}
	cout << "Foram informados " << qtd_par << " numeros pares e " << qtd_impar << " numeros impares.";
}
