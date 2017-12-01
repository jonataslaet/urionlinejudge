#include <stdio.h>
#include <stdlib.h>

int compare (const void * x, const void * y)
{
	return (*(int*)x - *(int*)y);
}

int main()
{

	int i, num, k, pos, valor[10001], teste[10001], n;


	for (;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			for (i = 0; i < n; i++)
			{
				scanf("%d", &valor[i]);
				teste[i] = valor[i];
			}
			qsort(teste, n, sizeof(int), compare);
			num = teste[i-2];
			//printf("num: %d\n", num);
			for (k = 0; k < n; k++)
			{
				if (num == valor[k])
				{
					pos = k+1;
					break;
				}
			}
			printf("%d\n", pos);
		}
	}

	return 0;
}