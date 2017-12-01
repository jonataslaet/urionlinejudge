#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	int q, i, t, tam, k, val1, val2;
	char string1[10002], string2[10002];
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%s %s", string1, string2);
		tam = strlen(string1);
		q = 0;
		for (k = 0; k < tam; k++)
		{
			val1 = string1[k];
			val2 = string2[k];
			if (val1 > val2)
			{
				q += (val2 + 26) - val1;
			}
			else if (val1 < val2)
			{
				q += val2 - val1;
			}
		}
		printf("%d\n", q);
	}


	return 0;
}