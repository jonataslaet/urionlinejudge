#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string anterior, atual, language;
	int n, k, idioma;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		idioma = 0;
		for (int j = 0; j < k; j++)
		{
			cin >> atual;
			if (j == 0)
			{
				anterior = atual;
			}
			else
			{
				if (idioma != 2 && atual == anterior){
					language = atual;
					anterior = atual;
					idioma = 1;
				}
				else
				{
					idioma=2;
				}
			}
		}
		if (idioma == 2) cout << "ingles" << endl;
		else cout << language << endl;
	}
	return 0;
}