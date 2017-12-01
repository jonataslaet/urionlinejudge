#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	double m1, m2, m3, area, areaX, p;

	while(scanf("%lf %lf %lf", &m1, &m2, &m3) != EOF)
	{
		if (verificaTri(m1, m2, m3) == 1)
		{
			p = (m1 + m2 + m3) / 2;
			area = sqrt(p * (p - m1) * (p - m2) * (p - m3));
			areaX = (4.0/3) * area;
			printf("%.3lf\n", areaX);
		}
		else
		{
			printf("-1.000\n");
		}
	}

	return 0;
}