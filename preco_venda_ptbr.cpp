#include <iostream>
using namespace std;
int main()
{
	float precocomp, precovend;
	cout << "Insira o valor pago pelo produto: ";
	cin >> precocomp;
	precovend=precocomp+(precocomp*20/100);
	cout << "O preco sugerido para a venda do produto e R$ " << precovend;
}

