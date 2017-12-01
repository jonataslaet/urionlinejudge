#include <stdio.h>

int main(int argc, char** argv)
{
	int maior, i, n, v[501];
	while(scanf("%d", &n) != EOF)
	{
		maior=1;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &v[i]);
			if (v[i] > maior)
			{
				maior = v[i];
			}
		}
		if (maior < 10) printf("1\n");
		else if (maior >= 10 && maior < 20) printf("2\n");
		else printf("3\n");
	}
	return 0;
}
