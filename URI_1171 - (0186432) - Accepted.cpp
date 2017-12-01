#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int compare (const void * x, const void * y)
{
    return (*(int*)x - * (int*)y);
}

int main()
{
    int n, i, qtdrep = 1;

    scanf("%d", &n);
    int num[n], qtdnum[n];
    memset(qtdnum, 0, sizeof(int)); //preenche o vetor com 0

    ///for (i = 0; i < n; i++) printf("%d", qtdnum[i]);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    qsort(num, n, sizeof(int), compare);
    for (i = 0; i < n; i++)
    {
        if (num[i] == num[i+1])
            qtdrep++;
        else
        {
            printf("%d aparece %d vez(es)\n", num[i], qtdrep);
            qtdrep = 1;
        }
    }

    return 0;
}