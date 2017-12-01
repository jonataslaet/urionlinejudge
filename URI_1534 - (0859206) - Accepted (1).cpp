#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n, i, j, posDo2;
	while(scanf("%d", &n) != EOF)
	{
		posDo2 = n - 1;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i + j == posDo2) printf("2");
				else if (i == j) printf("1");
				else printf("3");
			}
			printf("\n");
		}
	}
	return 0;
}