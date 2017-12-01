#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int n, anoDeOrigem, anoDeChegada, tempo, dMenor;
	string strMenor, str;
	for (int k = 0;; k++)
	{
		cin >> n;
		if (n == 0) break;
		else
		{
			cin >> str >> anoDeChegada >> tempo;
			strMenor = str;
			dMenor = anoDeChegada - tempo;
			for (int i = 1; i < n; i++)
			{
				cin >> str >> anoDeChegada >> tempo;
				anoDeOrigem = anoDeChegada - tempo;
				if (anoDeOrigem < dMenor)
				{
					dMenor = anoDeOrigem;
					strMenor = str;
				}
			}
			cout << strMenor << endl;
		}
	}

	return 0;
}