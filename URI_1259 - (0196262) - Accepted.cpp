#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare (const void * x, const void * y)
{
    return (*(int*)x - * (int*)y);
}

int main()
{
    int num, vetpar[100000], vetimp[100000], n, i, contimp = 0, contpar = 0;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            vetpar[contpar] = num;
            contpar++;
        }
        else
        {
            vetimp[contimp] = num;
            contimp++;
        }
    }
    qsort(vetimp, contimp, sizeof(int), compare);
    qsort(vetpar, contpar, sizeof(int), compare);
    for (i = 0; i < contpar; i++) printf("%d\n", vetpar[i]);
    for (i = contimp-1; i >= 0; i--) printf("%d\n", vetimp[i]);
    
    return 0;
}