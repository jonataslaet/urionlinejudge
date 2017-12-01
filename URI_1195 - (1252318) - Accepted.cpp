#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct no
{
    int valor; /* conte?do */
    struct no *esq;
    struct no *dir;
} no;

int count = 1;
 
void inserirNo (no **raiz, int elemento)
{
    if (*raiz == NULL)
    {
        no *aux = (no*)malloc(sizeof(no));
        aux->valor = elemento;
        aux->dir = aux->esq = NULL;
        *raiz = aux;
        return;
    }
    if (elemento < (*raiz)->valor)
    {
        inserirNo((&(*raiz)->esq), elemento);
        return;
    }
    if (elemento > (*raiz)->valor)
    {
        inserirNo((&(*raiz)->dir), elemento);
        return;
    }
}
 
void in_ordem(no *raiz, int f)
{
    if (raiz == NULL) return;
    in_ordem(raiz->esq, f);
    if(count != f) 
	{
		printf("%d ", raiz->valor);
		count++;
	}
    else
	{
		printf("%d\n", raiz->valor);
		count = 1;
	}
    in_ordem(raiz->dir, f);
}
 
void pre_ordem(no *raiz, int f)
{
    if (raiz == NULL) return;
    if(count != f) 
	{
		printf("%d ", raiz->valor);
		count++;
	}
    else
	{
		printf("%d\n", raiz->valor);
		count = 1;
	}
    pre_ordem(raiz->esq, f);
    pre_ordem(raiz->dir, f);
}
 
void pos_ordem(no *raiz, int f)
{
    if (raiz == NULL) return;
    pos_ordem(raiz->esq, f);
    pos_ordem(raiz->dir, f);
    if(count != f) 
	{
		printf("%d ", raiz->valor);
		count++;
	}
    else
	{
		printf("%d\n", raiz->valor);
		count = 1;
	}
}
 
bool esvaziar(no *tree)
{
    if (tree == NULL) return false;
    else
    {
        esvaziar(tree->esq);
        esvaziar(tree->dir);
        free(tree);
        tree = NULL;
    }
    return true;
}
 
int main()
{
    int c, k, n, i, x, caso = 1;
    //no *raiz = NULL;
    scanf("%d", &c);
    for (k = 0; k < c; k++)
    {
        no *raiz = NULL;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x);
            inserirNo(&raiz, x);
        }
        printf("Case %d:\n", caso);
        printf("Pre.: ");
        pre_ordem(raiz, n);
        //printf("\n");
        printf("In..: ");
        in_ordem(raiz, n);
        //printf("\n");
        printf("Post: ");
        pos_ordem(raiz, n);
        printf("\n");
        caso++;
        esvaziar(raiz);
    }
 
    return 0;
}