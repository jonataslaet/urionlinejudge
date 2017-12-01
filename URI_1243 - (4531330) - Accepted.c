#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int somaLetrasWords, achouLetra, achouSpace, achouPonto, achouNumero, k, pontos, tam, t, soma, qtdpalavras, qtdletras, compmedint;
	char string1[101], caractereDaFrente, caractereAnterior;
	double compmed;


	while (gets(string1))//while (scanf(" %[^(\n)]s", &string1) != EOF)
	{
		tam = strlen(string1);
		t = 1;
		qtdpalavras = 0;
		somaLetrasWords = 0;
		soma = 0;
		qtdletras = 0;
		achouLetra = 0;
		achouSpace = 0;
		achouNumero = 0;
		achouPonto =  0;
		for (k = 0; k < tam; k++)
		{
			caractereDaFrente = string1[k + 1];
			caractereAnterior = string1[k - 1];
			//Se este caractere for uma letra
			if (((string1[k] >= 'a' && string1[k] <= 'z') || (string1[k] >= 'A' && string1[k] <= 'Z')))
			{
				qtdletras++;
				achouLetra++;
				if ((caractereDaFrente == '\0' || (caractereDaFrente == '.' && string1[k + 2] == '\0')) && achouNumero == 0 && achouPonto == 0 && achouLetra > 0)
				{
					if (caractereDaFrente == '\0' || (caractereDaFrente == '.' && string1[k + 2] == '\0'))
					{
						somaLetrasWords += achouLetra;
						//printf("QtdLetWord: %d\n", achouLetra);
						qtdpalavras++;
					}
				}
				if (achouNumero > 0 || achouPonto > 0)
				{
					achouLetra = 0;
				}
				//printf("QtdLetWord: %d\n", achouLetra);
			}
			//Se este caractere for um espaço
			else if (string1[k] == ' ')
			{
				achouSpace++;
				//Se for pelo menos o primeiro espaço encontrado E já tiver achado pelo menos 1 letra E nenhum número E até 1 ponto
				if (achouSpace > 0 && achouLetra > 0 && achouNumero == 0 && achouPonto < 2)
				{
					//printf("QtdLetWord: %d\n", achouLetra);
					qtdpalavras++;
					somaLetrasWords += achouLetra;
					achouSpace = 0;
					achouLetra = 0;
				}
				else
				{
					achouNumero = 0;
					achouPonto = 0;
					achouLetra = 0;
					achouSpace = 0;
				}
			}
			//Se não é letra nem espaço
			else
			{
				//Se for ponto,
				if (string1[k] == '.')
				{
					//E, se não tiver achado outro ponto e não tiver achado algum número e já tiver pelo menos uma letra e o da frente for (espaço ou fim)
					if ((achouPonto == 0 && achouNumero == 0 && achouLetra > 0 && caractereDaFrente == ' ' && (caractereDaFrente == ' ' || caractereDaFrente == '\0')))
					{
						//printf("QtdLetWord: %d\n", achouLetra);
						somaLetrasWords += achouLetra;
						qtdpalavras++;
						achouLetra = 0;
						achouSpace = 0;
					}
					achouLetra = 0;
					achouSpace = 0;
					achouPonto++;
				}
				else
				{
					achouNumero++;
					achouLetra = 0;
					achouSpace = 0;
					achouPonto = 0;
				}
			}
		}
		//printf("Qtd Letras: %d\n", qtdletras);
		//printf("Qtd Let Words: %d\n", somaLetrasWords);
		//printf("Qtd Words: %d\n", qtdpalavras);

		if (qtdpalavras == 0)
		{
			compmedint = 0;
		}
		else
		{

			compmedint = somaLetrasWords / qtdpalavras;
		}
		//printf("CompMed: %d\n", compmedint);
		if (compmedint >= 6) pontos = 1000; //printf("1000\n"); //
		else if (compmedint == 4 || compmedint == 5) pontos = 500;//printf("500\n"); //
		else if (compmedint <= 3) pontos = 250;//printf("250\n"); //
		printf("%d\n", pontos);
	}

	return 0;
}
