#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i, n, cont1, cont2, n1, n2;

	for (;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			cont1 = 0;
			cont2 = 0;
			for (i = 0; i < n; i++)
			{
				scanf("%d %d", &n1, &n2);
				if (n1 > n2) cont1++;
				else if (n2 > n1) cont2++;
			}
			printf("%d %d\n", cont1, cont2);
		}
	}



	return 0;
}