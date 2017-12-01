#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
	int N, M, v[99999], num, cont;
	while(cin >> N >> M)
	{
		if (N == 0 && M == 0) break;
		//Conta quantas vezes um número é repetido
		cont = 0;
		//Preenche com -1 todas as células do vetor v
		memset(v, -1, sizeof(v));
		//Percorre cada elemento de v
		for (int i = 0; i < M; i++)
		{
			//Captura um número
			cin >> num;
			//Adiciona 1 à célula cuja posição é [num-1]
			v[num - 1]++;			
		}
		//Percorre novamente o vetor v
		for (int i = 0; i <= M; i++)
		{
			//Verifica se 1 número foi repetido pelo menos uma vez
			if (v[i] > 0)
			{
				cont++;
			}
		}
		cout << cont << endl;	
	}
	return 0;
}