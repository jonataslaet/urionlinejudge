#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare (const void * x, const void * y)
{
    return (*(int*)x - * (int*)y);
}

typedef struct Dados
{
    double ptotal, preco[1000];
    char nome[51], fruta[1000][51];
    int qtd;
} dado;

int main()
{
    int i, j, k, z;
    int n, m, p;
    //char nome[51];
    //double ptotal;
    scanf("%d", &n);
    for (z = 0; z < n; z++)
    {
        scanf("%d", &m);
        dado info;
        info.ptotal = 0; //ptotal = 0;
        for (i = 0; i < m; i++)
        {
            scanf ("%s %lf", info.fruta[i], &info.preco[i]);
        }
        scanf("%d", &p);
        for (j = 0; j < p; j++)
        {
            scanf("%s %d", &info.nome, &info.qtd);
            for (k = 0; k < m; k++)
            {
                if (strcmp(info.nome, info.fruta[k]) == 0)
                {
                    info.ptotal = info.ptotal + (info.qtd * info.preco[k]);
                }
            }
        }
        printf("R$ %.2lf\n", info.ptotal);
    }

    return 0;
}