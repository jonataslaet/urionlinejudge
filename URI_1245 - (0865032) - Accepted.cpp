#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char** argv)
{
	int i, j, n, contpar, x, y;
	char pe[10002];
	int tam_pe[10002];
	while(scanf("%d", &n) != EOF)
	{
		contpar = 0;
		x = 10002;
		y = 10002;
		for(i = 0; i < n; i++)
		{
			scanf("%d %c", &tam_pe[i], &pe[i]);
			for (j = 0; j < i; j++)
			{
				if (tam_pe[i] == tam_pe[j] && ((pe[i] == 'E' && pe[j] == 'D') || (pe[i] == 'D' && pe[j] == 'E')))
				{
					contpar++;
					pe[i] = x++;
					tam_pe[i] = y++;
					pe[j] = x++;
					tam_pe[j] = y++;
				}
			}
		}
		printf("%d\n", contpar);
	}

	return 0;
}