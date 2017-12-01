#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int n;
	string s;
	cin >> n;
	cin.get();
	while(n)
	{
		getline(cin,s,'\n'); 
		n--;
	}
	cout << "Ciencia da Computacao\n";
	return 0;
}