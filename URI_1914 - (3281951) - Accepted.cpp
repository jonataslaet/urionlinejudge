#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
	string nome1, nome2;
	string escolha1, escolha2;
	int qt, m, n, soma = 0;
	cin >> qt;
	for (int i = 0; i < qt; i++)
	{
		cin >> nome1 >> escolha1 >> nome2 >> escolha2;
		cin >> m >> n;
		soma = m + n;
		if ((escolha1 == "PAR" && soma % 2 == 0) || (escolha1 == "IMPAR" && soma % 2 != 0))
		{
			cout << nome1 << endl;
		}
		else cout << nome2 << endl;
	}
	
	return 0;
}