#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define V 100

int grafo[V][V];
int visitados[V];
int pilha[V];
int tam_pilha = 0;

void liga(int v1, int v2)
{
    grafo[v1 - 1][v2 - 1] = 1;
    grafo[v2 - 1][v1 - 1] = 1;
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
    int e, l, x, y, i, z;


    for (z = 1;; z++)
    {
        //Preenche
        memset(grafo, -1, sizeof(grafo));
        memset(visitados, -1, sizeof(visitados));
        memset(pilha, -1, sizeof(pilha));
        scanf("%d %d", &e, &l);
        if (e == 0 && l == 0) break;
        else
        {
            for (i = 0; i < l; i++)
            {
                scanf("%d %d", &x, &y);
                liga(x, y);
            }
            dfs(0, e);

        }
        int conectado = 1;
        for (i = 0; i < e; i++)
        {
            if (visitados[i] == -1)
            {
                conectado = 0;
                break;
            }
        }
        if (conectado == 1)
        {
            printf("Teste %d\n", z);
            printf("normal\n\n");
        }
        else
        {
            printf("Teste %d\n", z);
            printf("falha\n\n");
        }
    }

    return 0;
}