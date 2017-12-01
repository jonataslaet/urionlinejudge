#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  
int main()
{
    int n, i, j, show, aux;
    int matriz[100][100];
  
    for(;;)
    {
        scanf("%d", &n);
        if (n == 0) break;
        else
        {
            aux = n - 1;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    show = (abs(i-j))+1;
                    matriz[i][j] = show;
                    //MOSTRA A
                    if (j < aux) printf("%3d ", show);
                    else printf("%3d", show);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
  
    return 0;
}