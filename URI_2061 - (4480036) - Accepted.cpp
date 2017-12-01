#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m;
	string escolha;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> escolha;
		if (escolha == "fechou"){
			n++;
		}
		else
		{
			n--;
		}
	}
	cout << n << endl;

	return 0;
}