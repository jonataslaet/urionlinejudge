#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, k, m, n, tam, t;
	char string1[51], string2[51];

	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			scanf(" %[^(\n)]s", &string1);
			tam = strlen(string1);
			t = 1;
			j = 0;
			for (k = 0; k < tam; k++)
			{
				if (string1[k] != ' ' && t == 1)
				{
					string2[j] = string1[k];
					t = 0;
					j++;
				}
				else if (string1[k] == ' ')
				{
					t = 1;
				}
			}
			string2[j] = '\0';
			printf("%s\n", string2);
		}
	}
	
	return 0;
}