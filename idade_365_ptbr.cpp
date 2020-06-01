#include <iostream>
using namespace std;
int main()
{
	float dias, idade;
	cout << "Quantos dias voce ja viveu? ";
	cin >> dias;
	idade=dias/365;
	cout << "Voce tem " << idade << " anos.";
	if (idade>=18)
	{
		cout << " Voce ja e maior de idade.";
	}
	else
	{
		cout << " Voce ainda nao e maior de idade.";
	}
}
