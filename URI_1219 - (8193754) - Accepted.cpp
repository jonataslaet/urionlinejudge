#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415926535897

int verificaTri(double a, double b, double c)
{
	if (((a + b) <= c) || ((b + c) <= a) || ((a + c) <= b))
	{
		return 0;
	}
	return 1;
}

int main()
{
	double l1, l2, l3, areaTri, p, rC_Insc, rC_Circun, areaC_Insc, areaC_Circun;
	double sunflowers, violets, roses;

	while(scanf("%lf %lf %lf", &l1, &l2, &l3) != EOF)
	{
		if (verificaTri(l1, l2, l3) == 1)
		{
			p = (l1 + l2 + l3) / 2.0;
			areaTri = sqrt(p * (p - l1) * (p - l2) * (p - l3));
			rC_Insc = areaTri / p;
			areaC_Insc = pi * rC_Insc * rC_Insc;
			rC_Circun = (l1 * l2 * l3) / (4 * areaTri);
			areaC_Circun = pi * pow(rC_Circun, 2);
			sunflowers = areaC_Circun - areaTri;
			violets = areaTri - areaC_Insc;
			roses = areaC_Insc;
		}
		else
		{
			printf("Nao forma triangulo\n");
		}
		printf("%.4lf %.4lf %.4lf\n", sunflowers, violets, roses);
	}

	return 0;
}