#include <iostream>
using namespace std;
int main ()
{
	int num, cont, fatorial;
	cout << "Insira um numero inteiro qualquer que deseja saber o fatorial: ";
	cin >> num;
	cout << num;
	fatorial=num;
	for (cont=num;cont>1;cont--)
	{
		cout << "x";
		fatorial*=cont-1;
		cout << cont-1;
	}
	cout << "=" << fatorial;
}
