#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i, n, r[10000], contm, contj;

	for (;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			contm = 0;
			contj = 0;
			for (i = 0; i < n; i++)
			{
				scanf("%d", &r[i]);
				if (r[i] == 0) contm++;
				else if (r[i] == 1) contj++;
			}
			printf("Mary won %d times and John won %d times\n", contm, contj);
		}
	}
	


	return 0;
}