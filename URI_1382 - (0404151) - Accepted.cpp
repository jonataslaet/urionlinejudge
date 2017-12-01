#include <stdio.h>
#include <stdlib.h>

int main()
{

	int t, n, i, k, j, aux, cont, pos[10001], inteiros[10001];

	scanf("%i", &t);

	for (i = 0; i < t; i++)
	{
		scanf("%i", &n);

		for (k = 1; k <= n; k++)
		{
			scanf("%i", &inteiros[k]);
			pos[inteiros[k]]=k;
		}
		cont = 0;
		for (j = 1; j <= n; j++)
		{
			if (inteiros[j] != j)
			{
				aux = inteiros[j];
				inteiros[j] = pos[inteiros[j]];
				inteiros[pos[j]] = aux;
				aux = pos[j];
				pos[j]=inteiros[j];
				pos[inteiros[aux]]=aux;
				cont++;
			}
		}
		printf("%i\n", cont);
	}

	return 0;
}