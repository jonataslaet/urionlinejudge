#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	double N;
	cin >> N;
	cout << fixed << setprecision(1) << ((pow(((1.0 + (sqrt(5.0)))/2.0), N))-(pow(((1 - (sqrt(5.0)))/2.0), N)))/(sqrt(5.0)) << endl;
	return 0;
}