#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string linha;
	getline(cin, linha);
	if (linha.size() <= 140) cout << "TWEET\n";
	else cout << "MUTE\n";
	return 0;
}