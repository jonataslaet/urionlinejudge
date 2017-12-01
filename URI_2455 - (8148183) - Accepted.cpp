#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int p1, c1, p2, c2;
	scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
	if (p1 * c1 == p2 * c2) printf("0\n");
	else if (p1 * c1 < p2 * c2) printf("1\n");
	else printf("-1\n");
	return 0;
}