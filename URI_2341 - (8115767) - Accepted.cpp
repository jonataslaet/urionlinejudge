#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int compare(const void *x, const void *y)
{
	return (*(int*)x - * (int*)y);
}

/*
Para participar da promoção é preciso enviar um envelope contendo um rótulo de cada tipo de bala que a SBC
produz. Por exemplo, se a SBC produz 3 tipos de balas, A, B, C, e uma pessoa tem 3 rótulos de A,
3 de B e 2 de C, ela pode enviar no máximo 2 envelopes, já que falta um rótulo de C para compor o terceiro
envelope.
*/
int main()
{
	int N, K, qtdRotulos;
	int v[1001] = {0};
	cin >> N >> K;
	qtdRotulos = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &qtdRotulos);
		v[qtdRotulos - 1]++;
	}
	qsort(v, K, sizeof(int), compare);
	cout << v[0] << endl;
	//mostraVetor(v, K);
	return 0;
}