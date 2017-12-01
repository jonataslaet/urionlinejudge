#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int q, i, n;
    float c;
    
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%f", &c);
        q = 0;
        while (c > 1)
        {
            c/=2;
            q++;
        }
        printf("%d dias\n", q);
    }
    
    
    return 0;
}