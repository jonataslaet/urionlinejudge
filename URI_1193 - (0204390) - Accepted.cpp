#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//"%I64d é pra long long int
typedef struct Dados
{
	char texto[4];
	char valx[33], hex[33], dec[33], bin[33];
} dado;

int main()
{
	long long int n, i, tamvalx, tamtexto, soma, z, ind, y, h, b, resto, ndec, aux;
	dado info;
	char numbin[33], numhex[33];
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%s %s", info.valx, info.texto);
		tamvalx = strlen(info.valx);
		tamtexto = strlen(info.texto);
		printf("Case %lld:\n", i);
		//############################ TEXTO == "dec" ##############################
		if (strcmp(info.texto, "dec") == 0)
		{
			ndec = 0;
			ind = tamvalx - 1;
			//CONVERSÃO TEMPORÁRIA PRA DECIMAL
			for (aux = 0; aux < tamvalx; aux++)
			{
				ndec = ndec + ((info.valx[aux]) - '0') * (long long int)(pow(10, ind));
				ind--;
			}
			aux = ndec;
			//Converte pra hexadecimal
			ind = 0;
			y = 0, h = 0;
			if (ndec > 9)
			{
				while (ndec >= 16)
				{
					resto = ndec % 16;
					if (resto == 15) numhex[ind++] = 'f';
					else if (resto == 14) numhex[ind++] = 'e';
					else if (resto == 13) numhex[ind++] = 'd';
					else if (resto == 12) numhex[ind++] = 'c';
					else if (resto == 11) numhex[ind++] = 'b';
					else if (resto == 10) numhex[ind++] = 'a';
					else if (resto == 9) numhex[ind++] = '9';
					else if (resto == 8) numhex[ind++] = '8';
					else if (resto == 7) numhex[ind++] = '7';
					else if (resto == 6) numhex[ind++] = '6';
					else if (resto == 5) numhex[ind++] = '5';
					else if (resto == 4) numhex[ind++] = '4';
					else if (resto == 3) numhex[ind++] = '3';
					else if (resto == 2) numhex[ind++] = '2';
					else if (resto == 1) numhex[ind++] = '1';
					else if (resto == 0) numhex[ind++] = '0';
					ndec = ndec / 16;
				}
				if (ndec == 15) numhex[ind++] = 'f';
				else if (ndec == 14) numhex[ind++] = 'e';
				else if (ndec == 13) numhex[ind++] = 'd';
				else if (ndec == 12) numhex[ind++] = 'c';
				else if (ndec == 11) numhex[ind++] = 'b';
				else if (ndec == 10) numhex[ind++] = 'a';
				else if (ndec == 9) numhex[ind++] = '9';
				else if (ndec == 8) numhex[ind++] = '8';
				else if (ndec == 7) numhex[ind++] = '7';
				else if (ndec == 6) numhex[ind++] = '6';
				else if (ndec == 5) numhex[ind++] = '5';
				else if (ndec == 4) numhex[ind++] = '4';
				else if (ndec == 3) numhex[ind++] = '3';
				else if (ndec == 2) numhex[ind++] = '2';
				else if (ndec == 1) numhex[ind++] = '1';
				else if (ndec == 0) numhex[ind++] = '0';
				numhex[ind] = '\0';
				for (h = ind - 1; h >= 0; h--) info.hex[y++] = numhex[h];
				info.hex[y] = '\0';
				printf("%s hex\n", info.hex);
			}
			else printf("%lld hex\n", ndec);
			//Transforma pra binário
			ind = 0;
			y = 0, b = 0;
			if (aux > 9)
			{
				while (aux >= 2)
				{
					resto = aux % 2;
					if (resto == 0) numbin[ind++] = '0';
					else if (resto == 1) numbin[ind++] = '1';
					aux = aux / 2;
				}
				if (aux == 1) numbin[ind++] = '1';
				else if (aux == 0) numbin[ind++] = '0';
				numbin[ind] = '\0';
				for (b = ind - 1; b >= 0; b--) info.bin[y++] = numbin[b];
				info.bin[ind] = '\0';
				printf("%s bin\n", info.bin);
			}
			else printf("%lld bin\n", aux);
		}
		//############################ TEXTO == "bin" ##############################
		else if (strcmp(info.texto, "bin") == 0)
		{
			//Converte pra decimal
			ind = tamvalx - 1;
			soma = 0;
			for (z = 0; z < tamvalx; z++)
			{
				soma = soma + (info.valx[z] - '0') * (long long int)(pow(2, ind));
				ind--;
			}
			printf("%lld dec\n", soma);

			//Converte pra hexadecimal
			ind = 0;
			y = 0, h = 0;
			if (soma > 9)
			{
				while (soma >= 16)
				{
					resto = soma % 16;
					if (resto == 15) numhex[ind++] = 'f';
					else if (resto == 14) numhex[ind++] = 'e';
					else if (resto == 13) numhex[ind++] = 'd';
					else if (resto == 12) numhex[ind++] = 'c';
					else if (resto == 11) numhex[ind++] = 'b';
					else if (resto == 10) numhex[ind++] = 'a';
					else if (resto == 9) numhex[ind++] = '9';
					else if (resto == 8) numhex[ind++] = '8';
					else if (resto == 7) numhex[ind++] = '7';
					else if (resto == 6) numhex[ind++] = '6';
					else if (resto == 5) numhex[ind++] = '5';
					else if (resto == 4) numhex[ind++] = '4';
					else if (resto == 3) numhex[ind++] = '3';
					else if (resto == 2) numhex[ind++] = '2';
					else if (resto == 1) numhex[ind++] = '1';
					else if (resto == 0) numhex[ind++] = '0';
					soma = soma / 16;
				}
				if (soma == 15) numhex[ind++] = 'f';
				else if (soma == 14) numhex[ind++] = 'e';
				else if (soma == 13) numhex[ind++] = 'd';
				else if (soma == 12) numhex[ind++] = 'c';
				else if (soma == 11) numhex[ind++] = 'b';
				else if (soma == 10) numhex[ind++] = 'a';
				else if (soma == 9) numhex[ind++] = '9';
				else if (soma == 8) numhex[ind++] = '8';
				else if (soma == 7) numhex[ind++] = '7';
				else if (soma == 6) numhex[ind++] = '6';
				else if (soma == 5) numhex[ind++] = '5';
				else if (soma == 4) numhex[ind++] = '4';
				else if (soma == 3) numhex[ind++] = '3';
				else if (soma == 2) numhex[ind++] = '2';
				else if (soma == 1) numhex[ind++] = '1';
				else if (soma == 0) numhex[ind++] = '0';
				numhex[ind] = '\0';
				for (h = ind - 1; h >= 0; h--) info.hex[y++] = numhex[h];
				info.hex[y] = '\0';
				printf("%s hex\n", info.hex);
			}
			else printf("%lld hex\n", soma);
		}
		//############################ TEXTO == "hex" ##############################
		else if (strcmp(info.texto, "hex") == 0)
		{
			//Converte pra decimal
			ind = tamvalx - 1;
			soma = 0;
			for (z = 0; z < tamvalx; z++)
			{
				if ((info.valx[z] == 'a') || (info.valx[z] == 'b') || (info.valx[z] == 'c') || (info.valx[z] == 'd') || (info.valx[z] == 'e') || (info.valx[z] == 'f'))
					soma = soma + ((info.valx[z] - '0') - 39) * (long long int)(pow(16, ind));
				else soma = soma + (info.valx[z] - '0') * (long long int)(pow(16, ind));
				ind--;
			}
			printf("%lld dec\n", soma);

			//Converte pra binário
			ind = 0;
			y = 0, b = 0;
			if (soma > 9)
			{
				while (soma >= 2)
				{
					resto = soma % 2;
					if (resto == 0) numbin[ind++] = '0';
					else if (resto == 1) numbin[ind++] = '1';
					soma = soma / 2;
				}
				if (soma == 1) numbin[ind++] = '1';
				else if (soma == 0) numbin[ind++] = '0';
				numbin[ind] = '\0';
				for (b = ind - 1; b >= 0; b--) info.bin[y++] = numbin[b];
				info.bin[ind] = '\0';
				printf("%s bin\n", info.bin);
			}
			else printf("%lld bin\n", soma);
		}
		printf("\n");
	}

	return 0;
}