#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void mostraTravessia(int travessia[][102], int l, int c)
{
	int f,m;
	for (f = 0; f < l; f++)
	{
		for (m = 0; m < c; m++)
		{
			printf("%d ", travessia[f][m]);
		}
		printf("\n");
	}
	printf("\n");
}
int main(int argc, char** argv)
{
	//largura=x=j
	//altura=y=i
	char mapa[102][102];
	int travessia[102][102] = {{0}};
	int seta, i, j, x, y, limiteUltrapassado = 0, status = 0;
	cin >> x;
	cin >> y;
	for (i = 0; i < y; i++)
	{
		scanf("%s", mapa[i]);
	}
	/*
	for (i = 0; i < y; i++)
	{
		printf("%s\n", mapa[i]);
	}
	*/
	i = 0;
	j = 0;
	for (int i = 0;;)
	{
		//printf("entrou no i\n");
		if (status == 1 || travessia[i][j] == 1) break;
		for (int j = 0;;)
		{
			//printf("entrou no j\n");
			if (j < x && i < y && travessia[i][j] == 0)
			{
				travessia[i][j] = 1;
				//printf("[I=%d][J=%d]\n", i, j);
				//mostraTravessia(travessia, y, x);
				//system("pause");
				if (mapa[i][j] == '*')
				{
					status = 1;
					travessia[i][j] = 1;
					break;
				}
				else if (mapa[i][j] == '>')
				{
					seta = 1;
					j++;
				}
				else if (mapa[i][j] == '<')
				{
					seta = 2;
					j--;
				}
				else if (mapa[i][j] == 'v')
				{
					seta = 3;
					i++;
				}
				else if (mapa[i][j] == '^')
				{
					seta = 4;
					i--;
				}
				else if (mapa[i][j] == '.'){
					if (seta == 1) j++;
					else if (seta == 2) j--;
					else if (seta == 3) i++;
					else if (seta == 4) i--;
				}
			}
			else
			{
				limiteUltrapassado = 1;
				break;
			}
		}
	}
	if (status == 1) cout << '*' << endl;
	else cout << '!' << endl;

	return 0;
}