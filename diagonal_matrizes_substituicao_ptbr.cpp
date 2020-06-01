#include <iostream>
using namespace std;
int main()
{
	int lin, col, M1[2][2], M2[2][2], troca;
	for (lin=0;lin<=1;lin++)
	{
		for (col=0;col<=1;col++)
		{
			cout << "MATRIZ 1 - Insira o elemento da linha " << lin+1 << ", coluna " << col+1 << ": ";
			cin >> M1[lin][col];
			cout << "MATRIZ 2 - Insira o elemento da linha " << lin+1 << ", coluna " << col+1 << ": ";
			cin >> M2[lin][col];
			if (lin==col)
			{
				troca=M1[lin][col];
				M1[lin][col]=M2[lin][col];
				M2[lin][col]=troca;
			}
		}
	}
	lin=0;
	col=0;
	cout << "DIAGONAL DE M1 \n";
	for (lin=0;lin<=1;lin++)
	{
		for (col=0;col<=1;col++)
		{
			if (lin==col)
			{
				cout << M1[lin][col] << "  ";
			}
			else
			{
			}
		}
	}
	cout << "\n";
	cout << "DIAGONAL DE M2 \n";
	for (lin=0;lin<=1;lin++)
	{
		for (col=0;col<=1;col++)
		{
			if (lin==col)
			{
				cout << M2[lin][col] << "  ";
			}
		}
	}
}
