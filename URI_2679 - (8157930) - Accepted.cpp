#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int x;
	scanf("%d", &x);
	if (x % 2 == 0) printf("%d\n", x + 2);
	else printf("%d\n", x+1);
	return 0;
}