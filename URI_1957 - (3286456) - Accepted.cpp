#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int ind, y, h, resto, ndec;
	//char num[33], numhexaux[33], numhex[33];
	string numhexaux;
	//string s1, s2;
	cin >> ndec;
	//Converte pra hexadecimal
	ind = 0;
	y = 0, h = 0;
	if (ndec > 9)
	{
		while (ndec >= 16)
		{
			resto = ndec % 16;
			if (resto == 15) numhexaux.push_back('F');//numhexaux[ind++] = 'F';
			else if (resto == 14) numhexaux.push_back('E');//numhexaux[ind++] = 'E';
			else if (resto == 13) numhexaux.push_back('D');//numhexaux[ind++] = 'D';
			else if (resto == 12) numhexaux.push_back('C');//numhexaux[ind++] = 'C';
			else if (resto == 11) numhexaux.push_back('B');//numhexaux[ind++] = 'B';
			else if (resto == 10) numhexaux.push_back('A');//numhexaux[ind++] = 'A';
			else if (resto == 9) numhexaux.push_back('9');//numhexaux[ind++] = '9';
			else if (resto == 8) numhexaux.push_back('8');//numhexaux[ind++] = '8';
			else if (resto == 7) numhexaux.push_back('7');//numhexaux[ind++] = '7';
			else if (resto == 6) numhexaux.push_back('6');//numhexaux[ind++] = '6';
			else if (resto == 5) numhexaux.push_back('5');//numhexaux[ind++] = '5';
			else if (resto == 4) numhexaux.push_back('4');//numhexaux[ind++] = '4';
			else if (resto == 3) numhexaux.push_back('3');//numhexaux[ind++] = '3';
			else if (resto == 2) numhexaux.push_back('2');//numhexaux[ind++] = '2';
			else if (resto == 1) numhexaux.push_back('1');//numhexaux[ind++] = '1';
			else if (resto == 0) numhexaux.push_back('0');//numhexaux[ind++] = '0';
			ndec = ndec / 16;
		}
		if (ndec == 15) numhexaux.push_back('F');//numhexaux[ind++] = 'F';
		else if (ndec == 14) numhexaux.push_back('E');//numhexaux[ind++] = 'E';
		else if (ndec == 13) numhexaux.push_back('D');//numhexaux[ind++] = 'D';
		else if (ndec == 12) numhexaux.push_back('C');//numhexaux[ind++] = 'C';
		else if (ndec == 11) numhexaux.push_back('B');//numhexaux[ind++] = 'B';
		else if (ndec == 10) numhexaux.push_back('A');//numhexaux[ind++] = 'A';
		else if (ndec == 9) numhexaux.push_back('9');//numhexaux[ind++] = '9';
		else if (ndec == 8) numhexaux.push_back('8');//numhexaux[ind++] = '8';
		else if (ndec == 7) numhexaux.push_back('7');//numhexaux[ind++] = '7';
		else if (ndec == 6) numhexaux.push_back('6');//numhexaux[ind++] = '6';
		else if (ndec == 5) numhexaux.push_back('5');//numhexaux[ind++] = '5';
		else if (ndec == 4) numhexaux.push_back('4');//numhexaux[ind++] = '4';
		else if (ndec == 3) numhexaux.push_back('3');//numhexaux[ind++] = '3';
		else if (ndec == 2) numhexaux.push_back('2');//numhexaux[ind++] = '2';
		else if (ndec == 1) numhexaux.push_back('1');//numhexaux[ind++] = '1';
		else if (ndec == 0) numhexaux.push_back('0');//numhexaux[ind++] = '0';
		//numhexaux[ind] = '\0';
		reverse(numhexaux.begin(), numhexaux.end());
		cout << numhexaux << endl;
	}
	//else printf("%lld\n", ndec);
	else cout << ndec << endl;
	//system("pause");
	return 0;
}