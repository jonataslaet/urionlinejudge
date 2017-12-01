#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	int maior, repmaior, k, n, t, i, j, p[100001], rep[100001], qtdRep, qtdRepAnt;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		qtdRep = 0;
		qtdRepAnt = 0;
		repmaior = 0;
		k = 0;
		memset(rep, 0, sizeof(int));
		for (j = 0; j < n; j++)
		{
			scanf("%d", &p[j]);
			if (j == 0) maior = p[j];
			else
			{
				if (p[j] > maior) maior = p[j];
			}
		}
		for (j = 0; j < n; j++)
		{
			if (maior == p[j])
			{
				qtdRep++;
				if (k == 0)
				{
					rep[k] = qtdRep;
					repmaior = rep[k];
				}
				else
				{
					rep[k] = qtdRep;
					if (rep[k] > repmaior) repmaior = rep[k];
				}
			}
			else
			{
				//if (rep[k] > repmaior) repmaior = rep[k];
				qtdRep = 0;
				k++;
			}
		}
		printf("Caso #%d: %d\n", i, repmaior);
	}
	return 0;
}