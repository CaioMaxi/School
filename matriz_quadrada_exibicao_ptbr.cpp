#include <iostream>
using namespace std;
int main ()
{
	int lin, col;
	float M[4][4];
	for (lin=0;lin<=3;lin++)
	{
		for (col=0;col<=3;col++)
		{
			cout << "Armazene um elemento na linha " << lin+1 << ", coluna " << col+1 << ": ";
			cin >> M[lin][col];
		}
	}
	cout << "Qual linha da matriz voce quer visualizar: ";
	cin >> lin;
	lin--;
	for (col=0;col<=3;col++)
	{
		cout << M[lin][col] << "  ";
	}
}
