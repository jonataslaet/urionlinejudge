#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

/*
Elas devem ser ordenadas primeiramente de forma decrescente por peso.
Caso duas ou mais apresentarem o mesmo peso elas devem ser ordenadas de forma ascendente pela idade,
após pela altura e
caso ainda persista empate, pelo nome.
*/
typedef struct Info
{
	double peso;
	int idade;
	double altura;
	char nome[1001];
} pessoa;

void ordenarPorPeso(pessoa p[], int tam)
{
	int i, j;
	pessoa aux;
	for (i = 0; i < tam; i++)
	{
		for (j = i + 1; j < tam; j++)
		{
			//Ordenar por peso
			if (p[i].peso < p[j].peso)
			{
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
}

void ordenarPorIdade(pessoa p[], int tam)
{
	int i, j;
	pessoa aux;
	for (i = 0; i < tam; i++)
	{
		for (j = i + 1; j < tam; j++)
		{
			//Ordenar por idade
			if (p[i].peso == p[j].peso && p[i].idade > p[j].idade)
			{
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
}

void ordenarPorAltura(pessoa p[], int tam)
{
	int i, j;
	pessoa aux;
	for (i = 0; i < tam; i++)
	{
		for (j = i + 1; j < tam; j++)
		{
			//Ordenar por altura
			if (p[i].peso == p[j].peso && p[i].idade == p[j].idade && p[i].altura > p[j].altura)
			{
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
}

void ordenarPorNome(pessoa p[], int tam)
{
	int i, j;
	pessoa aux;
	for (i = 0; i < tam; i++)
	{
		for (j = i + 1; j < tam; j++)
		{
			if ((p[i].peso == p[j].peso && p[i].idade == p[j].idade && p[i].altura == p[j].altura) && (strcmp(p[i].nome, p[j].nome) > 0))
			{
				//strcpy(temp, nome[i]); //temp = nome[i]
				//strcpy(nome[i], nome[j]); //nome[i]=nome[j]
				//strcpy(nome[j], temp); //nome[j] = temp
				aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	int T, N, M, i, j;
	
	cin >> T;
	for (i = 0; i < T; i++)
	{
		pessoa person[1000];
		cin >> N >> M;
		for (j = 0; j < N; j++)
		{
			scanf("%s", person[j].nome);
			cin >> person[j].peso >> person[j].idade >> person[j].altura;
		}
		//ordenar(j);
		ordenarPorPeso(person, j);
		ordenarPorIdade(person, j);
		ordenarPorAltura(person, j);
		ordenarPorNome(person, j);
		printf ("CENARIO {%d}\n", i + 1);
		for (j = 0; j < M; j++)
		{
			//printf("%d - n=%s p=%.1f i=%d a=%.2lf\n", j + 1, person[j].nome, person[j].peso, person[j].idade, person[j].altura);
			printf("%d - %s\n", j+1, person[j].nome);
		}
	}
	return 0;
}
