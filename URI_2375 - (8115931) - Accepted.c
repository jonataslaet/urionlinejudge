#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	double d;
	int a, l, p;
	
	scanf("%lf", &d);
	scanf("%d %d %d", &a, &l, &p);
	if (d <= a && d <= l && d <= p) printf("S\n");
	else printf("N\n");
	
	return 0;
}