#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>
#include <math.h>
using namespace std;

int posNoAlfabeto(char letra)
{
	if (letra == 'A') return 0;
	else if (letra  == 'B') return 1;
	else if (letra  == 'C') return 2;
	else if (letra  == 'D') return 3;
	else if (letra  == 'E') return 4;
	else if (letra  == 'F') return 5;
	else if (letra  == 'G') return 6;
	else if (letra  == 'H') return 7;
	else if (letra  == 'I') return 8;
	else if (letra  == 'J') return 9;
	else if (letra  == 'K') return 10;
	else if (letra  == 'L') return 11;
	else if (letra  == 'M') return 12;
	else if (letra  == 'N') return 13;
	else if (letra  == 'O') return 14;
	else if (letra  == 'P') return 15;
	else if (letra  == 'Q') return 16;
	else if (letra  == 'R') return 17;
	else if (letra  == 'S') return 18;
	else if (letra  == 'T') return 19;
	else if (letra  == 'U') return 20;
	else if (letra  == 'V') return 21;
	else if (letra  == 'W') return 22;
	else if (letra  == 'X') return 23;
	else if (letra  == 'Y') return 24;
	else if (letra  == 'Z') return 25;
	//return NULL;
}

int posDoElemento (int i)
{
	return i;
}

int posNoElemento (int j)
{
	return j;
}

int main(int argc, char *argv[])
{
	string elemento;
	int L, N, valor, tam;
	cin >> N;
	for (int t = 0; t < N; t++)
	{
		cin >> L;
		valor = 0;
		for (int i = 0; i < L; i++)
		{
			cin >> elemento;
			tam = elemento.size();
			for (int j = 0; j < tam; j++)
			{
				valor += ((posNoAlfabeto(elemento[j]))+(posDoElemento(i))+(posNoElemento(j)));
			}
		}
		cout << valor << endl;
		elemento.clear();
	}
	return 0;
}