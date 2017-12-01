#include <stdio.h>

int main(int argc, char** argv)
{
	unsigned long long int i, n, soma, n1, n2;
	scanf("%llu %llu", &n1, &n2);
	n = n2-n1+1;
	soma = ((n1+n2)*n)/2;
	printf("%llu\n", soma);

	return 0;
}