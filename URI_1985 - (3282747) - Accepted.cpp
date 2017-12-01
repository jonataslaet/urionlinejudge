#include <iostream>
#include <vector>
#include <string.h>
#include <iomanip>
using namespace std;

double valor(int cod)
{
	if (cod == 1001) return 1.5;
	else if (cod == 1002) return 2.5;
	else if (cod == 1003) return 3.5;
	else if (cod == 1004) return 4.5;
	else if (cod == 1005) return 5.5;
}
int main(int argc, char** argv)
{
	int c, id, q;
	double soma = 0;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> id >> q;
		soma += (q*(valor(id)));
	}
	cout.precision(2);    // define a precisão
    cout << setiosflags (ios::fixed);
	cout << soma << endl;
	return 0;
}