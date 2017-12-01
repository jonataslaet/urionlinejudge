#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int bb (int x, int e, int d, int v[])
{
	if (e > d) return -1;
	else
	{
		int m = (e + d) / 2;
		if (v[m] == x) return m;
		if (v[m] < x)
			return bb (x, m + 1, d, v);
		else
			return bb (x, e, m - 1, v);
	}
}

int buscaBinaria2 (int num, int ind, int v[])
{
	return bb (num, 0, ind - 1, v);
}

int main()
{
	int n, oQueSobrou, i;
	float aux;
	int ok, quadrados[101];

	//Vetor com todos os quadrados perfeitos entre 0 e 10000
	for (i = 0; i <= 100; i++) quadrados[i] = i * i;

	//[01] captura o número e guarda em N
	while(scanf("%d", &n) != EOF)
	{
		ok = 0;
		//[02] Repete de N até 0
		for (i = n; i >= 0; i--)
		{
			//[03] Subtrai de N o quadrado de i
			oQueSobrou = n - (i * i);
			//[04] Verifica se oQueSobrou está dentro do vetor quadrados
			if (buscaBinaria2(oQueSobrou, 101, quadrados) != -1)
			{
				//[05] Se achar, seto o ok como 1 e saio do laço
				ok = 1;
				break;
			}
		}
		if (ok == 1) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}