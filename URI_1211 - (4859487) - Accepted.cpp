#include <iostream>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;

int compare (const void *x, const void *y)
{
	return *((string *) x) > *((string *) y);
}
int main(int argc, char *argv[])
{
	int qtdCont, i, k, N, tAnt, tAtual, cont;
	string num[100001];
	string atual, anterior;
	while(cin >> N)
	{
		for(i = 0; i < N; i++)
		{
			cin >> num[i];
		}
		qsort(num, N, sizeof(string), compare);
		cont = 0;
		qtdCont = 0;
		anterior = num[0];
		tAnt = num[0].size();
		for(i = 1; i < N; i++)
		{
			atual = num[i];
			tAtual = num[i].size();
			//cout << "Anterior = " << anterior << endl;
			//cout << "Atual = " << atual << endl;
			while(tAnt > 0 && tAtual > 0)
			{
				if (anterior[tAnt - 1] == atual[tAtual - 1])
				{
					cont++;
				}
				else
				{
					cont = 0;
				}
				tAnt--;
				tAtual--;
			}
			qtdCont += cont;
			anterior = atual;
			tAnt = anterior.size();
		}
		cout << qtdCont << endl;
	}
	return 0;
}