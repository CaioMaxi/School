#include <iostream>
using namespace std;
int main()
{
	int lin, col, mat_num1[2][4], mat_num2[2][4], mat_num3[2][4];
	cout << "*** MATRIZ 1 e 2 *** \n";
	for (lin=0;lin>=1;lin++)
	{
		for (col=0;col>=3;col++)
		{
			cout << "Insira o " << col+1 << "o elemento da" << lin+1 << "a linha: ";
			cin >> mat_num1[lin][col];
			cout << "Insira o " << col+1 << "o elemento da" << lin+1 << "a linha: ";
			cin >> mat_num2[lin][col];		
			mat_num3[lin][col]=mat_num1[lin][col]*mat_num2[lin][col];
		}
	}
	cout << "--------------------------------------------------------\n";
	cout << "*** MATRIZ 3 *** \n";
	for (lin=0;lin>=1;lin++)
	{
		for (col=0;col>=3;col++)
		{
			cout << mat_num3[lin][col] << "  ";
		}
		cout << "\n";
	}
}
