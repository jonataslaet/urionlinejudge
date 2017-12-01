#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int phi(int x)
{
	int ret = 1, i, pow;
	for (i = 2; x != 1; i++)
	{
		pow = 1;
		if(i > sqrt(x))break;
		while (!(x % i))
		{
			x /= i;
			pow *= i;
		}
		ret *= (pow - (pow / i));
	}
	if(x != 1)ret *= (x - 1);
	return ret;
}

int main(int argc, char *argv[])
{
	int N, resposta;
	while (cin >> N)
	{
		resposta = (phi(N)) / 2;
		cout << resposta << endl;
	}
	return 0;
}