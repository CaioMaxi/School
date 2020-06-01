#include <iostream>
using namespace std;
int main()
{
	int idade;
	bool verdadeiro;
	verdadeiro=true;
	cout << "Informe a idade do competidor: ";
	cin >> idade;
	do
	{
		if (idade!=-1)
		{
			if (idade>=7 && idade<=12)
			{
				cout << "Esse competidor e da categoria INFANTIL. \n";
			}
			else if (idade>=13 && idade<=17)
			{
				cout << "Esse competidor e da categoria JUVENIL. \n";
			}
			else if (idade>=18 && idade<=49)
			{
				cout << "Esse competidor e da categoria ADULTO. \n";
			}
			else if (idade>=50)
			{
				cout << "Esse competidor e da categoria SENIOR. \n";
			}
			else if (idade>=0 && idade<7)
			{
				cout << "Esse competidor e jovem demais para competir no Hipismo. \n";
			}
			else
			{
				cout << "ESSA IDADE E INVALIDA. TENTE NOVAMENTE. \n";
			}
		cout << "Informe a idade do competidor: ";
		cin >> idade;
		}
	} while (idade!=-1);
}
