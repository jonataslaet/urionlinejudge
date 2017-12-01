#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int posDaLetra (char c)
{

	return (c - 97);
}
int main(int argc, char** argv)
{
	int n, tam, qtdEncontrada[1002], q;
	char alfabeto[] = {"abcdefghijklmnopqrstuvwxyz"};
	char frase[1002];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		//Captura a frase
		gets(frase);

		//Iniciazlia com 0 (zero) todos as células de qtdEncontradas
		memset(qtdEncontrada, 0, sizeof(qtdEncontrada));

		//Inicializa a quantidade de letras do alfabeto usada
		q = 0;

		//Captura a quantidade de caracteres da frase
		tam = strlen(frase);

		//Percorre cada caractere da frase
		for (int k = 0; k < tam; k++)
		{
			//Se esse caractere for uma letra
			if (frase[k] >= 'a' && frase[k] <= 'z')
			{
				//Aumenta em 1 a quantidade dessa letra na sua posição em qtdEncontrada
				qtdEncontrada[posDaLetra(frase[k])]++;
			}
		}
		for (int k = 0; k < 26; k++)
		{
			if (qtdEncontrada[k] > 0) q++;
		}
		if (q == 26)
		{
			cout << "frase completa" << endl;
		}
		else if (q >= 13)
		{
			cout << "frase quase completa" << endl;
		}
		else
		{
			cout << "frase mal elaborada" << endl;
		}
	}
	return 0;
}