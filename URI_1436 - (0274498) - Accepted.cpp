#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare (const void * x, const void * y)
{
    return (*(int*)x - * (int*)y);
}

int main()
{
	int num[100], i, k, m, t, n, mediana;
	scanf("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		m = n / 2;
		for (k = 0; k < n; k++)
		{
			scanf("%d", &num[k]);		
		}
		qsort(num, n, sizeof(int), compare); //ordena vetor num
		if (n % 2 == 0)
		{
			mediana = (num[m] + num[m+1]) / 2;	
		}
		else
		{
			mediana = num[m];
		}
		printf("Case %d: %d\n", i, mediana);
	}
	return 0;
}