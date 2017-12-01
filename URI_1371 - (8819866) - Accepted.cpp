#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int n;

	for(;;)
	{
		//Captura a quantidade de portas (que é igual à quantidade de descendentes)
		cin >> n;
		
		//Se essa quantidade for igual a zero, então finalize este programa
		if (n == 0) break;
		else
		{
			//Mostra todos os quadrados perfeitos de 1 a N, que são as portas que estarão abertas
			printf("1");
			for(int i = 2; i*i <= n; i++)
			{
				printf(" %d", i*i);
			}
			printf("\n");
		}
	}

	return 0;
}
