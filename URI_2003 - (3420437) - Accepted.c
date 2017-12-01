#include <stdio.h>

int main(int argc, char** argv)
{
	int h, m, h2 = 8, m2 = 0, minTotal, minTotal2, atraso;
	while(scanf("%d:%d", &h, &m) != EOF)
	{
		h = h + 1;
		minTotal = h * 60 + m ;
		minTotal2 = h2 * 60 + m2;
		atraso = minTotal - minTotal2;
		if (atraso <= 0) atraso = 0;
		printf("Atraso maximo: %d\n", atraso);
	}
	return 0;
}