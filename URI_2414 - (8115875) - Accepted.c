#include <stdio.h>

int main(int argc, char** argv)
{
	int num, maior, i;
	for (i = 0;; i++)
	{
		scanf("%d", &num);
		if (num == 0) break;
		else
		{
			if (i == 0) maior = num;
			else
			{
				if (num > maior) maior = num;
			}
		}
	}
	printf("%d\n", maior);
	return 0;
}