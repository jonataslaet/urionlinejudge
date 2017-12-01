#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <string.h>
#include <iomanip>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
	string frase, f;
	int N, x, d, t, maior = -1;
	char c;

	cin >> N;
	getchar();
	for (int i = 0; i < N; i++)
	{
		getline(cin, frase);
		vector <int> v(201);
		/*
		printf("j=%d\n", tolower(frase[0]));
		printf("o=%d\n", tolower(frase[1]));
		printf("n=%d\n", tolower(frase[2]));
		printf("a=%d\n", tolower(frase[3]));
		printf("t=%d\n", tolower(frase[4]));
		printf("a=%d\n", towlower(frase[5]));
		printf("s=%d\n", towlower(frase[6]));
		*/
		t = frase.size();
		maior = -1;
		for(int k = 0; k < t; k++)
		{
			if (isalpha(frase[k]))
			{
				d = (tolower(frase[k]));
				x = d - 97;
				v[x]++;
				if (v[x] > maior) maior = v[x];
			}
		}
		//cout << "maior=" << maior << endl;
		for(int k = 0; k < 26; k++)
		{
			if (v[k] == maior)
			{
				c = k + 97;
				//cout << c;
				f.push_back(c);
			}
		}
		sort(f.begin(), f.end());
		cout << f << endl;
		f.clear();
	}
	return 0;
}