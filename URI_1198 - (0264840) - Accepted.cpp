#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    long long int x, y, d, ma, me;
    while(scanf("%lld %lld", &x, &y) > 0)
    {
        if (x > y)
        {
            ma = x; me = y; 
        }
        else
        {
            ma = y; me = x;
        }
        d = ma - me;
        printf("%lld\n", d);
    }
     
    return 0;
}