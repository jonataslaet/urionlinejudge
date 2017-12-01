#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string S;
	cin >> S;
	int qtdDeUm = 0, t = S.size();
	for(int i = 0; i < t; i++)
	{
		if (S[i] == '1') qtdDeUm++;
	}
	if (qtdDeUm % 2 == 0) S.insert(S.begin()+t, '0');
	else S.insert(S.begin()+t, '1');
	cout << S << endl;
	return 0;
}