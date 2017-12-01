#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int k, tam, valma, valmi, r;
	char string1[51];

	while (gets(string1))
	{
		tam = strlen(string1);
		for (k = 0; k < tam; k++)
		{
			if (string1[k] >= 'a' && string1[k] <= 'z')
			{
				valmi = string1[k];
				valmi += 13;
				if (valmi > 'z')
				{
					r = (valmi - 'z') - 1;
					string1[k] = 'a';
					string1[k] += r;
				}
				else string1[k] = string1[k] + 13;
			}
			else if (string1[k] >= 'A' && string1[k] <= 'Z')
			{
				valma = string1[k];
				valma += 13;
				if (valma > 'Z')
				{
					r = (valma - 'Z') - 1;
					string1[k] = 'A';
					string1[k] += r;
				}
				else string1[k] = string1[k] + 13;
			}
		}
		printf("%s\n", string1);
	}

	return 0;
}