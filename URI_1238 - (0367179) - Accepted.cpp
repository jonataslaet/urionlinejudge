#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, k, x, tambig, tamshort, tamstr1, tamstr2;
    char str1[51], str2[51], strcomb[51], strmaior[51];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %s", str1, str2);
        tamstr1 = strlen(str1);
        tamstr2 = strlen(str2);     
        if (tamstr1 > tamstr2)
        {
            tambig = tamstr1;
            tamshort = tamstr2;
            strcpy(strmaior, str1);
        }
        else 
        {
           tamshort = tamstr1;
           tambig = tamstr2; 
           strcpy(strmaior, str2);
        }    
        x = 0;
        for (k = 0; k < tambig; k++)
        {
            if (k < tamshort)
            {
            	//printf("CARACTERE %d: %c\n", k+1, strmaior[k]);
                strcomb[k + x] = str1[k];
                strcomb[k + x + 1] = str2[k];
                x++;
            }
			else
			{
				strcomb[k+x] = strmaior[k];
			}
        }
        strcomb[k+x] = '\0';
        printf("%s\n", strcomb);
        //printf("%s\n", strmaior);
    }

    return 0;
}