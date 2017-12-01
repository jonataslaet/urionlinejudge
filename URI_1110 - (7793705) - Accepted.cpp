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

/*
enquanto tiver 2 ou mais cartas na pilha.

Jogue fora a carta do topo e mova a próxima carta (a que ficou no topo) para a base da pilha.
*/

int main(int argc, char *argv[])
{
	int ultimo, topo, n, proxCarta;
	vector <int> rCards;
	vector <int> dCards;
	for(;;)
	{
		scanf("%d", &n);
		if (n == 0) break;
		else
		{
			topo = 0;
			for (int i = 1; i <= n; i++) rCards.push_back(i);
			//printf("tam=%d\n", rCards.size());
			ultimo = rCards.size();
			while(ultimo >= 2)
			{
				//printf("tam=%d\n", rCards.size());
				//rCards.erase(rCards.begin() + 0); //joga fora a carta do topo
				///*
				topo = rCards[0];
				dCards.push_back(topo);
				proxCarta = rCards[1];
				rCards.push_back(proxCarta);
				rCards.erase(rCards.begin() + 0);
				rCards.erase(rCards.begin() + 0);
				//*/
				ultimo -= 1;
			}

			ultimo = dCards.size()-1;
			//printf("ult=%d\n", ultimo);
			if (ultimo <= 0)
			{
				printf("Discarded cards: ");
				if (ultimo == -1) printf("\n");
				else printf("%d\n", dCards[ultimo]);
			}
			else
			{
				printf("Discarded cards: ");
				for (int i = 0; i <= ultimo; i++)
				{
					if (i == ultimo) printf("%d\n", dCards[i]);
					else printf("%d, ", dCards[i]);
				}
			}

			//--------------------------
			ultimo = rCards.size()-1;
			if (ultimo <= 0)
			{
				printf("Remaining card: ");
				printf("%d\n", rCards[0]);
			}
			else
			{
				//printf("ult=%d\n", ultimo);
				printf("Remaining card: ");
				for (int i = 0; i <= ultimo; i++)
				{
					if (i == ultimo) printf("%d\n", rCards[i]);
					else printf("%d, ", rCards[i]);
				}
			}
			rCards.clear();
			dCards.clear();
		}
	}

	return 0;
}