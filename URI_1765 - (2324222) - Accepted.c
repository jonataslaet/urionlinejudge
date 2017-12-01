#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	int q, n, i;
	double a, b, area, cobertura;
	for(;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			for (i = 0; i < n; i++)
			{
				scanf("%d %lf %lf", &q, &a, &b);
				area = ((a + b) * 5) / 2;
				cobertura = ((double)q) * area;
				printf("Size #%d:\n", i + 1);
				printf("Ice Cream Used: %.2lf cm2\n", cobertura);
			}
			printf("\n");
		}
	}
	return 0;
}
