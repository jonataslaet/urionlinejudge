#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int i, j, n, x, qt, s, vet[10], dif;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &qt, &s);
		for (j = 0; j < qt; j++)
		{
			scanf("%d", &vet[j]);
			if (j == 0)
			{
				dif = abs(vet[0] - s);
				x = j + 1;
			}
			else
			{
				if ((abs(vet[j] - s)) < dif)
				{
					dif = abs(vet[j] - s);
					x = j + 1;
				}
			}
		}
		printf("%d\n", x);
	}
	return 0;
}