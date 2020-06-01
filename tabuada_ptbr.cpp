#include <iostream>
using namespace std;
int main()
{
	float num, res;
	int cont; cont=0;
	cout << "Informe o numero no qual deseja ver a tabuada: ";
	cin >> num;
	do
	{
		res=num*cont;
		cout << num << "x" << cont << "=" << res << "\n";
		cont++;
	} while (cont<=10);
}
