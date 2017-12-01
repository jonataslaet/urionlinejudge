#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv)
{
	int n, m1, m2, v1, v2, i, golsT1, golsT2;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		golsT1 = 0;
		golsT2 = 0;
		scanf("%d x %d", &m1, &v1);
		scanf("%d x %d", &m2, &v2);
		golsT1 += (m1 + v2);
		golsT2 += (v1 + m2);
		//Verifica saldo de gols
		if (golsT1 > golsT2)
		{
			printf("Time 1\n");
		}
		else if (golsT1 < golsT2)
		{
			printf("Time 2\n");
		}
		//Verifica quantidade de gols marcados na casa do adversário
		else if (v2 > v1)
		{
			printf("Time 1\n");
		}
		else if (v2 < v1)
		{
			printf("Time 2\n");
		}
		else
		{
			printf("Penaltis\n");
		}
	}


	return 0;
}