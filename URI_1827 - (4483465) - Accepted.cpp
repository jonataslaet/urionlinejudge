#include <iostream>
using namespace std;

void mostraMatriz(int m[][102], int tamanho)
{

	for(int y = 0; y < tamanho; y++)
	{
		for(int x = 0; x < tamanho; x++)
		{

			cout << "" << m[y][x];
		}
		cout << endl;
	}
}

int main(int argc, char *argv[])
{
	int n, fim, centro, ind1par, ind1impar, fim1impar, fim1par, centroAux, iniDiagonalSecundaria;
	while (cin >> n)
	{
		ind1impar = n / 3;
		ind1par = ind1impar - 1;
		fim = n - 1;
		iniDiagonalSecundaria = n - 1;

		//Preenche a matriz toda com 0
		int matriz[102][102] = {{0}};

		//Guarda em centro o índice do centro
		centro = n / 2;
		centroAux = centro - 1;
		fim1impar = n - ind1impar - 1;
		fim1par = n - ind1impar;

		//Percorre a matriz
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				//Se o tamanho for ÍMPAR
				if (n % 2 != 0)
				{
					//Preenche o centro com o 4
					if (i == centro && j == centro)
					{
						matriz[centro][centro] = 4;
					}
					//Preenche com 1
					else if (i >= ind1impar && j >= ind1impar && i <= fim1impar && j <= fim1impar)
					{
						matriz[i][j] = 1;
//						cout << matriz[i][j];
					}

					//Preenche com 2
					else if (i == j)// && !(i >= ind1impar && j >= ind1impar && i <= fim1impar && j <= fim1impar))
					{
						matriz[i][j] = 2;
//						cout << matriz[i][j];
					}
					//Preenche com 3
					else if (j == iniDiagonalSecundaria)
					{
						matriz[i][j] = 3;
//						cout << matriz[i][j];
						//iniDiagonalSecundaria--;
					}
				}
				//Se o tamanho for PAR
				else
				{
					//Preenche o centro com 4
					if ((i == centro && j == centro) || (i == centroAux && j == centroAux) || (i == centroAux && j == centro) || (i == centro && j == centroAux))
					{
						matriz[centro][centro] = 4;
						matriz[centroAux][centroAux] = 4;
						matriz[centroAux][centro] = 4;
						matriz[centro][centroAux] = 4;
					}
					//Preenche com 1
					else if (i >= ind1par && j >= ind1par && i <= fim1par && j <= fim1par)
					{
						matriz[i][j] = 1;
//						cout << matriz[i][j];
					}
					//Preenche com 2
					else if (i == j)// && !(i >= ind1par && j >= ind1par && i <= fim1par && j <= fim1par))
					{
						matriz[i][j] = 2;
//						cout << matriz[i][j];
					}
					//Preenche com 3
					else if (j == iniDiagonalSecundaria)
					{
						matriz[i][j] = 3;
//						cout << matriz[i][j];
						//iniDiagonalSecundaria--;
					}
				}
				cout << matriz[i][j];
				if (j == fim) iniDiagonalSecundaria--;
			}
			cout << endl;
		}
		cout << endl;
		//mostraMatriz(matriz, n);
	}

	return 0;
}
