#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int N, H, M, O;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> H >> M >> O;
		if (O == 1) //abriu
		{
			//Exibe a(s) hora(s)
			if (H < 10) printf ("0");
			printf ("%d:", H);
			//Exibe o(s) minuto(s)
			if (M < 10) printf ("0");
			printf ("%d - ", M);
			//Exibe mensagem
			printf("A porta abriu!\n");
		}
		else
		{
			//Exibe a(s) hora(s)
			if (H < 10) printf ("0");
			printf ("%d:", H);
			//Exibe o(s) minuto(s)
			if (M < 10) printf ("0");
			printf ("%d - ", M);
			//Exibe mensagem
			printf("A porta fechou!\n");
		}
	}
	return 0;
}