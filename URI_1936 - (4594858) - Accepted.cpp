#include <iostream>
using namespace std;

int fatorialDe(int num)
{
	int fat = 1;
	for (int i = 1; i <= num; i++)
	{
		fat = fat * i;
	}
	return fat;
}
int main(int argc, char *argv[])
{
	int X, N, M, NseTornaX, fatorialDeI;
	//Captura o valor de N
	cin >> N;
	NseTornaX = 0;
	X = 1; //inicio o X com 1
	M = 0; //inicio o N com 0
	//Laço de repetição começando de i=1
	for (int i = 1;;)
	{
		//Quando N se torna X e a substração for zero
		fatorialDeI = fatorialDe(i);
		if (NseTornaX == 1 && (N - fatorialDeI) == 0)
		{
			M = M + 1; //M recebe 1 unidade
			break; //sai do laço
		}
		//Se nenhuma condição anterior e se N - i! > 0
		else if ((N - (fatorialDe(i))) > 0)
		{
			i++; //i recebe mais 1 unidade
		}
		//Se nenhuma condição anterior, então...
		else
		{
			M = M + 1; //M recebe mais 1 unidade
			i = i - 1; //i diminui 1 unidade
			X = (N - fatorialDe(i)); //X = (N - i!)
			N = X; //Ao voltar pro loop, N passa a ser X
			NseTornaX = 1; //N se torna X
			i = 1;
		}
	}
	//Exibe o M
	cout << M << endl;
	return 0;
}