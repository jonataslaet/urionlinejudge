#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	long int x, m, ld, cd, lv, cv;
	long int ladoQuad;

	cin >> ld >> cd >> lv >> cv;
	if (ld > cd) swap(ld, cd);
	if (lv > cv) swap(lv, cv);
	x = ld + lv;
	m = min(cd, cv);
	if (x >= m) ladoQuad = m;
	else ladoQuad = x;
	cout << ladoQuad*ladoQuad << endl;	
	
	return 0;
}
