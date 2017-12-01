#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int n, aux;
	string palavra;
	cin >> n;
	aux = n - 1;
	for (int i = 0; i < n; i++)
	{
		cin >> palavra;
		//Se a palavra tiver 3 letras
		if (palavra.size() == 3)
		{
			//Se a palavra for URI
			if (palavra[0] == 'U' && palavra[1] == 'R')
			{
				if (i == aux) cout << "URI" << endl;
				else cout << "URI ";
				//cout << "URI ";
			}
			//Senão, se a palavra for OBI
			else if (palavra[0] == 'O' && palavra[1] == 'B')
			{
				if (i == aux) cout << "OBI" << endl;
				else cout << "OBI ";
			}
			else
			{
				if (i == aux) cout << palavra << endl;
				else cout << palavra << " ";
			}
		}
		else
		{
			if (i == aux) cout << palavra << endl;
			else cout << palavra << " ";
		}
	}

	return 0;
}