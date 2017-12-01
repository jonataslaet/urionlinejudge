#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double fatorial(double n)
{
    double fat;
    int i;

    fat = 1;
    for (i = 2; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

int main()
{
    double num1, num2;
    long long int somafat;

    somafat = 0;
    while (scanf("%lf %lf", &num1, &num2) != EOF)
    {
        somafat = (long long int)(fatorial(num1) + fatorial(num2));
        printf("%lld\n", somafat);
        somafat = 0;
    }

    return 0;
}