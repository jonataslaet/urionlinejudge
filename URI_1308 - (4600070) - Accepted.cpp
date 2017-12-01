#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
	int N;
	uint64_t n, sn, delta;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> sn;
		delta = 1 - 4 * 1 * (-(2 * sn));
		n = 1;
		n = (-1 + (sqrt((long double)delta))) / 2;
		cout << n << endl;
	}
	return 0;
}