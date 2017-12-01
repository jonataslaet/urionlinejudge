#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	int n, i, v, yes;
	scanf("%d", &n);
	yes = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &v);
		if (v == 0) yes++;
	}
	if (yes > n / 2) printf("Y\n");
	else printf("N\n");
	return 0;
}