#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{

	int n, i, k, q, tam, j;
	char string1[51], string2[51];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", string1);
		tam = strlen(string1);
		strcpy(string2, string1);
		scanf("%d", &q);
		if (q == 0) printf("%s\n", string2);
		else
		{
			for (j = 0; j < tam; j++)
			{
				for (k = 0; k < q; k++)
				{
					if ((string2[j] - 1) < 'A') string2[j] = 'Z';
					else string2[j] = string2[j] - 1;
				}
			}
			string2[tam] = '\0';
			printf("%s\n", string2);
		}
	}

	return 0;
}