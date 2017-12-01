#include <iostream>
#include <iomanip>
using namespace std;
#define n 3.14

int main(int argc, char *argv[])
{
	double v, d;
	while(cin >> v >> d)
	{
		//r = d / 2;
		//area = (n)*(d/2)*(d/2)
		//v = n * r² * altura;
		//altura = v/(n*(d/2)*(d/2));

		cout << fixed << setprecision(2) << "ALTURA = " << v/(n*(d/2)*(d/2)) << endl;
		cout << fixed << setprecision(2) << "AREA = " << (n)*(d/2)*(d/2) << endl;
	}
	return 0;
}