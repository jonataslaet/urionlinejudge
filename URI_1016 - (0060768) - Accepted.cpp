#include <stdio.h>
#include <math.h>

int main(){
    
    int x, t;
    float d;
    
    scanf("%f", &d);
    
    t = ((d/ (float)30) * 60);
    printf("%d minutos\n", t);
    
    return 0;
}