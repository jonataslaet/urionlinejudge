#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	int t;
	string str, strVog, strVogRev;
	cin >> str;
	t = str.size();
	for(int i = 0; i < t; i++)
	{
		if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			strVog.push_back(str[i]);
			strVogRev.push_back(str[i]);
		}
	}
	
	reverse(strVogRev.begin(), strVogRev.end());
	if (strVog == strVogRev) printf("S\n");
	else printf("N\n");
	return 0;
}