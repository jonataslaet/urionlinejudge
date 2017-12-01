#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
	int N, fim; 
	unsigned long long int cont, add, v[100003];
	cin >> N;
	//Seta o fim como sendo N+1
	fim = N+1;
	//Preenche com zero
	add = 2;
	cont = 3;
	memset(v, 0, sizeof(v));
	//Preenche vetor referência
	for (int i = 4; i <= fim; i++)
	{
		v[i] = add;
		add = add + cont;
		cont++;
	}
	cout << v[N] << endl;
	return 0;
}