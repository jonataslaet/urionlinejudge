#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

void mostraVetor(int v[], int tam)
{
	int i;
	for (i = 0; i < tam; i++) cout << " " << v[i];
	cout << endl;
}

// A função abaixo recebe um inteiro x e um vetor
// crescente v[0..n-1]. Ela devolve um índice m
// tal que v[m] == x ou devolve -1 se tal m não
// existe.
int buscaBinaria (int x, int n, int v[])
{
	for (int i = 0; i < n; i++)
	{
		if (v[i] == x) return x;
	}
	return -1;                              // 9
}

int compare(const void *x, const void *y)
{
	return (*(int*)x - * (int*)y);
}

int encontra(int v[], int tam, int elemento)
{
	if (buscaBinaria(elemento, tam, v) == elemento) return 1;
	else return 0;
}
int main(int argc, char *argv[])
{
	//criterio1=0;
	//criterio1_ok=0;
	//criterio2_ok=1;
	//criterio3_ok=1;
	//criterio4_ok=1;

	//if (find(relatorio[id_competidor, 0)==1) criterio1++;
	//if (criterio1==N) criterio1_ok=1;

	//if (find(problemas, 0)==1) = criterio2_ok=0;

	//if (find(problemas, N)==1) = criterio3_ok=0;

	int i, j, m, criterio1_ok, qtdResolvidaPorI, criterio1;
	int criterio3_ok, criterio2_ok, criterio4_ok;
	int N, M;
	while(1)
	{
		/*
		1. Ninguém resolveu todos os problemas.
		2. Todo problema foi resolvido por pelo menos uma pessoa (não necessariamente a mesma).
		3. Não há nenhum problema resolvido por todos.
		4. Todos resolveram ao menos um problema (não necessariamente o mesmo).
		*/
		cin >> N >> M;
		int problemas[101] = {0}, relatorio[101][101] = {{0}};
		criterio1_ok = 0;
		qtdResolvidaPorI = 0;
		criterio1 = 0;
		criterio3_ok = 1, criterio2_ok = 1, criterio4_ok = 1, criterio1_ok = 0;
		if (N == 0 && M == 0) break;
		else
		{
			for (i = 0; i < N; i++)
			{
				qtdResolvidaPorI = 0;
				for (j = 0; j < M; j++)
				{
					cin >> m;
					relatorio[i][j] = m;
					problemas[j] += m;
					qtdResolvidaPorI += m;
				}
				if (encontra(relatorio[i], j, 0) == 1)
				{
					criterio1++;
				}
				if (qtdResolvidaPorI == 0) criterio4_ok = 0;
			}
			if (criterio1 == N) criterio1_ok = 1;
			if (encontra(problemas, M, N) == 1) criterio3_ok = 0;
			//mostraVetor(problemas, M);
			if (encontra(problemas, M, 0) == 1) criterio2_ok = 0;
			cout << criterio1_ok + criterio2_ok + criterio3_ok + criterio4_ok << endl;
		}
	}
	return 0;
}