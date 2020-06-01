#include <iostream>
using namespace std;
int main()
{
	float num;
	cout << "Informe um numero qualquer: ";
	cin >> num;
	if (num>0)
	{
		cout << num << " e positivo.";
	}
	if (num==0)
	{
		cout << num << " e nulo.";
	}
	if (num<0)
	{
		cout << num << " e negativo.";
	}
}
