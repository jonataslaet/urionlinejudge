#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main(int argc, char** argv)
{
	int n, haux, h, aux;
	while(true)
	{
		cin >> n;
		aux = n;
		haux = (n % 2 == 0) ? (n / 2) : ((n / 2) + 1);
		h = haux;
		if(cin.eof()) break;
		else
		{
			string andar, orig;
			
			andar.push_back('*');
			do
			{	
				//cout << endl;
				cout << setw(haux++) << andar << endl;
				andar = andar + "**";
			}
			while (andar.length() <= n);
			cout << setw(h) << '*' << endl;
			cout << setw(h+1) << "***" << endl << endl;
		}
	}
	return 0;
}