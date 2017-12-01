#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int tam, caso = 1;
	vector <int> v;
	int N, num, fim;
	while(cin >> N)
	{
		num = 0;
		if (N == 0)
		{
			v.push_back(0);
			tam = v.size();
			cout << "Caso " << caso++ << ": " << tam << " numero" << endl;
			cout << v[0] << endl;

		}
		else
		{
			v.push_back(0);
			for (int i = 0; i <= N; i++)
			{
				for (int j = 0; j < i; j++)
				{
					v.push_back(num);
				}
				num++;
			}
			tam = v.size();
			fim = tam - 1;
			cout << "Caso " << caso++ << ": " << tam << " numeros" << endl;
			for (int i = 0; i < tam; i++)
			{
				if (i == fim) cout << v[i] << endl;
				else cout << v[i] << " ";
			}
			//cout << endl;
		}
		cout << endl;
		v.clear();
	}
	return 0;
}