#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n,x,y;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        printf("%d cm2\n", ((x*y)/2));
    }    
    
    return 0;
}