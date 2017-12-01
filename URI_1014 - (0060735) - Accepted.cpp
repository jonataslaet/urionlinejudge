#include <stdio.h>

int main(){
    
    int x;
    float y, cons;
    
    scanf("%d", &x);
    scanf("%f", &y);
    
    cons = (float)x / y;
    
    printf("%.3f km/l\n", cons);
    
    return 0;
}