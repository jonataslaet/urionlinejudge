#include <stdio.h>
#define INF 9999999
#define MAXN 501

int adj[MAXN][MAXN];
int dist[MAXN];
int vis[MAXN];

int menor(int a, int b)
{
	return a < b ? a : b;
}

int dijkstra(int qtdVertices, int origem, int destino)
{
	//preencheMatrizComValorX(adj, INF);
	int no;
	/********** Comeco do dijkstra ***************/
	int i;
	//Marca cada nó como não-visitado e cada distancia como INF
	for (i = 0; i < qtdVertices; i++)
	{
		dist[i] = INF;
		vis[i] = 0;
	}
	//A distancia do nó origem até ele mesmo é zero
	dist[origem] = 0;
	//Marca nó de origem como visitado
	vis[origem] = 1;
	no = origem;
	while(1)
	{
		for (i = 0; i < qtdVertices; i++)
		{
			if (vis[i] == 0)
			{
				dist[i] = menor(dist[i], dist[no] + adj[no][i]);
			}
		}
		int minimo = INF,  indice;
		for (i = 0; i < qtdVertices; i++)
		{
			if (vis[i] == 0 && dist[i] < minimo)
			{
				minimo = dist[i];
				indice = i;
			}
		}
		if (minimo < INF)
		{
			no = indice;
			dist[no] = minimo;
			vis[no] = 1;
		}
		else
			break;
	}
	return dist[destino];
}
int main()
{
	int mat[MAXN][MAXN];
	int orig, dest, i, j, n, e, x, y, h;
	while(1)
	{
		scanf("%d %d", &n, &e);
		if (n == 0 && e == 0) break;
		else
		{
			//Preenche a matriz de "pesos" com um valor "INFINITO"
			for (i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					adj[i][j] = INF;
					mat[i][j] = -1;
				}
			}

			//Para cada aresta
			for (i = 0; i < e; i++)
			{
				//Captura o vértice X, o vértice Y e a distância entre os dois
				scanf("%d %d %d", &x, &y, &h);
				//Captura a distância de X para Y
				mat[x - 1][y - 1] = h;
			}

			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if (mat[i][j] != -1)
					{
						if (mat[j][i] != -1)
						{
							adj[i][j] = 0;
						}
						else
						{
							adj[i][j] = mat[i][j];
						}
					}
				}
			}

			int custoMinimo = 0, k;
			//Captura a quantidade de pares de cidades
			scanf("%d", &k);
			for (i = 0; i < k; i++)
			{
				//Captura cada par
				scanf("%d %d", &orig, &dest);
				custoMinimo = dijkstra(n, orig - 1, dest - 1);
				if (custoMinimo < INF)
				{
					printf("%d\n", custoMinimo);
				}
				else
				{
					printf("Nao e possivel entregar a carta\n");
				}
			}
			printf("\n");
		}
	}

	return 0;
}