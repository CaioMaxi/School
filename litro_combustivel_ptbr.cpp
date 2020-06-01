#include <iostream>
using namespace std;
int main()
{
	float valComb, din, litro;
	cout << "Quanto custa o litro do combustivel? ";
	cin >> valComb;
	cout << "Quanto voce vai pagar? ";
	cin >> din;
	litro=din/valComb;
	cout << "Voce vai abastecer " << litro << " litros com R$" << din;
}
