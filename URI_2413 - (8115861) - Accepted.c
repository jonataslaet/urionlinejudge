#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int t, i, r;

	while (scanf("%ld", &t) != EOF)
	{
		r = t;
		for (i = 0; i < 2; i++)
		{
			r *= 2;
		}
		printf("%ld\n", r);
	}

	return 0;
}