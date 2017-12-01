#include <stdio.h>
#include <math.h>

int main(){
    
    int thr;
    float vm, dist, x;
    
    scanf("%d", &thr);
    scanf("%f", &vm);
    
    dist = vm * (float)thr;
    x = dist / 12;
    printf("%.3f\n", x);
    
    return 0;
}