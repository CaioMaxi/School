#include <iostream>
using namespace std;
int main()
{
	float l1, l2, l3;
	cout << "Informe o comprimento de um lado em centimetros: ";
	cin >> l1;
	cout << "Informe o comprimento de um segundo lado em centimetros: ";
	cin >> l2;
	cout << "Informe o comprimento do terceiro lado em centimetros: ";
	cin >> l3;
		if (l1==l2 && l2==l3)
	{
		cout << "O triangulo e EQUILATERO.";
	}
	else if (l1!=l2 && l2!=l3 && l1!=l3)
	{
		cout << "O triangulo e ISOSCELES.";
	}
	else
	{
		cout << "O triangulo e ESCALENO.";
	}
}
