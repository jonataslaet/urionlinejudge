#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int absoluto(int x, int y)
{
	int d = 0;
	d = x - y;
	if (d < 0) return -d;
	else return d;
}
int main(int argc, char *argv[])
{
	int x, y, m, c, dx, dy;
	while(scanf("%d %d", &x, &y)!=EOF)
	{
		c = 0;
		dx = 0;
		dy = 0;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				scanf("%d", &m);
				if (m != 0)
				{
					if (c == 0)
					{
						dx = i;
						dy = j;
					}
					else if (c == 1)
					{
						dx = absoluto(i, dx);
						dy = absoluto(j, dy);
					}
					c++;
				}
			}
		}
		printf("%d\n", dx + dy);
	}
	return 0;
}