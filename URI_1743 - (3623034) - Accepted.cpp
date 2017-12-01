#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int p1, p2, p3, p4, p5;
	int t1, t2, t3, t4, t5;
	cin >> p1 >> p2 >> p3 >> p4 >> p5;
	cin >> t1 >> t2 >> t3 >> t4 >> t5;
	if (t1 != p1 && t2 != p2 && t3 != p3 && t4 != p4 && t5 != p5)
	{
		cout << "Y" << endl;
	}
	else
	{
		cout << "N" << endl;
	}

	return 0;
}