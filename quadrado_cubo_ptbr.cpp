#include <iostream>
using namespace std;
int main()
{
	float num1, square, cube;
	cout << "Insira um numero para o calculo de seu quadrado e cubo: ";
	cin >> num1;
	square=num1*num1;
	cube=square*num1;
	cout << "O quadrado de " << num1 << " e " << square << ", e seu cubo e " << cube;
}
