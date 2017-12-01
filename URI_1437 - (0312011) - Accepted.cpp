#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i, n, aux, tam;
	char comandos[1001];
	for(;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			aux = 1;
			scanf("%s", comandos);
			tam = strlen(comandos);
			for (i=0;i<tam;i++)
			{
				if (comandos[i] == 'D')
				{
					if (aux == 4) aux = 1;
					else aux++;
				}
				else if (comandos[i] == 'E')
				{
					if (aux == 1) aux = 4;
					else aux--;
				}
			}
			if (aux == 1) printf("N\n");
			else if (aux == 2) printf("L\n");
			else if (aux == 3) printf("S\n");
			else if (aux == 4) printf("O\n");
		}
	}

	return 0;
}