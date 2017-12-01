#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int T, Bs1, IV1, EV1, Bs2, IV2, EV2, Bs3, IV3, EV3, Bs4, IV4, EV4, L, HPint, ATint, DFint, SPint;
	string nome;
	double HP, AT, DF, SP;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> nome >> L;
		cin >> Bs1 >> IV1 >> EV1; //pra HP
		HP = (((((double)IV1) + ((double)Bs1) + ((sqrt(((double)EV1)))/8) + 50)*((double)L))/50) + 10;
		HPint = HP;
		cin >> Bs2 >> IV2 >> EV2; //pra AT
		AT = (((((double)IV2) + ((double)Bs2) + ((sqrt(((double)EV2)))/8))*((double)L))/50) + 5;
		ATint = AT;
		cin >> Bs3 >> IV3 >> EV3; //pra DF
		DF = (((((double)IV3) + ((double)Bs3) + ((sqrt(((double)EV3)))/8))*((double)L))/50) + 5;
		DFint = DF;
		cin >> Bs4 >> IV4 >> EV4; //pra SP
		SP = (((((double)IV4) + ((double)Bs4) + ((sqrt(((double)EV4)))/8))*((double)L))/50) + 5;
		SPint = SP;
		cout << "Caso #" << i << ": " << nome << " nivel " << L << endl;
		cout << "HP: " << HPint << endl;
		cout << "AT: " << ATint << endl;
		cout << "DF: " << DFint << endl;
		cout << "SP: " << SPint << endl;
	}
	return 0;
}