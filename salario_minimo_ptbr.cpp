#include <iostream>
using namespace std;
int main()
{
	float salario;
	cout << "Insira o valor do salario: ";
	cin >> salario;
	if (salario>1000)
	{
		cout << "O salario de R$ " << salario << " e maior que o salario minimo.";
	}
	if (salario<1000)
	{
		cout << "O salario de R$ " << salario << " e menor que o salario minimo.";
	}
	if (salario==1000)
	{
		cout << "O salario e igual ao salario minimo.";
	}
}
