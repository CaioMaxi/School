#include <iostream>
using namespace std;
int main()
{
	int ind, dado[19], num1=0, num3=0, num5=0;
	for (ind=0;ind<=19;ind++)
	{
		cout << "Informe qual e o " << ind+1 << " resultado do dado: ";
		cin >> dado[ind];
	}
	for (ind=0;ind<=19;ind++)
	{
		switch (dado[ind])
		{
			case 1:
				num1++; 
				break;
			case 3:
				num3++; 
				break;
			case 5:
				num5++; 
				break;
		}
	}
	cout << "A face 1 foi sorteada " << num1 << " vezes. \n";
	cout << "A face 3 foi sorteada " << num3 << " vezes. \n";
	cout << "A face 5 foi sorteada " << num5 << " vezes. \n";
}
