#include <stdio.h>

int main(int argc, char** argv)
{
	int i, j, k, n, x;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d", &x);
			if (x == 1) printf("Rolien\n");
			else if (x == 2) printf("Naej\n");
			else if (x == 3) printf("Elehcim\n");
			else if (x == 4) printf("Odranoel\n");
		}		
	}
	return 0;
}