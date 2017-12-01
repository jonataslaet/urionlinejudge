#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int n, a, b, c, d, e, cont = 0;
	cin >> n;
	cin >> a >> b >> c >> d >> e;
	if (a == n) cont++;
	if (b == n) cont++;
	if (c == n) cont++;
	if (d == n) cont++;
	if (e == n) cont++;
	cout << cont << endl;
	return 0;
}