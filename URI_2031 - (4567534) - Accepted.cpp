#include <iostream>
#include <string>
using namespace std;
/*
“ataque”: para representar o Ataque Aéreo
“pedra”: para representar a Pedra
“papel”: para representar o Papel
*/
int main(int argc, char *argv[])
{
	string p1, p2;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> p1 >> p2;
		//Os dois escolhem ataque aéreo	  		
		if (p1 == "ataque" && p2 == "ataque") cout << "Aniquilacao mutua" << endl;
		//Os dois escolhem pedra
		else if (p1 == "pedra" && p2 == "pedra") cout << "Sem ganhador" << endl;
		//Os dois escolhem papel
		else if (p1 == "papel" && p2 == "papel") cout << "Ambos venceram" << endl;
		//Jogador 1 vence
		else if ((p1 == "ataque" && (p2 == "pedra" || p2 == "papel"))||(p1 == "pedra" && p2 == "papel")) cout << "Jogador 1 venceu" << endl;
		//Jogador 2 vence
		else if ((p2 == "ataque" && (p1 == "pedra" || p1 == "papel"))||(p2 == "pedra" && p1 == "papel")) cout << "Jogador 2 venceu" << endl;
	}
	return 0;
}