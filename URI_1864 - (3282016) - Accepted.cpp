#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
	string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cout << frase[i];
	}
	cout << endl;
	
	return 0;
}