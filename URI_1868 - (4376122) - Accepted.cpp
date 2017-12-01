#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <string.h>
using namespace std;
#define MAX 26

void preencheMatriz(char map[][MAX], int col, int lin, char caractere)
{
	int f, m;
	for (f = 0; f < lin; f++)
	{
		for (m = 0; m < col; m++)
		{
			map[f][m] = caractere;
		}
	}
}
void exibeMatriz(char map[][MAX], int col, int lin)
{
	int f, m, fim = lin-1;
	for (f = 0; f < lin; f++)
	{
		for (m = 0; m < col; m++)
		{
			printf("%c", map[f][m]);
		}
		printf("\n");
	}
	printf("@\n");
}


void alteraMapa(char mapa[][MAX], int n)
{
	int d, e, c, b, meio, direita, esquerda, baixo, cima, limite = 0, passo = 0;
	meio = n / 2;
	direita = 1;
	cima = 1;
	esquerda = 2;
	baixo = 2;
	d = 0;
	c = 0;
	e = 0;
	b = 0;
	limite = n * n;
	passo = 1;
	//[2] Mostra item do meio
	//printf("%c ", mapa[meio][meio]);
	exibeMatriz(mapa, n, n);
	passo++;
	do
	{
		//[3] PRIMEIRO: vai pra direita
		for (int j = 1; j <= direita; j++)
		{
			//printf("%c ", mapa[meio + d][meio - d + j]);
			mapa[meio + d][meio - d + j] = 'X';
			mapa[meio + d][meio - d + j - 1] = 'O';
			exibeMatriz(mapa, n, n);
			//getch();
			passo++;
			if (passo > limite) break;
		}
		d++;
		if (passo > limite) break;
		//[4] SEGUNDO: vai pra cima
		for (int i = 1; i <= cima; i++)
		{
			//printf("%c ", mapa[meio + c - i][meio + direita - c]);
			mapa[meio + c - i][meio + direita - c] = 'X';
			mapa[meio + c - i + 1][meio + direita - c] = 'O';
			exibeMatriz(mapa, n, n);
			//getch();
			passo++;
			if (passo > limite) break;
		}
		c++;
		if (passo > limite) break;
		//[5] TERCEIRO: vai pra esquerda
		for (int j = 1; j <= esquerda; j++)
		{
			//printf("%c ", mapa[meio - (e + 1)][meio + e - j + 1]);
			mapa[meio - (e + 1)][meio + e - j + 1] = 'X';
			mapa[meio - (e + 1)][meio + e - j + 2] = 'O';
			exibeMatriz(mapa, n, n);
			//getch();
			passo++;
			if (passo > limite) break;
		}
		e++;
		if (passo >= limite) break;
		//[6] QUARTO: vai pra baixo
		for (int i = 0; i < baixo; i++)
		{
			//printf("%c ", mapa[meio - b + i][meio - (b + 1)]);
			mapa[meio - b + i][meio - (b + 1)] = 'X';
			mapa[meio - b + i - 1][meio - (b + 1)] = 'O';
			exibeMatriz(mapa, n, n);
			//getch();
			passo++;
			if (passo > limite) break;
		}
		if (passo > limite) break;
		b++;
		direita += 2;
		cima += 2;
		esquerda += 2;
		baixo += 2;
		//system("pause");
	}
	while (passo <= limite);
	//printf("Matriz Impressa com Sucesso.\n");
}

int main(int argc, char** argv)
{
	int n, meio;

	//[1] Captura a dimensão e o meio
	while(cin >> n && n != 0)
	{
		meio = n / 2;

		//Se a dimensão da matriz for 1
		if (n == 1)
		{
			//Então imprima isto:
			printf("X\n");
			printf("@\n");
		}
		//Se não...
		else
		{
			//[2] Cria matriz
			char mapa[MAX][MAX];

			//[3] Preenche a Matriz com o caractere 'O'
			preencheMatriz(mapa, n, n, 'O');

			//[4] Coloca o caractere 'X' no meio da matriz
			mapa[meio][meio] = 'X';

			//[5] Exibe matriz normalmente
			//exibeMatriz(mapa, n, n);

			//[5] Altera a matriz de forma espiral de dentro pra fora, exibindo-a a cada alteração
			alteraMapa(mapa, n);
			//printf("\n");
			//system("pause");
		}
	}
	return 0;
}
