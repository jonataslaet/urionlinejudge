#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int p, j1, j2, r, a, soma, p1 = 0, p2 = 0;
	cin >> p >> j1 >> j2 >> r >> a;

	soma = j1 + j2;
	//Se p = 1  então o jogador 1 escolheu par
	//Caso em que o jogador 1 ganha no modo convencional
	if ((soma % 2 == 0 && p == 1) || (soma % 2 != 0 && p == 0))
	{
		p1 = 1;
		p2 = 0;
		if (r == 1 && a == 1)
		{
			p1 = 0;
			p2 = 1;
		}
		else if (r == 1 && a == 0)
		{
			p1 = 1;
			p2 = 0;
		}
		else if (r == 0 && a == 1)
		{
			p1 = 1;
			p2 = 0;
		}
		else if (r == 0 && a == 0)
		{
			p1 = 1;
			p2 = 0;
		}
	}
	// Caso em que o jogador 1 escolhe ímpar e ganha no modo convencional
	else
	{
		p1 = 0;
		p2 = 1;
		if (r == 1 && a == 1)
		{
			p1 = 0;
			p2 = 1;
		}
		else if (r == 1 && a == 0)
		{
			p1 = 1;
			p2 = 0;
		}
		else if (r == 0 && a == 1)
		{
			p1 = 1;
			p2 = 0;
		}
		else if (r == 0 && a == 0)
		{
			p1 = 0;
			p2 = 1;
		}
	}
	if (p1 == 1) printf("Jogador 1 ganha!\n");
	else printf("Jogador 2 ganha!\n");
	return 0;
}