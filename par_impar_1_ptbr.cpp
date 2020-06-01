#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Informe um numero qualquer: ";
	cin >> num;
	while (num!=-1)
	{
		if (num%2==0)
		{
			cout << "Este numero e par!\n";
		}
		else
		{
			cout << "Este numero e impar!\n";
		}
		cout << "Informe um numero qualquer: ";
		cin >> num;
	}
}
