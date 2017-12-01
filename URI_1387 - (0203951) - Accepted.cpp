#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int l, r;

	for (;;)
	{
		scanf("%d %d", &l, &r);
		if (l == 0 && r == 0) break;
		else
		{
			printf("%d\n", (l+r));
		}
	}
	

	return 0;
}