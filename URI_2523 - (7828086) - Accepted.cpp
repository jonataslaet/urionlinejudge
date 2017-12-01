#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	string letras;
	string palavra;
	int n,p;
	while(cin >> letras)
	{
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &p);
			palavra.push_back(letras[p-1]);
		}
		cout << palavra << endl;
		palavra.clear();
	}
	return 0;
}