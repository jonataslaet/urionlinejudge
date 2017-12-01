#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	string num;
	cin >> num;
	reverse(num.begin(), num.end());
	cout << num << endl;
	return 0;
}