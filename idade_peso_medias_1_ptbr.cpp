#include <iostream>
using namespace std;
int main()
{
	int idade, soma_idade, med_idade, num_ent;
	float peso, soma_peso, med_peso;
	bool entrevistou=true;
	num_ent=0;
	soma_peso=0;
	soma_idade=0;
	cout << "Informe o peso do entrevistado em kilogramas: \n";
	cin >> peso;
	do
	{
		if (peso!=0)
		{
			soma_peso+=peso;
			cout << "Informe a idade do entrevistado: \n";
			cin >> idade;
			soma_idade+=idade;
			num_ent++;
			cout << "----------------------------------------------------------------\n";
			cout << "Informe o peso do entrevistado em kilogramas: \n";
			cin >> peso;
		}
		else
		{
			entrevistou=false;
		}
	} while (peso!=0);
		if (entrevistou=true)
		{
		med_idade=soma_idade/num_ent;
		med_peso=soma_peso/num_ent;
		cout <<  "Foram entrevistados " << num_ent << ", o peso medio deles foi de " << med_peso << "Kg e a media das idades foi " << med_idade;
		}	
}
