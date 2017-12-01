#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	double s, n;
	cin >> n;
	s = 0;
	//printf(".%10lf\n", tres + (1.0 / (6 + (1.0 / 6))));
	for (int i = 1; i <= n; i++)
	{
		s = 1 / (s + 6);
	}
	printf("%.10lf\n", 3 + s);
	return 0;
}