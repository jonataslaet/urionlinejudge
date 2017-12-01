#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int i, n, x;
    unsigned long long int aux, k, qtdgraos;
    unsigned long long int somaqtdgraos, qtdkg;
 
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        aux = 1;
        qtdgraos = 0;
        somaqtdgraos = 0;
        qtdgraos += aux;
        somaqtdgraos += qtdgraos;
        for (k = 1; k < x; k++)
        {
            aux = 2*aux;
            qtdgraos = aux;
            somaqtdgraos += qtdgraos;  
        }
        qtdkg = (somaqtdgraos/12)/1000;
        printf("%lld kg\n", qtdkg);
    }
     
    return 0;
}