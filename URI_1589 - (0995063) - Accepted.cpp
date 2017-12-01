#include <stdio.h>

int main(int argc, char** argv)
{
	int i, n, r1, r2;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &r1, &r2);
		printf("%d\n", (r1+r2));
	}

	return 0;
}