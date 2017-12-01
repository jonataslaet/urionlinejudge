#include <iostream>
#include <stdio.h>
using namespace std;
#define diaNatal 25
#define mesNatal 12
int main(int argc, char *argv[])
{
	int qtdDiasMes[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int mes, dia, qdias;
	while(cin >> mes >> dia)
	{
		if (mes == mesNatal && dia == diaNatal)
		{
			printf("E natal!\n");
		}
		else if (mes == mesNatal && dia+1 == diaNatal)
		{
			printf("E vespera de natal!\n");
		}
		else if (mes == mesNatal && dia > diaNatal)
		{
			printf("Ja passou!\n");
		}
		else
		{
			qdias = 0;
			for (int i = 0; i < mes; i++)
			{
				qdias += (qtdDiasMes[i]);
			}
			qdias += dia;
			//printf("qdias = %d\n", qdias);
			//printf("qdiasRest = %d\n", 366-qdias-6);
			printf("Faltam %d dias para o natal!\n", 366-qdias-6);
		}
	}
	return 0;
}