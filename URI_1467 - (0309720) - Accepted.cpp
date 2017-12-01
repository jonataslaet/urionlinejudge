#include <stdio.h>

int main()
{
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a == b && b == c)
		{
			printf("*\n");
		}
		else
		{
			if (a == b)
			{
				printf("C\n");
			}
			else if (b == c)
			{
				printf("A\n");
			}
			else
			{
				printf("B\n");
			}
		}
	}

	return 0;
}