#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int mdc( int n1, int n2 )
{
	if( n2 == 0 ) return n1;
	return mdc(n2, n1 % n2);
}

int main()
{
	int n, i, f1, f2, MDC;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &f1, &f2);
		MDC = mdc(f1, f2);
		printf("%d\n", MDC);
	}

	return 0;
}