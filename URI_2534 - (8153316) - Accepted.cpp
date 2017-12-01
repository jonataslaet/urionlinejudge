#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int n, p, q, nota;
	vector <int> v;
	while(scanf("%d %d", &n, &q)!=EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &nota);
			v.push_back(nota);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < q; i++)
		{
			scanf("%d", &p);
			printf("%d\n", v[v.size()-p]);
		}
		v.clear();
	}
	return 0;
}