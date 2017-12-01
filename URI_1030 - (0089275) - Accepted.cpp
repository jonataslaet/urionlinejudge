#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int z, p, n, i, j, x, y, q;
    
    scanf("%d", &n);
    for (z=1;z<=n;z++)
    {
        scanf("%d %d", &x, &y);
        int xcircle[x];
        for (j=0; j<x; j++) xcircle[j] = j+1; //preenche vetor
    
        q = 0; p = 0;
        do
        {
            for (i=0;i<x;i++)
            {
                if (xcircle[i] != 0) q++;    
                if (q == y)
                {
                   xcircle[i] = 0;
                   q = 0; 
                   p++;
                }           
            }
        }while(p < (x-1));
        for (i=0;i<x;i++)
        {
            if (xcircle[i] != 0)
            {
               printf("Case %d: %d\n", z, xcircle[i]);
               break;     
            }    
        }   
    }     
               
    return 0;
}