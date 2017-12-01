
#include<stdio.h>
#include<iostream>
int main()
{
	int A, i, j, B;
	float soma = 0, C[1100], d, media, s, t;
	scanf("%d", &A);
	for(i = 1; i <= A; i++)
	{
		scanf("%d", &B);

		d = B;
		for(j = 1; j <= B; j++)
		{
			scanf("%f", &C[j]);
			soma = soma + C[j];
		}
		media = soma / d;
		t = 0;

		for(j = 1; j <= B; j++)
		{
			if(C[j] > media)
				t = t + 1;
		}
		s = 100*(t/B);
		printf("%.3f%%\n", s);
		s = soma = 0;
	}
}