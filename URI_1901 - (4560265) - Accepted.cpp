#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int x, y, N, tam, aux, matriz[201][201];
	vector <int> v;
	cin >> N;
	aux = 2 * N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> matriz[i][j];
		}
	}
	for (int k = 0; k < aux; k++)
	{
		cin >> y >> x;
		sort(v.begin(), v.end());
		if (binary_search (v.begin(), v.end(), matriz[y - 1][x - 1]))
		{
			//cout << matriz[y - 1][x - 1] << " found! \n";

		}
		else
		{
			//cout << matriz[y - 1][x - 1] << " not found. \n";
			v.push_back(matriz[y - 1][x - 1]);
		}
	}
	tam = v.size();
	cout << tam << endl;
	return 0;
}