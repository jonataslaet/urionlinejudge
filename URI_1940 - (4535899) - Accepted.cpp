#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int score, scoreMax, player, J, R, fim, ind_player, aux, jogador[501];
	cin >> J >> R;
	fim = J * R;
	aux = J - 1;
	scoreMax = 0;
	memset(jogador, 0, sizeof(jogador));
	for (int j = 0; j < fim; j++)
	{
		cin >> score;
		ind_player = j % J;
		jogador[ind_player] += score;
		if (jogador[ind_player] >= scoreMax)
		{
			scoreMax = jogador[ind_player];
			player = ind_player + 1;
		}
	}
	cout << player << endl;

	return 0;
}