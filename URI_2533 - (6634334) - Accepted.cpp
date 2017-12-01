#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	double n, c, denominador, numerador;
	int m;
	while(scanf("%d", &m) != EOF)
	{
		numerador = 0.0;
		denominador = 0.0;
		for(int i = 0; i < m; i++)
		{
			scanf("%lf %lf", &n, &c);
			numerador += (n * c);
			denominador += c;
		}
		printf("%.4lf\n", numerador/(denominador*100));
	}
	return 0;
}