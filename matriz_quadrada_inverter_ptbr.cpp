#include <iostream>
using namespace std;
int main()
{
	int M[4][4],M2[4][4], lin, col;
	for (lin=0;lin<=3;lin++)
	{
		for (col=0;col<=3;col++)
		{
			cout << "Armazene um numero na linha " << lin+1 << ", coluna " << col+1 << ": ";
			cin >> M[lin][col];
			M2[col][lin]=M[lin][col];
		}
	}
	for (lin=0;lin<=3;lin++)
	{
		for (col=0;col<=3;col++)
		{
			cout << M2[lin][col] << "  ";
		}
		cout << "\n";
	}
}
