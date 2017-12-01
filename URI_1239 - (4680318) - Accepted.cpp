#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;
void confere(string frase)
{
	int tam = frase.size();
	int achouItalico = 0, achouNegrito = 0;
	for (int i = 0; i < tam; i++)
	{
		if (frase[i] == '_')
		{
			if (achouItalico == 0)
			{
				frase.erase (frase.begin() + i);
				frase.insert(i, "<i>");
				tam = frase.size();
				achouItalico = 1;
			}
			else
			{
				frase.erase (frase.begin() + i);
				frase.insert(i, "</i>");
				tam = frase.size();
				achouItalico = 0;
			}
		}
		if (frase[i] == '*')
		{
			if (achouNegrito == 0)
			{
				frase.erase (frase.begin() + i);
				frase.insert(i, "<b>");
				tam = frase.size();
				achouNegrito = 1;
			}
			else
			{
				frase.erase (frase.begin() + i);
				frase.insert(i, "</b>");
				tam = frase.size();
				achouNegrito = 0;
			}
		}
	}
}
int main(int argc, char *argv[])
{
	int achouItalico, achouNegrito, tam;
	string frase;
	//cin.ignore();
	while (getline(cin, frase))
	{
		//fflush(stdin);
		achouItalico = 0;
		achouNegrito = 0;
		tam = frase.size();
		//cout << frase << endl;
		for (int i = 0; i < tam; i++)
		{
			if (frase[i] == '_')
			{
				if (achouItalico == 0)
				{
					frase.erase (frase.begin() + i);
					frase.insert(i, "<i>");
					tam = frase.size();
					achouItalico = 1;
				}
				else
				{
					frase.erase (frase.begin() + i);
					frase.insert(i, "</i>");
					tam = frase.size();
					achouItalico = 0;
				}
			}
			if (frase[i] == '*')
			{
				if (achouNegrito == 0)
				{
					frase.erase (frase.begin() + i);
					frase.insert(i, "<b>");
					tam = frase.size();
					achouNegrito = 1;
				}
				else
				{
					frase.erase (frase.begin() + i);
					frase.insert(i, "</b>");
					tam = frase.size();
					achouNegrito = 0;
				}
			}
		}
		cout << frase << endl;
	}
	return 0;
}