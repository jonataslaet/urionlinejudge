#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
	double n;
	cin >> n;
	printf("%.1lf %.1lf\n", n/log(n), 1.25506*(n/log(n)));
	return 0;
}