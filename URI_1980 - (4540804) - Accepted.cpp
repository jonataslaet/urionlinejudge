#include <iostream>
using namespace std;

uint64_t fatorialDe (int N)
{
	uint64_t fat = 1;
	for (int i=N; i>=1; i--)
	{
		fat *= i;
	}
	return fat;
}

int main(int argc, char *argv[])
{
	//uint64_t num;
	string word;
	while (1)
	{
		cin >> word;
		if (word == "0") break;
		cout << fatorialDe(word.size()) << endl;
	}
	
	return 0;
}