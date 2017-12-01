#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int i, x, y, n, mapa[501][501], ok;
	
	
	scanf("%d", &n);
	ok = 0;
	memset(mapa, 0, sizeof(mapa));	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		mapa[x][y]++;
		if (mapa[x][y] > 1)
		{
			ok = 1;
		}
	}
	
	printf("%d\n", ok);

	return 0;
}