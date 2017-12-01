#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	int C, t;
	double r;
	string word;
	cin >> C;
	//getchar();
	for (int i = 0; i < C; i++)
	{
		getchar();
		cin >> word;
		t = word.size();
		r = (((double)(t)) * 0.01);
		//cout << fixed << setprecision(2) << r << endl;	
		printf ("%.2lf\n", r);	
	}
	
	return 0;
}