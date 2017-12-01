#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	//char N[107], M[107];
	int N, M, soma;
	int tam;
	string somaString, resultado;
	while (1)
	{
		cin >> N >> M;
		soma = 0;
		if (N == 0 && M == 0) break;
		else
		{
			//Soma os dois: N + M
			soma = N + M;
			
			//Transforma a soma em string
			somaString = to_string(soma);
			
			//Insere em resultado apenas os que não são 0 (zero)
			tam = somaString.size();
			for (int i = 0; i < tam; i++)
			{
				if (somaString[i] != '0')
				{
					resultado.push_back(somaString[i]);
				}
			}
			
			//Exibe o resultado
			cout << resultado << endl;
			resultado.erase();
		}
	}
	return 0;
}