#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int valor, fim, N, qtdPicos;//, desceu, subiu;
	vector <int> v;
	for (;;)
	{
		cin >> N;
		if (N == 0) break;
		else
		{
			qtdPicos = 0;
			for (int i = 0; i < N; i++)
			{
				cin >> valor;
				v.push_back(valor);
			}
			
			fim = N - 1;
			if ((v[0] < v[1] && v[0] < v[fim]) || (v[0] > v[1] && v[0] > v[fim])) qtdPicos++;
			for (int i = 1; i < fim; i++)
			{
				if ((v[i] > v[i - 1] && v[i] > v[i+1]) || (v[i] < v[i-1] && v[i] < v[i+1])) qtdPicos++;
			}
			if ((v[fim] > v[fim - 1] && v[fim] > v[0]) || (v[fim] < v[0] && v[fim] < v[fim - 1])) qtdPicos++;
			cout << qtdPicos << endl;
			v.clear();
		}
	}
	return 0;
}