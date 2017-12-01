#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int s, t, f, h = 0;
	cin >> s >> t >> f;
	if (s + t + f > 23)
	{
		h = s + t - 24 + f;
	}
	else if (s + t + f < 0)
	{
		h = s + t + 24 + f;
	}
	else
	{
		h = s + t + f;
	}
	cout << h << endl;
	return 0;
}