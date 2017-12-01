#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Coordenadas
{
	int x, y;
	int visitado;
} info;

int winner;

void busca(int mat[][5], info quad[][5], int col, int lin)
{
	if (lin >= 0 && lin < 5 && col >= 0 && col < 5 && winner == 0)
	{
		quad[col][lin].visitado = 1;
		if (col == 4 && lin == 4)
		{
			winner = 1;
		}
		else
		{
			// vai para baixo, cima, esquerda ou direita
			if(col + 1 < 5 && mat[col + 1][lin] == 0 && quad[col + 1][lin].visitado == 0)
				busca(mat, quad, col + 1, lin);
			if(col - 1 >= 0 && mat[col - 1][lin] == 0 && quad[col - 1][lin].visitado == 0)
				busca(mat, quad, col - 1, lin);
			if(lin + 1 < 5 && mat[col][lin + 1] == 0 && quad[col][lin + 1].visitado == 0)
				busca(mat, quad, col, lin + 1);
			if(lin - 1 >= 0 && mat[col][lin - 1] == 0 && quad[col][lin - 1].visitado == 0)
				busca(mat, quad, col, lin - 1);
		}
	}
}

int main(int argc, char** argv)
{
	int i, l, c, T, aux;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		info quadrado[5][5];
		int matriz[5][5];
		for (l = 0; l < 5; l++)
		{
			for (c = 0; c < 5; c++)
			{
				scanf("%d", &aux);
				matriz[l][c] = aux;
				quadrado[l][c].y = l;
				quadrado[l][c].x = c;
				quadrado[l][c].visitado = 0;
			}
		}
		winner = 0;
		busca(matriz, quadrado, 0, 0);
		if (winner == 1)
		{
			printf("COPS\n");
		}
		else
		{
			printf("ROBBERS\n");
		}
	}
	return 0;
}
