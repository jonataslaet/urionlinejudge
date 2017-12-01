#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

long long int divider(string num_string, int tam_num_string, int divisor, int *soma)
{
	int c = 0, i;

	for(i = 0; i < tam_num_string; i++)
	{
		c = ((num_string[i] - '0') + c * 10) % divisor;
		(*soma) += (num_string[i] - '0');
	}
	if(c == 0)
	{
		return 1; //se for divisivel pelo numero retorna 1
	}
	else
	{
		return 0; //senao, retorna 0
	}
}

int main()
{
	//char num[10000];
	string M, result;
	int tamDeM, soma;
	long long int multi3;
	while(cin >> tamDeM >> M)
	{
		soma = 0;
		//tamDeM = M.size();
		multi3 = divider(M, tamDeM, 3, &soma);
		if (multi3 == 1) result = "sim";
		else result = "nao";
		cout << soma << " " << result << endl; 
	}
	return 0;
}