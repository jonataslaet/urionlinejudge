#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
	int c, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (c % 2 == 0) cout << "0" << endl;
		else cout << "1" << endl;
	}
	
	return 0;
}