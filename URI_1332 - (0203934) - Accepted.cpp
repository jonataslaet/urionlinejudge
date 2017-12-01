#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char palavra[6], one[] = "one", two[] = "two", three[] = "three";
	int i, n, k, cont1, cont2, num, tam;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", palavra);
		tam = strlen(palavra);
		if (tam > 3) num = 3;
		else if (strcmp(palavra,two)==0) num = 2;
		else if (strcmp(palavra,one)==0) num = 1;
		else
		{
			cont1 = 0, cont2 = 0;
			for (k = 0; k < 3; k++) if (palavra[k] == one[k]) cont1++;
			for (k = 0; k < 3; k++) if (palavra[k] == two[k]) cont2++;
			if (cont1 == 2) num = 1;
			else num = 2;
		}
		printf("%d\n", num);
	}

	return 0;
}