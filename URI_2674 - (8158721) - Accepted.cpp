#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

// Decide se o inteiro n eh primo
bool is_prime(int n)
{
	if (n < 0) return is_prime(-n);
	if (n < 5 || n % 2 == 0 || n % 3 == 0) return (n == 2 || n == 3);
	int maxP = sqrt(n) + 2;
	for (int p = 5; p < maxP; p += 6)
		if (n % p == 0 || n % (p + 2) == 0) return false;
	return true;
}

int main(int argc, char *argv[])
{
	int n, num, todosOk;
	while(scanf("%d", &num)!=EOF)
	{
		n = num;
		todosOk = 1;
		while(num > 9)
		{
			if (!is_prime(num % 10))
			{
				todosOk = 0;
				break;
			}
			num /= 10;
		}
		if (!is_prime(num))todosOk = 0;
		if (todosOk == 1 && is_prime(n)) printf("Super\n");
		else if (is_prime(n)) printf("Primo\n");
		else if (!is_prime(n))printf("Nada\n");
	}
	return 0;
}