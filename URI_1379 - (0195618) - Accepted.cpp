#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b; 
    double somaAB, i, dif;
    
    for (;;)
    {
        scanf("%d %d", &a, &b);
        if (a != 0 && b != 0)
        { 
            dif = b - a;
            somaAB = a + b;
            i = a - dif;
            while ((somaAB+i)/3 != (double)a) i--;
            printf("%.lf\n", i);
        }
        else break;
    }
        
    return 0;
}