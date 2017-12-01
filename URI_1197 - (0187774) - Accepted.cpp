#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int v, t, d;
    while(scanf("%d %d", &v, &t) != EOF)
    {
        d = 2 * (v * t);
        printf("%d\n", d);
    }
    
    return 0;
}