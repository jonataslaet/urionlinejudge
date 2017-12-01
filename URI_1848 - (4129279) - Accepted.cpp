#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
	string action;
	int q = 0, somaDec = 0;
	while(getline(cin, action), !cin.eof())
	{
		if (action[0] != 'c')
		{
			somaDec += ((4 * ('*' == action[0])) + (2 * ('*' == action[1])) + ('*' == action[2]));
		}
		else
		{
			cout << somaDec << endl;
			somaDec = 0;
			if (++q == 3) break;
		}
	}

	return 0;
}