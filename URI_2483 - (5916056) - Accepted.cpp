#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int i;
	string f = "Feliz natl!";
	scanf("%d", &i);
	for(int k = 0; k < i; k++)
	{
		f.insert(f.begin()+k+9, 'a');
	}
	cout << f << endl;
	return 0;
}