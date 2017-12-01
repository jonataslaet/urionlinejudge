#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
	int i, aux, tam, n, m, meio;
	char nome[102];
	scanf("%d", &n);
	getchar();
	for (i = 0; i < n; i++)
	{
		gets(nome);
		tam = strlen(nome);
		meio = (tam / 2) - 1;
		if (tam % 2 != 0) meio++;
		aux = meio+1;
		//Mostra do meio pra trás
		for (m = meio; m >= 0; m--) cout << nome[m];
		for (m = tam-1; m >= aux; m--) cout << nome[m];
		cout << endl;
	}
	return 0;
}