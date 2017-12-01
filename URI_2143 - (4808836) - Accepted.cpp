#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t, n, r;
	for(;;)
	{
		cin >> t;
		if (t == 0) break;
		else
		{
			for (int i = 0; i < t; i++)
			{
				cin >> n;
				if (n % 2 != 0)
				{
					r = (n - 1) * 2 + 1;
				}
				else
				{
					r = (n - 2) * 2 + 2;
				}
				printf("%d\n", r);
			}	
		}
	}
	return 0;
}