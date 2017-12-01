#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	double a, b, p;
	cin >> a >> b;
	p = ((b-a)/a)*100;
	cout.precision(2);    // define a precisão
    cout << setiosflags (ios::fixed);
    cout << p << "%" << endl;
	return 0;
}