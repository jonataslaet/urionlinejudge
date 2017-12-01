#include <stdio.h>
#include <stdlib.h>

int mdc (int n1, int n2)
{
	if (n2 == 0) return n1;
	return mdc(n2, n1 % n2);
}

int compare (const void *x, const void *y)
{
	return (*(int*)x - * (int*)y);
}

int main(int argc, char** argv)
{
	int n[3];
	while (scanf("%d %d %d", &n[0], &n[1], &n[2]) != EOF)
	{
		qsort(n, 3, sizeof(int), compare);
		
		if ((n[2] * n[2]) != ((n[0] * n[0]) + (n[1] * n[1])))
		{
			printf("tripla\n");
		}
		else
		{
			if (mdc(mdc(n[2], n[1]), n[0]) == 1) printf("tripla pitagorica primitiva\n");
			else printf("tripla pitagorica\n");
		}
	}

	return 0;
}