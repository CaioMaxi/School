#include <iostream>
using namespace std;
int main()
{
	char gabarito[14], prova[14];
	int ind, ind_2, acertos=0, qtd_alunos=0;
	cout << "*** REGISTRO DE GABARITO *** \n";
	for (ind=0;ind<=14;ind++)
	{
		cout << "Informe a " << ind+1 << "a resposta: ";
		cin >> gabarito[ind];
	}
	cout << "------------------------------------------------------------\n";
	cout << "*** CHECAGEM DE ACERTOS *** \n";
	cout << "Informe a quantidade de alunos desta turma: ";
	cin >> qtd_alunos;
	for (ind=0;ind<qtd_alunos;ind++)
	{
		acertos=0;
		for (ind_2=0;ind_2<=14;ind_2++)
		{
			cout << "Insira a " << ind_2+1 << "a resposta do " << ind+1 << "o aluno: ";
			cin >> prova[ind_2];
			if (prova[ind_2]==gabarito[ind_2])
			{
				cout << "CERTO! \n";
				acertos++;
			}
			else
			{
				cout << "ERRADO! \n";
			}
		}
		cout << "O " << ind+1 << "o aluno acertou " << acertos << " questoes. \n";
		cout << "------------------------------------------------------------\n";
	}
	cout << "*** FIM DA CORRECAO *** \n";
}
