#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int z = 1, q, tam, t1, t2, p;
	string n1, n2, substr;
	while(cin >> n1)
	{
		t1 = n1.size();
		cin >> n2;
		t2 = n2.size();
		tam = t2 - t1;
		q = 0;
		p = 0;
		for(int i = 0; i <= tam; i++)
		{
			substr = n2.substr(i, t1);
			if (n1 == substr)
			{
				p = i;
				q++;
			}
			substr.clear();
		}
		n1.clear();
		n2.clear();
		printf("Caso #%d:\n", z++);
		if (q > 0) printf("Qtd.Subsequencias: %d\n", q);
		else printf("Nao existe subsequencia\n");
		if(q > 0) printf("Pos: %d\n", p + 1);
		printf("\n");

		getchar();
	}
	return 0;
}