#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

long long int mdc(long long int n1, long long int n2)
{
	if (n2 == 0) return n1;
	return mdc(n2, n1 % n2);
}

int main()
{
	int n, i;
	long long int n1, d1, n2, d2, den, num, numsimp, densimp, MDC;
	char op1, op, op2;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%lld %c %lld %c %lld %c %lld", &n1, &op1, &d1, &op, &n2, &op2, &d2);
		if (op == '/')
		{
			den = d1 * n2;
			num = n1 * d2;
		}
		else if (op == '*')
		{
			den = d1 * d2;
			num = n1 * n2;
		}
		else if (op == '-')
		{
			den = d1 * d2;
			num = ((den / d1) * n1) - ((den / d2) * n2);
		}
		else if (op == '+')
		{
			den = d1 * d2;
			num = ((den / d1) * n1) + ((den / d2) * n2);
		}
		MDC = mdc((abs(num)), (abs(den)));
		numsimp = num / MDC;
		densimp = den / MDC;

		printf("%lld/%lld = %lld/%lld\n", num, den, numsimp, densimp);
	}

	return 0;
}