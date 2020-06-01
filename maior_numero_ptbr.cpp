#include <iostream>
using namespace std;
int main ()
{
	float num, cont=0, maior;
	for (cont=1;cont<=15;cont++)
	{
		cout << "Informe o " << cont << "o numero real ";
		cin >> num;
		if (num>=maior)
		{
			maior=num;
		}
	}
	cout << "O maior numero de todos os informados foi o numero " << maior;
}
