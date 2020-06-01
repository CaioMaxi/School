#include <iostream>
using namespace std;
int main()
{
	int mat_num[3][4], multiplos_5=0, lin=0, col=0;
	for (lin=0;lin<=2;lin++)
	{
		for (col=0;col<=3;col++)
		{
			cout << "Informe o elemento que esta na " << lin+1 << "a linha da coluna " << col+1 << ": ";
			cin >> mat_num[lin][col];
			if (mat_num[lin][col]%5==0)
			{
				cout << "Este numero e multiplos de 5! \n";
				multiplos_5++;
			}
		}
	}
	cout << "---------------------------------------------------------------------------- \n";
	cout << "Analisando os elementos atribuidos a matriz, encontramos " << multiplos_5 << " multiplos de 5.";
}
