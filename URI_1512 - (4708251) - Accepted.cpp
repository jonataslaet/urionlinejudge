#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
using namespace std;

unsigned long int mdc(unsigned long int a, unsigned long int b)
{
	if (b == 0) return a;
	else
		return mdc(b, a % b);
}
unsigned long int mmc(unsigned long int a, unsigned long int b)
{
	unsigned long int div;
	if (b == 0) return a;
	else
		div = (a * b) / (mdc(a, b));
	return (div);
}

int main(int argc, char *argv[])
{
	/*
	QtAzulejos= ParteInteiraDe(N/A)+ ParteInteiraDe(N/B) - ParteInteiraDe(N/(AxB))
	*/
	unsigned long int N, A, B;
	for (;;)
	{
		cin >> N >> A >> B; //Captura as três variáveis da questão
		if (N == 0 && A == 0 && B == 0) break;
		else
		{
			cout << (N / A) + (N / B) - (N / (mmc(A, B))) << endl;
		}

	}
	return 0;
}