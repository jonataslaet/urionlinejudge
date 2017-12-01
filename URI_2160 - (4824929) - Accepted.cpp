#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string linha;
	getline(cin, linha);
	if (linha.size() <= 80) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}