#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    long long int tamvalx, soma, z, ind, y, h, resto, ndec, aux;
    char num[33], numhexaux[33],numhex[33];
    for (;;)
    {
        scanf("%s", num);
        if (strcmp(num, "-1") == 0) break;
        else
        {
            tamvalx = strlen(num);
            //############################ TEXTO == "dec" ##############################
            if (num[1] != 'x')
            {
                ndec = 0;
                ind = tamvalx - 1;
                //CONVERSÃO TEMPORÁRIA PRA DECIMAL
                for (aux = 0; aux < tamvalx; aux++)
                {
                    ndec = ndec + ((num[aux]) - '0') * (long long int)(pow(10, ind));
                    ind--;
                }
                aux = ndec;
                //Converte pra hexadecimal
                ind = 0;
                y = 0, h = 0;
                if (ndec > 9)
                {
                    while (ndec >= 16)
                    {
                        resto = ndec % 16;
                        if (resto == 15) numhexaux[ind++] = 'F';
                        else if (resto == 14) numhexaux[ind++] = 'E';
                        else if (resto == 13) numhexaux[ind++] = 'D';
                        else if (resto == 12) numhexaux[ind++] = 'C';
                        else if (resto == 11) numhexaux[ind++] = 'B';
                        else if (resto == 10) numhexaux[ind++] = 'A';
                        else if (resto == 9) numhexaux[ind++] = '9';
                        else if (resto == 8) numhexaux[ind++] = '8';
                        else if (resto == 7) numhexaux[ind++] = '7';
                        else if (resto == 6) numhexaux[ind++] = '6';
                        else if (resto == 5) numhexaux[ind++] = '5';
                        else if (resto == 4) numhexaux[ind++] = '4';
                        else if (resto == 3) numhexaux[ind++] = '3';
                        else if (resto == 2) numhexaux[ind++] = '2';
                        else if (resto == 1) numhexaux[ind++] = '1';
                        else if (resto == 0) numhexaux[ind++] = '0';
                        ndec = ndec / 16;
                    }
                    if (ndec == 15) numhexaux[ind++] = 'F';
                    else if (ndec == 14) numhexaux[ind++] = 'E';
                    else if (ndec == 13) numhexaux[ind++] = 'D';
                    else if (ndec == 12) numhexaux[ind++] = 'C';
                    else if (ndec == 11) numhexaux[ind++] = 'B';
                    else if (ndec == 10) numhexaux[ind++] = 'A';
                    else if (ndec == 9) numhexaux[ind++] = '9';
                    else if (ndec == 8) numhexaux[ind++] = '8';
                    else if (ndec == 7) numhexaux[ind++] = '7';
                    else if (ndec == 6) numhexaux[ind++] = '6';
                    else if (ndec == 5) numhexaux[ind++] = '5';
                    else if (ndec == 4) numhexaux[ind++] = '4';
                    else if (ndec == 3) numhexaux[ind++] = '3';
                    else if (ndec == 2) numhexaux[ind++] = '2';
                    else if (ndec == 1) numhexaux[ind++] = '1';
                    else if (ndec == 0) numhexaux[ind++] = '0';
                    numhexaux[ind] = '\0';
                    for (h = ind - 1; h >= 0; h--) numhex[y++] = numhexaux[h];
                    numhex[y] = '\0';
                    printf("0x%s\n", numhex);
                }
                else printf("0x%lld\n", ndec);
            }
            //############################ TEXTO == "hex" ##############################
            else
            {
                //Converte pra decimal
                ind = tamvalx - 3;
                soma = 0;
                for (z = 2; z < tamvalx; z++)
                {
                    if ((num[z] == 'a') || (num[z] == 'b') || (num[z] == 'c') || (num[z] == 'd') || (num[z] == 'e') || (num[z] == 'f'))
                        soma = soma + ((num[z] - '0') - 39) * (long long int)(pow(16, ind));
                    else if ((num[z] == 'A') || (num[z] == 'B') || (num[z] == 'C') || (num[z] == 'D') || (num[z] == 'E') || (num[z] == 'F'))
                        soma = soma + ((num[z] - '0') - 7) * (long long int)(pow(16, ind));
                    else soma = soma + (num[z] - '0') * (long long int)(pow(16, ind));
                    ind--;
                }
                printf("%lld\n", soma);
            }
        }
    }
 
    return 0;
}