#include <stdio.h>
#include <math.h>

long int r(int x, int y)
{
	int z = ((3*x)*(3*x))+(y*y);
	return z;
}

long int b(int x, int y)
{
	int z = (2*(x*x))+((5*y)*(5*y));
	return z;
}

long int c(int x, int y)
{
	int z = (-100*x) + (y*y*y);
	return z;
}

int main(int argc, char** argv)
{
	int n, x, y, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if ((r(x,y)) > (b(x,y)) && (r(x,y)) > (c(x,y))) //rafael
		{
			printf("Rafael ganhou\n");
		}
		else if ((b(x,y)) > (r(x,y)) && (b(x,y)) > (c(x,y))) //beto
		{
			printf("Beto ganhou\n");
		}
		else //carlos
		{
			printf("Carlos ganhou\n");
		}
	}
	
	return 0;
}