#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;
int obter_num_digitos (uint64_t N)
{
	int q_digitos = 0;
	if (N == 0) return 1;
	while(N)
	{
		N /= 10;
		q_digitos++;
	}
	return q_digitos;
}
int main(int argc, char** argv)
{
	int qtdDigMaior, n, auxM, auxN, i, j, k, m, x;
	//long long unsigned int num, matriz[22][22], maior[22];
	uint64_t num, matriz[22][22], maior[22];
	//uint32_t y; 
	/*
	Quadrado da matriz #4:
	*/
	scanf("%d", &n);
	auxN = n - 1;
	x = 4;
	for (k = 0; k < n; k++)
	{
		scanf("%d", &m);
		qtdDigMaior = 0;
		auxM = m - 1;
		memset(maior, 0, sizeof(maior));
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				//scanf("%llu", &num);
				cin >> num;
				matriz[i][j] = num * num;
				if (matriz[i][j] > maior[j]) maior[j] = matriz[i][j];
			}
		}
		//qtdDigMaior = obter_num_digitos(maior);
		//Mostra a matriz
		printf("Quadrado da matriz #%d:\n", x++);
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < m; j++)
			{
				qtdDigMaior = obter_num_digitos(maior[j]);
				//if (j == 0)  cout << setw(qtdDigMaior) << matriz[i][j];
				if (j < auxM) cout << setw(qtdDigMaior) << matriz[i][j] << " ";
				else cout << setw(qtdDigMaior) << matriz[i][j] << endl;
			}
			//printf("\n");
		}
		if (k < auxN) printf("\n");
	}

	return 0;
}