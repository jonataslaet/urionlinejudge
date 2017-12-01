#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    int j, k, tam, t, cont, aux;
    char string1[10000], string2[10000];
 
    while (scanf(" %[^(\n)]s", &string1) != EOF)
    {
        tam = strlen(string1);
        t = 1;
        j = 0;
        for (k = 0; k < tam; k++)
        {
            if (string1[k] != ' ' && t == 1)
            {
            	//if (string1[k] >= 'A' && string1[k] <= 'Z') (string1[k]) = (string1[k]) + 32; 
				string2[j] = tolower(string1[k]);
                t = 0;
                j++;
            }
            else if (string1[k] == ' ')
            {
                t = 1;
            }
        }
        string2[j] = '\0';
        tam = strlen(string2);
        cont = 0;
        aux = 0;
        for (k = 1; k < tam; k++)
        {
            if ((string2[k]) == (string2[k - 1]))
            {
                if (aux == 0)
                {
                    cont++;
                    aux = 1;
                }
            }
            else aux = 0;
        }
        printf("%d\n", cont);
    }
 
    return 0;
}