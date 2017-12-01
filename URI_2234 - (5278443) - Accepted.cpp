#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int h, p;
	scanf("%d %d", &h, &p);
	printf("%.2lf\n", (double)h/(double)p);
	
	return 0;
}