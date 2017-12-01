#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m, valor, s;
	while(scanf("%d %d", &n, &m) != EOF)
	{
		s = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &valor);
			if (n - i <= m) s += valor;
		}
		printf("%d\n", s);
	}
	return 0;
}