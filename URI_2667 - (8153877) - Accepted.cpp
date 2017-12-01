#include <iostream>
#include <cstdio>
using namespace std;


int main(int argc, char *argv[])
{
	string n;
	int t, num=0;
	cin >> n;
	t=n.size();
	for(int i = 0; i < t; i++)
	{
		num += (n[i] - '0');
	}
	printf("%d\n", num%3);
	return 0;
}