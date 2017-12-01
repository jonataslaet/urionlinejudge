#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int n,aux, c;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		aux = 2015 - c;
		if (aux <= 0) cout << ((-1)*aux)+1 << " A.C." << endl;
		else cout << aux << " D.C." << endl;
	}
	return 0;
}