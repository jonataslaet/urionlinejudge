#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int verificaTri(int a, int b, int c)
{
	if (((a + b) <= c) || ((b + c) <= a) || ((a + c) <= b))
	{
		return 0;
	}
	return 1;
}

int main()
{
	int m1, m2, m3, m4;

	cin >> m1 >> m2 >> m3 >> m4;
	if ((verificaTri(m1, m2, m3) == 1)||(verificaTri(m1, m2, m4) == 1)||(verificaTri(m1, m4, m3) == 1)||(verificaTri(m4, m2, m3) == 1))
	{
		cout << "S" << endl;
	}
	else
	{
		cout << "N" << endl;
	}

	return 0;
}