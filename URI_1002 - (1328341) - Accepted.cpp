#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define pi 3.14159

int main(int argc, char** argv)
{
	double a, r;
	
	scanf("%lf", &r);
	a = pi * r * r;
	printf("A=%.4lf\n", a);
	
	return 0;
}