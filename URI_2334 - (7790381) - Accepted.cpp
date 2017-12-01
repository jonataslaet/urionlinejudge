#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>
#include <ctype.h>
#include <algorithm>
#include <utility>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	unsigned long long int qtdPatinhos;
	unsigned long long int umFoiPassear = -1;

	for (;;)
	{
		scanf("%llu", &qtdPatinhos);
		if (qtdPatinhos == -1) break;
		else
		{
			if (qtdPatinhos == 0) printf("%llu\n", qtdPatinhos);
			else
			{
				printf("%llu\n", qtdPatinhos + umFoiPassear);
			}
		}
	}

	return 0;
}