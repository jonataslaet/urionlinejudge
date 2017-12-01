#include <stdio.h>
#define l 12
#define c 12

int main()
{

	int lin, i, j;
	double m[l][c], soma = 0, media = 0;
	char car;
	scanf("%d", &lin);
	scanf(" %c", &car);
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%lf", &m[i][j]);
			if (i == lin) soma += m[i][j];
		}
		media = soma / c;
	}
	if (car == 'S') printf("%.1lf\n", soma);
	else if (car == 'M') printf("%.1lf\n", media);

	return 0;
}
