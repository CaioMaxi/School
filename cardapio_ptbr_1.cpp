#include <iostream>
using namespace std;
int main()
{
	int num_ped, qtd;
	float preco=0;
	char continuar, *item;
	continuar='S';
	cout << "*** CARDAPIO ***\n";
	cout << "100 - Hamburguer - R$ 5.50\n";
	cout << "101 - Cachorro-quente - R$ 4.50\n";
	cout << "102 - Milkshake - R$ 7.00\n";
	cout << "103 - Pizzar brotinho - R$ 8.00\n";
	cout << "104 - Cheeseburguer - R$ 8.50\n";
	cout << "Informe o codigo do seu pedido: ";
	cin >> num_ped;
	cout << "Informe a quantidade ";
	cin >> qtd;
	while (continuar=='S')
	{
		switch (num_ped)
		{
			case 100:
			item="Hamburguer";
			preco+=qtd*5.50;
			break;
			case 101:
			item="Cachorro-quente";
			preco+=qtd*4.50;
			break;
			case 102:
			item="Milkshake";
			preco+=qtd*7.00;
			break;
			case 103:
			item="Pizza brotinho";
			preco+=qtd*8.00;
			break;
			case 104:
			item="Cheeseburguer";
			preco+=qtd*8.50;
			break;
		}
		cout << "Deseja pedir algo mais? (S/N) ";
		cin >> continuar;
		if (continuar=='S')
		{
			cout << "Informe o codigo do seu pedido: ";
			cin >> num_ped;
			cout << "Informe a quantidade ";
			cin >> qtd;
		}
		else
		{
			cout << "PEDIDO ENCERRADO. \n";
		}
	}
	cout << "O valor total do pedido foi R$" << preco;
}
