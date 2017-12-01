#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, i, t, j, k, totalchamada, tam, z;
	char nome[101][51], chamada[101][51];
	double qtdpm, porc;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		for (j = 0; j < n; j++)
		{
			scanf("%s", nome[j]);
		}
		z = 0;
		for (j = 0; j < n; j++)
		{
			scanf("%s", chamada[j]);
			tam = strlen(chamada[j]);
			totalchamada = 0;
			qtdpm = 0;
			for (k = 0; k < tam; k++)
			{
				if (chamada[j][k] == 'P')
				{
					totalchamada++;
					qtdpm++;
				}
				else if(chamada[j][k] == 'A') totalchamada++;
			}
			porc = (qtdpm / (double)totalchamada) * 100;
			if (porc < 75)
			{
				if (z == 0) printf("%s", nome[j]);
				else printf(" %s", nome[j]);
				z++;
			}
		}
		printf("\n");
	}

	return 0;
}