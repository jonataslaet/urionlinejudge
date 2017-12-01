#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pilha
{
	int topo; /* posiÃ§Ã£o elemento topo */
	int capa;
	char *pElem;
};

void criarpilha( struct Pilha *p, int c )
{
	p->topo = -1;
	p->capa = c;
	p->pElem = (char*) malloc (c * sizeof(char));
}
int estavazia (struct Pilha *p)
{

	if( p-> topo == -1 )

		return 1;   // true
	else
		return 0;   // false
}

int estacheia (struct Pilha *p)
{
	if (p->topo == p->capa - 1)
		return 1;
	else
		return 0;
}

void empilhar (struct Pilha *p, char v)
{
	if (p->topo == p->capa - 1)
	{
		//printf("\nPILHA CHEIA! \n");
	}
	else
	{
		p->topo++;
		p->pElem [p->topo] = v;
	}
}

char desempilhar (struct Pilha *p)
{
	if (p->topo == -1)
	{
		return 1;   // true, está vazia
	}
	else
	{
		//return 0;   // false
		char aux = p->pElem [p->topo];
		p->topo--;
		return aux;
	}
}

char retornatopo (struct Pilha *p)
{
	return p->pElem [p->topo];
}

int main()
{
	struct Pilha minhapilha;
	int qtd, i, k, tam, pilhas;
	//char valor;
	scanf("%d", &qtd);
	for (i = 0; i < qtd; i++)
	{
		char mina[1001];
		scanf("%s", mina);
		tam = strlen(mina);
		pilhas = 0;
		criarpilha (&minhapilha, tam);
		for (k = 0; k < tam; k++)
		{
			//Se for uma abertura, então coloca na pilha
			if (mina[k] == '<'){
				empilhar(&minhapilha, mina[k]);
			}			
			//Se não, se a pilha não estiver vazia E este elemento fechar com o do topo da pilha
			else if (!estavazia (&minhapilha) && mina[k] == '>'){
				desempilhar(&minhapilha);
				pilhas++;				
			}
		}
		printf("%d\n", pilhas);
	}

}