#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int p, n, k;
	vector <int> v;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &p);
		v.push_back(p);
	}
	sort(v.begin(), v.end());
	int r = k;
	for(int i = n - k - 1; i >= 0; i--)
	{
		if (v[i] >= v[i + 1]) r++;
		else break;
	}
	printf("%d\n", r);
	return 0;
}