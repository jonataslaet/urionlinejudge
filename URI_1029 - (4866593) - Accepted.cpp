#include <iostream>
using namespace std;

int q = 0;
int fib(int n)
{
	q++;
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return (fib(n - 1) + fib(n - 2));
}
int main(int argc, char *argv[])
{
	int N, num;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		q = 0;
		//cout << fib(num) << endl;
		//cout << "QtdChamadas = " << q - 1 << endl;
		cout << "fib(" << num << ") = " << q-1 << " calls = " << fib(num) << endl;
	}
	return 0;
}