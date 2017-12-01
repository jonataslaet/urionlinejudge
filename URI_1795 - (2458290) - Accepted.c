#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	unsigned int R;
	double r;
	scanf("%u", &R);
 	r = pow(3, (double)R);
 	printf("%u\n", (unsigned int)r);
	return 0;
}