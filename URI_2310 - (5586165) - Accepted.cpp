#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string nome;
	int t, s, b, a, s1, b1, a1, somaA1 = 0, somaB1 = 0, somaS1 = 0;
	int somaS = 0, somaB = 0, somaA = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		cin >> nome;
		scanf("%d %d %d", &s, &b, &a);
		somaS += s; somaB += b; somaA += a;
		scanf("%d %d %d", &s1, &b1, &a1);
		somaS1 += s1; somaB1 += b1; somaA1 += a1;
	}
	printf("Pontos de Saque: %.2lf %%.\n", (((double)somaS1)/((double)somaS))*100);
	printf("Pontos de Bloqueio: %.2lf %%.\n", (((double)somaB1)/((double)somaB))*100);
	printf("Pontos de Ataque: %.2lf %%.\n", (((double)somaA1)/((double)somaA))*100);
	return 0;
}