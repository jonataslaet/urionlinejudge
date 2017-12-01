#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int p, n, menor, posMenor = 1;
	cin >> n;
	cin >> menor;
	for (int i = 2; i <= n; i++)
	{
		cin >> p;
		if (p < menor)
		{
			menor = p;
			posMenor = i;
		}
	}
	cout << posMenor << endl;
	return 0;
}