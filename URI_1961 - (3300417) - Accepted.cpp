#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	vector<int> v;
	int p, aux, n, naodeu = 0;
	cin >> p >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aux;
		v.push_back(aux);
		if (i > 0)
		{
			if ((fabs(v[i] - v[i-1])) > p)
			{
				naodeu = 1;				
			}
		}
	}
	if (naodeu == 1) cout << "GAME OVER" << endl; 
	else cout << "YOU WIN" << endl;
	
	return 0;
}