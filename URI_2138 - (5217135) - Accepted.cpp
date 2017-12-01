#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <iomanip>
#include <vector>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	string numstring;
	int t, qtdMaisFrequente;
	int digitoMaisFrequente;
	int digito, qtdDigito[11];
	while(cin >> numstring)
	{
		memset(qtdDigito, 0, sizeof(qtdDigito));
		t = numstring.size();
		digito = numstring[0] - '0';
		digitoMaisFrequente = numstring[0] - '0';
		qtdMaisFrequente = 1;
		for(int i = 0; i < t; i++)
		{
			digito = numstring[i] - '0';
			qtdDigito[digito]++;
			if (qtdDigito[digito] > qtdMaisFrequente)
			{
				qtdMaisFrequente = qtdDigito[digito];
				digitoMaisFrequente = digito;
			}
			else if (qtdDigito[digito] == qtdMaisFrequente)
			{
				if (digitoMaisFrequente < digito)
				{
					digitoMaisFrequente = digito;
				}
			}
			//printf("%d", (numint));
		}
		printf("%d\n", digitoMaisFrequente);
	}
	return 0;
}