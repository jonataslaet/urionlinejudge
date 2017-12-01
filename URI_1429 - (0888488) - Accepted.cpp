#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long int fatorial (int n)
{
	if(n == 1 || n == 0) return 1;
	return fatorial(n - 1) * n;
}

int main(int argc, char** argv)
{
	int tam, i, x, id, numint;
	char numchar[6];
	long long int n;
	for (;;)
	{
		scanf("%s", numchar);
		numint = atoi(numchar);
		if (numint == 0) break;
		else
		{
			tam = strlen(numchar);
			id = 1;
			n = 0;
			for(i = tam - 1; i >= 0; i--)
			{
				x = numchar[i] - '0';
				n += (((long long int)x) * fatorial(id++));
			}

			printf("%lld\n", n);
		}
	}
	return 0;
}