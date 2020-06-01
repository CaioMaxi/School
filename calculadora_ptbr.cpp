#include <iostream>
using namespace std;
int main()
{
	float num1, num2, result;
	int op;
	cout << "Informe o primeiro numero: ";
	cin >> num1;
	cout << "Informe o segundo numero: ";
	cin >> num2;
	cout << "--------------------------------------------\n";
	cout << "Escolha a operacao matematica: \n";
	cout << "1 - Adicao\n";
	cout << "2 - Subtracao\n";
	cout << "3 - Multiplicacao\n";
	cout << "4 - Divisao\n";
	cout << "Opcao: ";
	cin >> op;
	if (op==1)
	{
		result=num1+num2;
		cout << num1 << "+" << num2 << "=" << result;
	}
	else if (op==2)
	{
		result=num1-num2;
		cout << num1 << "-" << num2 << "=" << result;
	}
	else if (op==3)
	{
		result=num1*num2;
		cout << num1 << "*" << num2 << "=" << result;
	}
	else if (op==4)
	{
		result=num1/num2;
		cout << num1 << "/" << num2 << "=" << result;
	}
	else
	{
		cout << "Opcao invalida!";
	}
}
