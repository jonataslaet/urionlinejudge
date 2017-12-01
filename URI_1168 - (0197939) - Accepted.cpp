#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char v[1000000];
	int tam, i, n, j;
	double qtdleds;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", v);
		tam = strlen(v);
		qtdleds = 0;
		for (j = 0; j < tam; j++)
		{
			if (v[j] == '0')
			{
				qtdleds += 6;
			}
			else if (v[j] == '1')
			{
				qtdleds += 2;
			}
			else if (v[j] == '2')
			{
				qtdleds += 5;
			}
			else if (v[j] == '3')
			{
				qtdleds += 5;
			}
			else if (v[j] == '4')
			{
				qtdleds += 4;
			}
			else if (v[j] == '5')
			{
				qtdleds += 5;
			}
			else if (v[j] == '6')
			{
				qtdleds += 6;
			}
			else if (v[j] == '7')
			{
				qtdleds += 3;
			}
			else if (v[j] == '8')
			{
				qtdleds += 7;
			}
			else if (v[j] == '9')
			{
				qtdleds += 6;
			}
		}
		printf("%.f leds\n", qtdleds);
	}

	return 0;
}