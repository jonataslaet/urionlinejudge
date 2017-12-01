#include <cstdio>
#include <algorithm>
#include <stdlib.h>
#include <cmath>
using namespace std;

int compare (const void *x, const void *y)
{
	return *(int *)x - *(int *)y;
}
int main(int argc, char *argv[])
{
	int v[3];
	scanf("%d %d %d", &v[0], &v[1], &v[2]);
	qsort(v, 3, sizeof(int), compare);
	if (v[0] + v[1] == v[2] || v[0] == v[1] || v[1] == v[2])
	{
		printf("S\n");
	}
	else
	{
		printf("N\n");
	}
	return 0;
}