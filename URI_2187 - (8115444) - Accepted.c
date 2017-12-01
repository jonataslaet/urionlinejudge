#include <stdio.h>

int main()
{

	int t, z = 1, k, qtd50, qtd10, qtd5, qtd1;

	for(;; z++)
	{
		scanf("%i", &t);
		if (t == 0) break;
		else
		{
			printf("Teste %d\n", z);
			for (k = 0; k < 4; k++)
			{
				qtd50 = t / 50;
				qtd10 = (t % 50) / 10;
				qtd5 = ((t % 50) % 10) / 5;
				qtd1 = ((t % 50) % 10) % 5;;
			}
			printf("%d %d %d %d\n\n", qtd50, qtd10, qtd5, qtd1);
		}
	}

	return 0;
}