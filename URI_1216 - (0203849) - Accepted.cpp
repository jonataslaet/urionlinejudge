#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int cont;
	double dist, somadist, med;
	char nome[71];

	somadist = 0, cont = 0;
	while((fflush(stdin) || gets(nome)))
	{
		scanf("%lf", &dist);
		somadist = somadist + dist;
		cont++;
	}
	med = somadist / cont;
	printf("%.1lf\n", med);
	
	return 0;
}