#include <iostream>
#include <math.h>
#define m 2147483647
using namespace std;

//(2^31) - 1 = 2147483647 
// b^e % m
unsigned long long int mod_exp(int b, int e)
{
	unsigned long long int res = 1;
	while (e > 0)
	{
		if (e & 1) res = (res * b) % m;
		e >>= 1;
		b = ((unsigned long long int) b * b) % m;
	}
	return res;
}

int main(int argc, char *argv[])
{
	//3^20 mod(2^31-1)
	int R;
	cin >> R;
	cout << mod_exp(3, R) << endl;
	//cout << ((unsigned long long int)(pow((double)3,R))) % (((unsigned long long int)(pow(2.0,31.0)))-1) << endl;
	return 0;
}