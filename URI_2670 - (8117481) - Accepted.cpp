#include <iostream>
#include <cstdio>
using namespace std;

int menor (int a, int b)
{
	if (a < b) return a;
	else return b;
}

int main(int argc, char *argv[])
{
	int a1, a2, a3, s1 = 0, s2 = 0, s3 = 0;
	scanf("%d %d %d", &a1, &a2, &a3);
	s1 = a2 * 2 + a3 * 4;
	s2 = a1 * 2 + a3 * 2;
	s3 = a1 * 4 + a2 * 2;
	printf("%d\n", menor(s1, menor(s2, s3)));

	return 0;
}