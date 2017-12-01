#include <stdlib.h>
#include <stdio.h>

int main()
{
	int z, a, b, i, r, somaA, somaB;
	

	for(z = 1;; z++)
	{
		scanf("%i", &r);
		if (r == 0) break;
		else
		{
			somaA = 0;
			somaB = 0;
			for (i = 0; i < r; i++)
			{
				scanf("%i %i", &a, &b);
				somaA = somaA + a;
				somaB = somaB + b;
			}
			if (somaA > somaB)
			{
				printf("Teste %i\nAldo\n\n", z);
			}
			if (somaB > somaA)
			{
				printf("Teste %i\nBeto\n\n", z);
			}
		}
	}
	return 0;
}