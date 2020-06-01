#include <iostream>
using namespace std;
int main()
{
	int idade;
	while (idade!=-1)
	{
		cout << "Informe sua idade: ";
		cin >> idade;
		if (idade>=7 && idade<=12)
		{
			cout << "A sua categoria e INFANTIL. \n";
		}
		else if (idade>=13 && idade<=17)
		{
			cout << "A sua categoria e JUVENIL. \n";
		}
		else if (idade>=18 && idade<=49)
		{
			cout << "A sua categoria e ADULTO. \n";
		}
		else if (idade>=50)
		{
			cout << "A sua categoria e SENIOR. \n";
		}
		else if (idade>=0 && idade<7)
		{
			cout << "Voce ainda e muito jovem para competir. \n";
		}
		else if (idade<-1)
		{
			cout << "ERRO. Idade INVALIDA. Tente novamente. \n";
		}
	}
}
