#include <stdio.h>

int main()
{

	int i, q, x, soma, z;

	scanf("%d", &x);
	do
	{
		scanf("%d", &z);
	}
	while(z <= x);
	soma = x;
	q = 0;
	for (i = x;; i++)
	{
		if (soma > z)
		{
			q++;
			break;
		}
		else
		{
			soma += i;
		}
		q++;
	}
	printf("%d\n", q);

	return 0;
}
