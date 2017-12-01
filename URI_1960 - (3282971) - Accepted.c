#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ArabicToRoman (unsigned int numero, char *resultado) 
{
    char *centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *dezenas[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int   size[] = { 0, 1, 2, 3, 2, 1, 2, 3, 4, 2,};

    while (numero >= 1000)
    {
        *resultado++ = 'M';
         numero -= 1000;
    }

    strcpy (resultado, centenas[numero / 100]); resultado += size[numero / 100]; numero = numero % 100;
    strcpy (resultado, dezenas[numero / 10]);   resultado += size[numero / 10];  numero = numero % 10;
    strcpy (resultado, unidades[numero]);       resultado += size[numero];
}

int main()
{
    char *romanNumber = malloc(sizeof(char) * 1024);
    int numero;

    scanf("%d", &numero);

    ArabicToRoman(numero, romanNumber);
    printf("%s\n", romanNumber);

    return 0;
}