#include <stdio.h>

int main()
{

	int n, i, aux;
	
	scanf("%d", &n);
	aux = n-1;
	for (i = 0; i < n; i++)
	{
		printf("Ho");
		if (i==aux)
		{
			printf("!\n");
		}
		else
		{
			printf(" ");
		}
	}


	return 0;
}