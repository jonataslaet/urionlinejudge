#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long int qtdcarneiros, soma = 0, qtdNaoRoubos = 0, qtdAtaques = 0, qtdRoubos = 0;

int main(int argc, char** argv)
{
	//Vetor de estrelas
	vector <long long int> estrela;

	long long int n, k;
	cin >> n;
	//Vetor que indica se a estrela k foi atacada
	vector <long long int> ataque(n + 1);
	for (int i = 0; i < n; i++)
	{
		//Captura a quantidade de carneiros e guarda em qtdcarneiros
		cin >> qtdcarneiros;
		//Guarda o que tem em qtdcarneiros na estrela i
		estrela.push_back(qtdcarneiros);
		//Soma vai guardando a soma da quantidade de carneiros
		soma += qtdcarneiros;
	}
	//Inicia o k com o índice da primeira estrela
	k = 0;
	//Enquanto o índice da estrela for menor que N e também for maior ou igual a 0
	while (k < n && k >= 0)
	{
		//Captura a quantidade de carneiros da estrela k e coloca em qtdcarneiros
		qtdcarneiros = estrela[k];
		//Verifica se a estrela k tem carneiros
		if (qtdcarneiros > 0)
		{
			//Incrementa a quantidade de roubos
			qtdRoubos++;
			//Se a estrela ainda não foi atacada
			if (ataque[k] == 0)
			{
				qtdAtaques++;
				ataque[k] = 1;
			}
			//Decrementa 1 da quantidade de carneiros da estrela k
			estrela[k] = estrela[k] - 1;
		}
		//Se for par, vai pra esquerda
		if (qtdcarneiros == 0 || qtdcarneiros % 2 == 0) k = k - 1;
		//Se for ímpar, vai pra direita
		else k = k + 1;
	}
	qtdNaoRoubos = soma - qtdRoubos;
	cout << qtdAtaques << " " << qtdNaoRoubos << endl;
}