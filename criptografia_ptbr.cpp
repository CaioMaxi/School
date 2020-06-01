#include <iostream>
using namespace std;
int main()
{
	int cont, contrario=19;
	char vet1[19], vet2[19];
	cout << "*** VETOR 1 ***\n";
	for (cont=0;cont<=19;cont++)
	{
		cout << "Informe a " << cont+1 << "a letra do VETOR 1: ";
		cin >> vet1[cont];
		vet2[contrario]=vet1[cont];
		contrario--;
	}
	for (cont=0;cont<=19;cont++)
	{
		cout << "O " << cont+1 << "o elemento e: " << vet2[cont] << "\n";
	}
}
