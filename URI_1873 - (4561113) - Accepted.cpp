#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int N;
	string opcao1, opcao2;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> opcao1 >> opcao2;
		if (opcao1 == opcao2) cout << "empate" << endl;
		else if (opcao1 == "tesoura")
		{
			if (opcao2 == "lagarto" || opcao2 == "papel") cout << "rajesh" << endl;
			else cout << "sheldon" << endl;
		}
		else if (opcao1 == "pedra")
		{
			if (opcao2 == "tesoura" || opcao2 == "lagarto") cout << "rajesh" << endl;
			else cout << "sheldon" << endl;
		}
		else if (opcao1 == "papel")
		{
			if (opcao2 == "pedra" || opcao2 == "spock") cout << "rajesh" << endl;
			else cout << "sheldon" << endl;
		}
		else if (opcao1 == "lagarto")
		{
			if (opcao2 == "spock" || opcao2 == "papel") cout << "rajesh" << endl;
			else cout << "sheldon" << endl;
		}
		else if (opcao1 == "spock")
		{
			if (opcao2 == "tesoura" || opcao2 == "pedra") cout << "rajesh" << endl;
			else cout << "sheldon" << endl;
		}
	}
	return 0;
}