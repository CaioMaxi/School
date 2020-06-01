#include <iostream>
using namespace std;
int main ()
{
	int par_a[9], impar_b[9], cont, venceu_a=0, venceu_b=0, soma;
	for (cont=0;cont<=9;cont++)
	{
		cout <<"Informe o " << cont+1 <<" numero escolhido pelo JOGADOR A: ";
		cin >> par_a[cont];
		cout <<"Informe o " << cont+1 <<" numero escolhido pelo JOGADOR B: ";
		cin >> impar_b[cont];
		soma=par_a[cont]+impar_b[cont];
		if (soma%2==0)
		{
			cout << "O JOGADOR A venceu! \n";
			venceu_a++;
		}
		else
		{
			cout << "O JOGADOR B venceu! \n";
			venceu_b++;
		}
	}
	cout << "-----------------------------------------------------------------------------------------------\n";
	cout << "*** RESULTADO *** \n";
	cout << "O JOGADOR A venceu " << venceu_a << " vezes e o JOGADOR B venceu " << venceu_b << " vezes.";
}
