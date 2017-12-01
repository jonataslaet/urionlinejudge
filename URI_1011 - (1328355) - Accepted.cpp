#include <stdio.h>
#define pi 3.14159
 
int main(){
     
    int r;
    double v;
     
    scanf("%d", &r);
    v = (4 * pi * (double)r * (double)r * (double)r)/3;
    printf("VOLUME = %.3lf\n", v);
     
    return 0;    
}