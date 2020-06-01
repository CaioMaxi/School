#include <iostream>
using namespace std;
int main()
{
	int num, result;
	cout << "Informe um numero: ";
	cin >> num;
	result=num%2;
	if (result==0)
	{
		cout << num << " e par!";
	}
	else
	{
		cout << num << " e impar!";
	}
}
