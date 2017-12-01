#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

	char n[101], result[101];
	long int d, t, tam, j, i, algint, num;

	for (;;)
	{
		scanf("%ld %s", &d, n);
		algint = n[0] - '0';
		if (d == 0) break;
		else
		{
			t = 0;
			tam = strlen(n);
			for (i = 0; i < tam; i++)
			{
				algint = n[i] - '0';
				if (algint != d)
				{
					result[t] = n[i];
					t++;
				}
			} //00400056456445646546545645678744542310123132
			result[t] = '\0';
			for (i = 0; i < t; i++)
				if (result[i] != '0') break;
				
			if (i == t) printf("0\n");
			else
			{
				printf("%s\n", result+i);
			}
			//num = atoi(result);
			//printf("%ld\n", num);
		}

	}

	return 0;
}