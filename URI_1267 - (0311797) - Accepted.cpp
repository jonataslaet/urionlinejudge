#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void mostraVetor(int vetor[], int x)
{
	int i;
	printf("\n----------------------------\n");
	for (i = 0; i < x; i++) printf("%d ", vetor[i]);
	printf("\n----------------------------\n");
}

int main()
{
	int i, j, n, d, t, x[500][100], dinners[100];

	for (;;)
	{
		scanf("%d %d", &n, &d);
		memset(dinners, 0, sizeof(int)*100);
		if (n == 0 && d == 0) break;
		else
		{
			//mostraVetor(dinners, n);
			for (i = 0; i < d; i++)
			{
				for (j = 0; j < n; j++)
				{
					scanf("%d", &x[i][j]);
					if (x[i][j] == 1)
					{
						(dinners[j])++;
					}
				}
			}
			//mostraVetor(dinners, n);
			t = 0;
			for (j = 0; j < n; j++)
			{
				if (dinners[j] == d)
				{
					t = 1;
					break;
				}
			}
			if (t == 1) printf("yes\n");
			else printf("no\n");
		}
	}

	return 0;
}