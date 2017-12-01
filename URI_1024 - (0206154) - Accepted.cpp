#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i, n, j, k, m, metade, tamword;
	char word[1001], aux[1001];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("\n%[^\n]s", word);
		tamword = strlen(word);
		strcpy(aux, word);
		for (j = 0; j < 3; j++)
		{
			m = tamword - 1;
			metade = (tamword / 2);
			for (k = 0; k < tamword; k++)
			{
				if (j == 0 && ((word[k] >= 'A' && word[k] <= 'Z') || (word[k] >= 'a' && word[k] <= 'z')))
				{
					word[k] += 3;
				}
				else if (j == 1) aux[k] = word[m--];
				else if (j == 2)
				{
					if (k >= metade) aux[k] = aux[k] - 1;
				}
			}
		}
		printf("%s\n", aux);
	}

	return 0;
}