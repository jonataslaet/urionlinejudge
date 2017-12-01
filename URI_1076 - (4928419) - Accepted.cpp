#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#include <iostream>
#define V 100

int grafo[V][V];
int visitados[V];
int pilha[V];
int tam_pilha = 0;
int cont = 0;

void liga(int v1, int v2)
{
	grafo[v1][v2] = 1;
	grafo[v2][v1] = 1;
}


void dfs (int v, int e)
{
	int i;
	visitados[v] = 1;
	for (i = 0; i < e; i++)
	{
		if (grafo[v][i] == 1 && visitados[i] == -1)
		{
			cont++;
			dfs(i, e);
		}
	}
}

int main()
{
	int v, a, x, y, t, inicio;
	scanf("%d", &t);
	for(int z = 0; z < t; z++)
	{
		cont = 0;
		//Preenche com negativo
		memset(grafo, -1, sizeof(grafo));
		memset(visitados, -1, sizeof(visitados));
		memset(pilha, -1, sizeof(pilha));
		scanf("%d", &inicio);
		scanf("%d %d", &v, &a);
		for (int i = 0; i < a; i++)
		{
			scanf("%d %d", &x, &y);
			liga(x, y);
		}
		//Visita, a partir de inicio, todos os vértices possíveis e os marca em visitados
		dfs(inicio, v);
		cont *= 2;
		printf("%d\n", cont);
	}

	return 0;
}