#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int tamB, n, encaixa;
	string A, B;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A >> B;
		encaixa = 0;
		if (A.size() >= B.size())
		{
			tamB = B.size();
			for (int k = 1; k <= tamB; k++)
			{

				if (B[B.size() - k] == A[A.size() - k])
				{
					encaixa = 1;
				}
				else
				{
					encaixa = 0;
					break;
				}
			}
		}

		if (encaixa == 0) cout << "nao encaixa" << endl;
		else cout << "encaixa" << endl;
	}


	return 0;
}