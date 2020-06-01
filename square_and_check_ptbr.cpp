#include <iostream>
using namespace std;
int main()
{
	float square, num;
	cout << "Insira um numero para que seu quadrado seja calculado: ";
	cin >> num;
	square=num*num;
	cout << "O quadrado de " << num << " e " << square;
	if(square>25)
	{
		cout << ", e maior que 25!";
	}
}
