#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int N, v[101], pos=0;
	cin >> N;
	cin >> v[0];
	for (int i = 1; i < N; i++)
	{
		cin >> v[i];
		if (v[i] < v[i-1] && pos == 0)
		{
			pos = i+1;
		}
	}
	cout << pos << endl;
		
	return 0;
}