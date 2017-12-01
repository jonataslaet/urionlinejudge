#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, num;//, l[101];
	int ehDe2 = 0, ehDe3 = 0, ehDe4 = 0, ehDe5 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num % 2 == 0) ehDe2++;
		if (num % 3 == 0) ehDe3++;
		if (num % 4 == 0) ehDe4++;
		if (num % 5 == 0) ehDe5++;
	}
	printf ("%d Multiplo(s) de 2\n", ehDe2);
	printf ("%d Multiplo(s) de 3\n", ehDe3);
	printf ("%d Multiplo(s) de 4\n", ehDe4);
	printf ("%d Multiplo(s) de 5\n", ehDe5);
	return 0;
}