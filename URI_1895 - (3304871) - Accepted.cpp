#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	//1,3,5,10,25,50,100
	int catual, lim, p, dif, n, pa = 0, pb = 0, x = -1;
	cin >> n >> catual >> lim;
	for (int i = 2; i <= n; i++)
	{
		cin >> p;
		dif = fabs(catual-p);
		if (dif <= lim)
		{
			if (x == -1) pa = pa + dif;
			else pb = pb + dif;
			catual = p;
		}
		x = x * (-1);
	}
	cout << pa << " " << pb << endl;
	return 0;
}