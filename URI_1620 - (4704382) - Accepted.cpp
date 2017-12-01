#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	double I, X, L;
	while (1)
	{
		cin >> L;
		if (L == 0) break;
		else
		{
			I = L + (L - 3.0);
			//cout << I << endl;
			X = ((double)(I - L)) / (L);
			cout << fixed << setprecision(6) << X << endl;
		}
	}

	return 0;
}