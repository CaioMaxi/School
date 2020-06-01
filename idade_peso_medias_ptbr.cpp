#include <iostream>
using namespace std;
int main()
{
	float peso, medpeso, soma_peso;
	int idade, medidade, numEnt, soma_idade;
	idade=10;
	numEnt=0;
	soma_peso=0;
	soma_idade=0;
	cout << "Informe sua idade: ";
	cin >> idade;
	while (idade!=0)
	{
		cout << "Informe seu peso em kilogramas: ";
		cin >> peso;
		numEnt++;
		soma_peso+=peso;
		soma_idade+=idade;
		cout << "----------------------------------------------------- \n";
		cout << "Proximo entrevistado! \n";
		cout << "Informe sua idade: ";
		cin >> idade;
	}	
	if (idade==0)
	{
		medpeso=soma_peso/numEnt;
		medidade=soma_idade/numEnt;
		cout << "Foram entrevistados " << numEnt << " pessoas, a media do peso foi " << medpeso << "Kg e media de idades foi de " << medidade << " anos.";
	}
}

