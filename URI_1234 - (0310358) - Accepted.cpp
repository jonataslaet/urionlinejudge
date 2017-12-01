#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int x, i, tam;
	char string1[51], string2[51];
	while (gets(string1))
	{
		x = 0;
		tam = strlen(string1);
		for (i = 0; i < tam; i++)
		{
			if (string1[i] == ' ')
			{
				string2[i] = ' ';
			}
			else if (x == 0)
			{
				string2[i] = toupper(string1[i]);
				x = 1;
			}
			else
			{
				string2[i] = tolower(string1[i]);
				x = 0;
			}
		}
		string2[i] = '\0';
		printf("%s\n", string2);
	}
	return 0;
}