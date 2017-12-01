#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double Fde(double x, double l, double w)
{
	double y;
	y = x * l * w - l * 2 * x * x - 2 * x * x * w + 4 * x * x * x;
	return y;
}

int main(int argc, char** argv)
{
	double l, w, a, b, c, x1, x2, delta, FdeZero, FdeX1, FdeX2;

	while(scanf("%lf %lf", &l, &w) != EOF)
	{
		a = 12;
		b = -(4 * l) - (4 * w);
		c = l * w;
		delta = (b * b) - 4 * a * c;
		//b=12; a=12; c=3; -> delta=0;
		//
		
		x1 = (-b + (sqrt(delta))) / (2 * a);
		x2 = (-b - (sqrt(delta))) / (2 * a);
		FdeZero = Fde(0, l, w);
		FdeX1 = Fde(x1, l, w);
		FdeX2 = Fde(x2, l, w);
		
		if (delta == 0)
		{
			printf("%.3lf ", x1);
		}
		else if (FdeX1 > FdeX2)
		{
			printf("%.3lf ", x1);
			if (x2 < FdeZero && FdeZero >= 0)
			{
				printf("%.3lf ", x2);
				printf("%.3lf\n", FdeZero);
			}
			else if (x2 > FdeZero && FdeZero >= 0)
			{
				printf("%.3lf ", FdeZero);
				if (l > w) printf("%.3lf\n", (w/2));
				else if (l < w) printf("%.3lf\n", (l/2));
				else printf("%.3lf\n", (l/2));
			}
			else
			{
				printf("%.3lf\n", x2);
			}
		}
		else if (FdeX2 > FdeX1)
		{
			printf("%.3lf ", x2);
			if (x1 < FdeZero && FdeZero >= 0)
			{
				printf("%.3lf ", x1);
				printf("%.3lf\n", FdeZero);
			}
			else if (x1 > FdeZero && FdeZero >= 0)
			{
				printf("%.3lf ", FdeZero);
				if (l > w) printf("%.3lf\n", (w/2));
				else if (l < w) printf("%.3lf\n", (l/2));
				else printf("%.3lf\n", (l/2));
			}
			else
			{
				printf("%.3lf\n", x1);
			}
		}
	}

	return 0;
}