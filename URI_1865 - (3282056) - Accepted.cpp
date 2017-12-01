#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
	string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	
	int c, force;
	string nome;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> nome >> force;
		if (nome == "Thor") cout << "Y" << endl;
		else cout << "N" << endl;
	}
	
	return 0;
}