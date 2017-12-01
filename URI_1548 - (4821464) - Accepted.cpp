#include <iostream>
#include <algorithm>
using namespace std;

int compare(const void *x, const void *y)
{
	return (*(int*)y - * (int*)x);
}
int main(int argc, char *argv[])
{
	int cont = 0, N, M, tam = 0;
	int P[10000], W[10000];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		for (int j = 0; j < M; j++)
		{
			cin >> P[j];
			W[j] = P[j];
			tam = j;
		}
		//Ordena o vetor dos que voltaram
		qsort(P, M, sizeof(int), compare);
		cont = 0;
		for (int k = 0; k < M; k++)
		{
			if (P[k] == W[k]) cont++;
		}
		cout << cont << endl;
	}
	return 0;
}