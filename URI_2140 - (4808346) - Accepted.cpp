#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

bool sum2(int v[], int n, int K, int &x, int &y)
{
	int i, j;
	i = 0;
	j = n - 1;
	while(i < j)
	{
		if(v[i] + v[j] > K ) j--;
		if(v[i] + v[j] < K ) i++;
		if(v[i] + v[j] == K )
		{
			x = v[i];
			y = v[j];
			return true;
		}
	}
	return false;
}


//As notas disponíveis são: 2, 5, 10, 20, 50 e 100.
int main(int argc, char *argv[])
{
	int N, M, troco;
	int v[] = {2, 5, 10, 20, 50, 100};
	for (;;)
	{
		cin >> N >> M;
		if (N == 0 && M == N) break;
		else
		{
			troco = M - N;
			int x, y;
			if (sum2(v, 6, troco, x, y))
			{
				printf("possible\n");
			}
			else
			{
				printf("impossible\n");
			}
		}
	}
	return 0;
}