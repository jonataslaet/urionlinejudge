#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, resultado;

    for (;;)
    {
        scanf("%i", &n);
        if (n != 0)
        {
            resultado = 0;
            for (i = 1; i <= n; i++)
            {
                resultado = resultado + i * i;
            }
            printf("%i\n", resultado);
        }
        else break;
    }




    return 0;
}