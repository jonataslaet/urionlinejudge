#include <stdio.h>

int main(){

    float a, b, md;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    md = (a * 3.5 + b * 7.5) / 11;
    
    printf("MEDIA = %.5f\n", md);

    return 0;    
}