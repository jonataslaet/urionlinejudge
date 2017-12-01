#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int q, d, p, y, z;
	double x;
	for(;;)
	{
		scanf("%d %d %d", &q, &d, &p);
		if (q == 0) break;
		else
		{
			x = ((double)(p*d)) / ((double)(p - q));
			y = trunc(x);
			z = q*x;
			if (z == 1) printf("%d pagina\n", z);
			else printf("%d paginas\n", z);
		}
	}

	return 0;
}