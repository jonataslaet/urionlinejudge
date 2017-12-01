#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	unsigned long int x, m;
	while(1)
	{
		scanf("%lu %lu", &x, &m);
		if (x == 0 && m == 0) break;
		else
		{
			printf("%lu\n", x*m);
		}
	}
	return 0;
}