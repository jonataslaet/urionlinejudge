#include <stdio.h>
#include <stdlib.h>
//printf("%3d ", matriz[i][j]);

int maiorNum(int num)
{
	int i, y = (2 * num) - 2, pot = 1;
	for (i = 0; i < y; i++)
	{
		pot *= 2;
	}
	return pot;
}

int main()
{
	int n, i, j, aux, T, show, temp, qtdDigitos;

	for(;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			T = maiorNum(n);
			aux = n - 1;
			show = 1;
			temp = 1;
			qtdDigitos = 0;
			if (T >= 0 && T <= 9) qtdDigitos = 1;
			else if (T >= 10 && T <= 99) qtdDigitos = 2;		
			else if (T >= 100 && T <= 999) qtdDigitos = 3;
			else if (T >= 1000 && T <= 9999) qtdDigitos = 4;
			else if (T >= 10000 && T <= 99999) qtdDigitos = 5;
			else if (T >= 100000 && T <= 999999) qtdDigitos = 6;
			else if (T >= 1000000 && T <= 9999999) qtdDigitos = 7;
			else if (T >= 10000000 && T <= 99999999) qtdDigitos = 8;
			else if (T >= 100000000 && T <= 999999999) qtdDigitos = 9;
			//printf("Maior numero: %d\n", T);
			//printf("Qtd dig maior: %d\n", qtdDigitos);
			//system("pause");
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if (j < aux) printf("%*d ", qtdDigitos, show);
					else printf("%*d", qtdDigitos, show);
					show *= 2;
				}
				show = temp * 2;
				temp *= 2;
				printf("\n");
			}
			printf("\n");
		}
	}

	return 0;
}