#include <stdio.h>

int main(int argc, char** argv)
{
	int r[21], b, c, d, v, n, i, sai;
	for(;;)
	{
		scanf("%d %d", &b, &n);
		if (b == 0 && n == 0) break;
		else
		{
			sai = 0;
			for (i = 0; i < b; i++)
			{
				scanf("%d", &r[i]);
			}
			for(i = 0; i < n; i++)
			{
				scanf("%d %d %d", &d, &c, &v);
				r[d - 1] -= v;
				r[c - 1] += v;
			}
			for (i = 0; i < b; i++)
			{
				if (r[i] < 0)
				{
					sai = 1;
					break;
				}
			}
			if (sai == 1) printf("N\n");
			else printf("S\n");
		}
	}
	return 0;
}