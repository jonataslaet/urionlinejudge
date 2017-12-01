#include <stdio.h>
#include <string.h>

int main()
{
    char nome[51][102];
    int n, i, j, tam[51], tamMa, tamx, z;

    for (z=0;;z++)
    {
        scanf("%d", &n);
        if (n != 0)
        {
        	if (z > 0) printf("\n");
            for (i = 0; i < n; i++)
            {
                scanf("%s", nome[i]);
                if (i == 0)
                {
                    tamMa = strlen(nome[i]);
                    tam[i] = tamMa;
                }
                else
                {
                    tam[i] = strlen(nome[i]);
                    if (tam[i] > tamMa) tamMa = tam[i];
                }
            }
            for (i = 0; i < n; i++)
            {
                tamx = tamMa - tam[i];
                for (j = 0; j < tamx; j++) printf(" ");
                printf("%s\n", nome[i]);
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}