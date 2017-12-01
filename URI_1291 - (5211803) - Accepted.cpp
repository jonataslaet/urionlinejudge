#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define pi 3.1415926535897932384
int main(int argc, char *argv[])
{
	double a, aAoQuadrado, A1, A2, A3;
	//A1 = a² * ((pi/3)+(3/2)-raizDe(3))
	//A2 = a² * ((pi/3)-5+2*raizDe(3))
	//A3 = a² - A1 - A2;
	while(scanf("%lf", &a) != EOF)
	{
		aAoQuadrado = a * a;
		A1 = aAoQuadrado * ((pi / 3) + 1 - (sqrt(3)));
		A2 = aAoQuadrado * ((pi / 3) - 4 + (2 * (sqrt(3))));
		A3 = aAoQuadrado - A1 - A2;
		printf("%.3lf %.3lf %.3lf\n", A1, A2, A3);
	}
	return 0;
}