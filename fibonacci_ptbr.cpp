#include <iostream>
using namespace std;
int main ()
{
	int fibonacci=0, termo_anterior=0, termo_atual=1, cont, qtd;
	cout << "Quantos numeros da sequencia de Fibonacci voce deseja ver? ";
	cin >> qtd;
	cout << "Os termos sao:\n" << termo_anterior << "\n" << termo_atual	<< "\n";
	for (cont=1;cont<=qtd-2;cont++)
	{
		fibonacci=termo_anterior+termo_atual;
		termo_anterior=termo_atual;
		termo_atual=fibonacci;
		cout << fibonacci << "\n";
	}
}
