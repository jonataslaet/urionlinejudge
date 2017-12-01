#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	long int H, maior;
	while(1)
	{
		scanf("%ld", &H);
		if (H == 0) break;
		else
		{
			maior = 0;
			if (H > maior) maior = H;
			while (H != 1)
			{
				//hn0 = { ½ × hn-1 se hn-1 é par;
				if (H % 2 == 0)
				{
					H = H / 2;
				}
				//hn0 = { 3 × hn-1 + 1 se hn-1 é ímpar.
				else
				{
					H = H * 3 + 1;
				}
				if (H > maior) maior = H;
			}
			printf("%ld\n", maior);
		}
	}

	return 0;
}