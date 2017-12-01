#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x1, y1, r1, x2, y2, r2;
    double d;


    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) > 0)
    {
        d = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
        if (r1 < r2 + d) printf("MORTO\n");
        else printf("RICO\n");        
    }
    
    return 0;
}