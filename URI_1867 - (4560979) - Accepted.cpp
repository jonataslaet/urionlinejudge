#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
using namespace std;

long long int somaDosAlg2(string num_string)
{
	long long int soma = 0;
	int tam = num_string.size();
	for(int i = 0; i < tam; i++)
	{
		soma += ((long long int)(num_string[i] - '0'));
	}
	return soma;
}

int main(int argc, char *argv[])
{
	//char N[107], M[107];
	string N, M;
	int tamDeM, tamDeN;
	while (1)
	{
		cin >> N >> M;
		if (N == "0" && M == "0") break;
		//if (strcmp(N, "0") == 0 && strcmp(M, "0") == 0) break;
		else
		{
			//Faça o que tem dentro do laço enquanto a quantidade de algarismos for maior que 1
			tamDeN = N.size();
			tamDeM = M.size();
			while (!(tamDeN == 1 && tamDeM == 1))
			{
				tamDeN = N.size();
				tamDeM = M.size();
				if (tamDeN > 1) N = to_string(somaDosAlg2(N));
				if (tamDeM > 1) M = to_string(somaDosAlg2(M));
			}
			if (somaDosAlg2(N) > somaDosAlg2(M)) cout << "1" << endl;
			else if (somaDosAlg2(N) < somaDosAlg2(M)) cout << "2" << endl;
			else cout << "0" << endl;
		}
	}
	return 0;
}