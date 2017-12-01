#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int N, H, C, L;

	while(scanf("%d", &N) != EOF)
	{
		scanf("%d %d %d", &H, &C, &L);
		printf("%.4lf\n", (N * sqrt(H * H + C * C)*L)/10000);
	}
	return 0;
}