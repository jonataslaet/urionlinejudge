#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415926535897932
 
int main(int argc, char** argv)
{
    long double p, q;
    double k = sin(108*pi/180)/sin(63*pi/180);
    
    while(scanf("%Lf", &p) != EOF)
    {         
        printf("%.10Lf\n", k*p);     
    }
 
    return 0;
}