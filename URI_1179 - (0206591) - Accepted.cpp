#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int i, num, contimp, contpar, ti = 0, tp = 0, k;
	int vetpar[5], vetimp[5];


	contimp = 0;
	contpar = 0;
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 0) vetpar[contpar++] = num;
		else vetimp[contimp++] = num;
		if (contpar == 5)
		{
			for (k = 0; k < contpar; k++) printf("par[%d] = %d\n", k, vetpar[k]);
			tp = 1;
			contpar = 0;
		}
		if (contimp == 5)
		{
			for (k = 0; k < contimp; k++) printf("impar[%d] = %d\n", k, vetimp[k]);
			ti = 1;
			contimp = 0;
		}
	}
	if (ti == 1) for (k = 0; k < contimp; k++) printf("impar[%d] = %d\n", k, vetimp[k]);
	if (tp == 1) for (k = 0; k < contpar; k++) printf("par[%d] = %d\n", k, vetpar[k]);

	return 0;
}