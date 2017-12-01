#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	vector <int>v;
	
	int p, cont, n, k;
	for (;;)
	{
		cin >> n >> k;
		if (n == k && k == 0) break;
		else
		{
			vector <int>q(1001);
			cont = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> p;
				v.push_back(p);
				q[p-1]++;
			}
			for (int i = 0; i < n; i++)
			{
				if (q[i] >= k) cont++;
			}
			cout << cont << endl;
		}

	}
	return 0;
}