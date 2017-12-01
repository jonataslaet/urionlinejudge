#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int N, quantidade[3];
	string matricula, curso;
	while(cin >> N)
	{
		memset(quantidade, 0, sizeof(quantidade));
		for (int i = 0; i < N; i++)
		{
			cin >> matricula >> curso;
			if (curso == "EPR") quantidade[0]++;
			else if (curso == "EHD") quantidade[1]++;
			else quantidade[2]++;
		}
		cout << "EPR: " << quantidade[0] << endl;
		cout << "EHD: " << quantidade[1] << endl;
		cout << "INTRUSOS: " << quantidade[2] << endl;
	}
	return 0;
}