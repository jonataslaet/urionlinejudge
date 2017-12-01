#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int valorAbsoluto(int a)
{
	if (a < 0) return -a;
	else return a;
}
int main(int argc, char *argv[])
{
	double Q, R, intpart;
	int a, b, r, q;
	cin >> a >> b;
	R = (valorAbsoluto(b)) - 1;
	Q = (((double)a) - R) / ((double)b);
	//cout << "Q = " << Q << endl;
	//cout << "R = " << R << endl;
	//inteiroQ = Q - (modf (Q, &intpart));
	while(Q - (Q - (modf (Q, &intpart))) != 0.0)
	{
		//cout << "Q = " << Q << endl;
		//cout << "R = " << R << endl;
		R = R - 1;
		Q = (((double)a) - R) / ((double)b);
	}
	q = Q;
	r = R;
	cout << q << " " << r << endl;
	return 0;
}