#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define V 2000

int grafo[V][V];
int visitados[V];
int pilha[V];
int tam_pilha = 0;

void liga(int v1, int v2)
{
	grafo[v1 - 1][v2 - 1] = 1;
	//grafo[v2 - 1][v1 - 1] = 1;
}


void dfs (int v, int e)
{
	int i;
	visitados[v] = 1;
	for (i = 0; i < e; i++)
	{
		if (grafo[v][i] == 1 && visitados[i] == -1) dfs(i, e);
	}
}

int main()
{
	int v, e, l, x, y, i, z, p;
	int conectado;

	for (z = 1;; z++)
	{
		//Preenche
		memset(grafo, -1, sizeof(grafo));

		scanf("%d %d", &e, &l);
		if (e == 0 && l == 0) break;
		else
		{
			for (i = 0; i < l; i++)
			{
				scanf("%d %d %d", &x, &y, &p);
				if (p == 1) liga(x, y);
				else
				{
					liga(x, y);
					liga(y, x);
				}
			}
			conectado = 1;
			for(i = 0; i < e; i++)
			{
				memset(visitados, -1, sizeof(visitados));
				memset(pilha, -1, sizeof(pilha));
				dfs(i, e);//preenche com 1 todos os vértices visitáveis a partir de i
				for (v = 0; v < e; v++)//percorre todos os visitados
				{
					if (visitados[v] == -1)//verifica se teve algum que não foi visitado a partir de i
					{
						conectado = 0;
						break;
					}
				}
				if (conectado == 0) break;
			}

		}
		printf("%d\n", conectado);
	}

	return 0;
}
