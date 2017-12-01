#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

long long int divider(string num_string, int tam_num_string, int divisor)
{
	int c = 0, i;

	for(i = 0; i < tam_num_string; i++)
	{
		c = ((num_string[i] - '0') + c * 10) % divisor;
	}
	if(c == 0)
	{
		return 1; //se for divisivel pelo numero retorna 1
	}
	else
	{
		return 0; //senao, retorna 0
	}
}

int main()
{
	//char num[10000];
	string num;
	int tam, x, b, cont=0;
	long long int multi55, multi400, multi4, multi100, multi15;
	while(cin >> num)
	{
		if (cont!=0) cout << endl;
		x = 0;
		b = 0;
		tam = num.size();
		multi55 = divider(num, tam, 55);
		multi400 = divider(num, tam, 400);
		multi100 = divider(num, tam, 100);
		multi4 = divider(num, tam, 4);
		multi15 = divider(num, tam, 15);

		if (((multi400 == 1) || ((multi4 == 1) && (multi100 == 0))))
		{
			//ano é bissexto
			//if (multi15 == 1 || multi55 == 1) printf("\n");
			printf("This is leap year.\n");
			x = 1;
			b = 1;
		}
		if (multi15 == 1)
		{
			//festival huluculu
			//if (multi55 == 1 || b != 1) printf("\n");
			printf("This is huluculu festival year.\n");
			x = 1;
		}
		if ((multi55 == 1) && (b == 1))
		{
			//festival bulukulu
			printf("This is bulukulu festival year.\n");
			x = 1;
		}
		if (x != 1)
		{
			//printf("\n");
			printf("This is an ordinary year.\n");
		}
		cont++;
	}

	return 0;
}