#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, j, aux, cp, show;

    for(;;)
    {
        scanf("%d", &n);
        if (n == 0) break;
        else
        {
            cp = 1;
            show = 1;
            aux = n - 1;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (i == j) show = 1;
                    //MOSTRA A
                    if (j < aux) printf("%3d ", show);
                    else printf("%3d", show);
                    if (j < i) show--;
                    else show++;
                }
                show = ++cp;
                printf("\n");
            }
            printf("\n");
        }
    }

    return 0;
}
