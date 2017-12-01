#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int N, R, Ni;
	vector <int> v;
	while(cin >> N >> R)
	{
		// Captura os que voltaram
		for (int i = 0; i < R; i++)
		{
			cin >> Ni;
			v.push_back(Ni);
		}
		//Ordena o vetor dos que voltaram
		sort(v.begin(), v.end());
		int t = v.size();
		if (t == N) cout << '*' << endl;
		else
		{
			for (int i = 1; i <= N; i++)
			{
				//Se o i não está em v[]
				if (!(binary_search (v.begin(), v.end(), i)))
				{
					cout << i << " ";
				}
			}
			cout << endl;
		}
		v.clear();
	}
	return 0;
}