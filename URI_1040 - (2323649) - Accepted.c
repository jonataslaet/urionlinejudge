#include <stdio.h>

int main()
{

	double extra, n1, n2, n3, n4, media, mf;

	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
	printf("Media: %.1lf\n", media);
	if (media >= 7.0)
	{
		
		printf("Aluno aprovado.\n");
	}
	else if (media >= 5.0 && media < 7.0)
	{
		//printf("Media: %lf\n", media);
		printf("Aluno em exame.\n");
		scanf("%lf", &extra);
		printf("Nota do exame: %.1lf\n", extra);
		mf = ((extra + media)/2);
		if (mf >= 5.0) printf("Aluno aprovado.\n");
		else printf("Aluno reprovado.\n");
		printf("Media final: %.1lf\n", mf);
	}
	else// if (media < 5.0)
	{
		//printf("Media: %.1lf\n", media);
		printf("Aluno reprovado.\n");
	}
	

	return 0;
}