#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int t, n;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%d\n", (int)(pow(2, n) - 1));
	}
	return 0;
}