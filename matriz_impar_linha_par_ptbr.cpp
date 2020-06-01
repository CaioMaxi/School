#include <iostream>
using namespace std;
int main ()
{
	int lin, col, M[3][2], qtd_i=0;
	for (lin=0;lin<=2;lin++)
	{
		for (col=0;col<=1;col++)
		{
			cout << "Armazene um numero na linha " << lin+1 << ", coluna " << col+1 << ": ";
			cin >> M[lin][col];
			if ((lin+1)%2==0 && M[lin][col]%2==1)
			{
				cout << "Elemento impar em linha par DETECTADO! \n";
				qtd_i++;
			}
		}
	}
	cout << "Voce armazenou " << qtd_i << " elementos impares em linhas pares.";
}
