#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <stdlib.h>
#include <map>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	double gd, nota;
	vector <double> v;
	string nome;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> nome;
		scanf("%lf", &gd);
		for (int j = 0; j < 7; j++)
		{
			scanf("%lf", &nota);
			v.push_back(nota);   	   	
		}
		sort(v.begin(), v.end());
		v.erase(v.begin()+0);
		v.erase(v.begin()+5);
		cout << nome << " " << fixed << setprecision(2) << (v[0]+v[1]+v[2]+v[3]+v[4])*gd << endl;
		v.clear();
	}
	return 0;
}