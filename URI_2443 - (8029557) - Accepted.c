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
	int a, b, c, d, divisor, dividendo, MDC;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	dividendo = ((((b * d)/b)*a)+(((b*d)/d)*c));
	divisor = (b*d);
	MDC = (mdc(dividendo, divisor));
	dividendo = dividendo / MDC;
	divisor = divisor / MDC;
	printf("%d %d\n", dividendo, divisor);
	return 0;
}