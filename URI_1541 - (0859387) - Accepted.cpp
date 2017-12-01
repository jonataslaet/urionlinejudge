#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	int l, a, b, c;
	for (;;)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0) break;
		else
		{
			l = trunc(sqrt((a*b*100)/c));
			printf("%d\n", l);
		}
	}

	return 0;
}