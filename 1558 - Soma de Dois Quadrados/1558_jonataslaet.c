#include <stdio.h>
#include <math.h>
#include <stdlib.h>

bool sum2(int *v, int n, int k)
{
    int i = 0, j = n - 1, w = 0;
    while(j >= i)
    {
        if (v[i] + v[j] > k) j--;
        if (v[i] + v[j] < k) i++;
        if ((v[i] + v[j] == k))
        {
            w = 1;
            break;
        }
    }
    if (w == 1) return true;
    else return false;
}

int main()
{
    int num, vetor[101], x = 0, i;
    bool ok;
    for (i = 0; i < 101; i++)
    {
        vetor[i] = x * x;
        x++;
    }

    while(scanf("%d", &num) == 1)
    {
        ok = false;
        ok = sum2(vetor, 101, num);
        if (ok == true) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
