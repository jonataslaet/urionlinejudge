#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i, n, tamA, tamB, t;
	char a[41], b[41];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", a, b);
		t = 0;
		tamA = strlen(a);
		tamB = strlen(b);
		if (strcmp(a, b) == 0) printf("encaixa\n");
		else if (tamB > tamA) printf("nao encaixa\n");
		else
		{
			//printf("TAM de A: %d\n", tamA);
			//printf("TAM de B: %d\n", tamB);
			for(;;)
			{
				/*
				printf("TAM de A: %d\n", tamA);
				printf("TAM de B: %d\n", tamB);
				printf("B = %c %d\n", b[tamB-1], tamB);
				printf("A = %c %d\n", a[tamA-1], tamA);
				*/
				if (b[--tamB] == a[--tamA])
				{
					t = 1;
					if (b[tamB] == 0) break;
				}
				else
				{
					t = 0;
					break;
				}
				if (tamB == 0) break;
			}
			if (t == 1)
			{
				printf("encaixa\n");
			}
			else if (t == 0)
			{
				printf("nao encaixa\n");
			}
		}
	}
	return 0;
}