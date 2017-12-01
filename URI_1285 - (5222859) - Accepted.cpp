#include <iostream>
#include <stdio.h>
#define fori(n, m) for (int i = n; i <= (m); i++)
using namespace std;

int qtdDigitos(int num)
{
	if (num < 10) return 1;
	else if (num < 100) return 2;
	else if (num < 1000) return 3;
	else return 4;
}

int main(int argc, char *argv[])
{
	int n, m, qtdFromNtoM;
	int d1, d2, d3, d4;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		qtdFromNtoM = 0;
		fori(n, m)
		{
			if (qtdDigitos(i) == 1)
			{
				qtdFromNtoM++;
			}
			else if (qtdDigitos(i) == 2)
			{
				d2 = (i / 10);
				d1 = (i % 10);
				if (d1 != d2) qtdFromNtoM++;
			}
			else if (qtdDigitos(i) == 3)
			{
				d3 = i / 100;
				d2 = (i % 100) / 10;
				d1 = (i % 100) % 10;
				if (d1 != d2 && d1 != d3 && d2 != d3) qtdFromNtoM++;
			}
			else// if (qtdDigitos(i) == 4)
			{
				d4 = i / 1000;
				d3 = (i % 1000) / 100;
				d2 = ((i % 1000) % 100) / 10;
				d1 = ((i % 1000) % 100) % 10;
				if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
				{
					qtdFromNtoM++;
				}
			}
		}
		printf("%d\n", qtdFromNtoM);
	}
	return 0;
}