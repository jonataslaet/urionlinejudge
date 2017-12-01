#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>
using namespace std;

int qtdSpaces(string str)
{
	int iSpaces = 0;

	int strSize = str.size();
	for(int iLoop = 0; iLoop < strSize; iLoop++ )
	{
		if(str [iLoop] == ' ' ) iSpaces++;
	}

	return iSpaces;
}

int main(int argc, char** argv)
{
	int n, d = 1, qtdFrutas = 0;
	double v, sv, skg;
	string inputString;
	scanf("%d", &n);
	sv = 0;
	skg = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &v);
		sv += v;
		cin.get();
		getline(cin, inputString);
		qtdFrutas = 1 + qtdSpaces(inputString);
		printf("day %d: %d kg\n", d, qtdFrutas);
		skg += qtdFrutas;
		d++;
		inputString.clear();
	}
	printf("%.2lf kg by day\n", skg / n);
	printf("R$ %.2lf by day\n", sv / n);
	return 0;
}