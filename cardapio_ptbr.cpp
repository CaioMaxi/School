#include <iostream>
using namespace std;
int main ()
{
	int numCar, qtd, decisao=1;
	float preco=0;
	char *item;
	bool invalido=false;
	cout << "*** CARDAPIO *** \n";
	cout << "100 - Hamburguer - R$ 5,50\n";
	cout << "101 - Cachorro-quente - R$ 4,50\n";
	cout << "102 - Milkshake - R$ 7,00\n";
	cout << "103 - Pizza brotinho - R$ 8,00\n";
	cout << "104 - Cheeseburguer - R$ 8,50\n";
	cout << "Informe o codigo do pedido: ";
	cin >> numCar;
	cout << "Informe a quantidade: ";
	cin >> qtd;
	while (decisao==1);
	{
		switch (numCar)
		{
			case 100: 
			preco=qtd*5.50; 
			item="Hamburguer";
			break;
			case 101: 
			preco=qtd*4.50; 
			item="Cachorro-quente";
			break;
			case 102: 
			preco=qtd*7.00; 
			item="Milkshake";
			break;
			case 103:
			preco=qtd*8.00; 
			item="Pizza brotinho";
			break;
			case 104: 
			preco=qtd*8.50; 
			item="Cheeseburguer";
			break;
			default: 
			cout << "ERRO. Este item nao esta no cardapio.";
			invalido=true;
		}
		cout << "Adicionar outro item? 1=S/2=N: ";
		cin >> decisao;
		if (decisao==1)
		{
			cout << "*** CARDAPIO *** \n";
			cout << "100 - Hamburguer - R$ 5,50\n";
			cout << "101 - Cachorro-quente - R$ 4,50\n";
			cout << "102 - Milkshake - R$ 7,00\n";
			cout << "103 - Pizza brotinho - R$ 8,00\n";
			cout << "104 - Cheeseburguer - R$ 8,50\n";
			cout << "Informe o codigo do pedido: ";
			cin >> numCar;
			cout << "Informe a quantidade: ";
			cin >> qtd;
		}
	}
	if (!invalido)
	cout << qtd << " x " << item << " = R$" << preco;
}
