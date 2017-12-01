#include <stdio.h>

int main(){
    
    int a, b, c, d, p;
    
    scanf("%d", &a); 
    scanf("%d", &b); 
    scanf("%d", &c); 
    scanf("%d", &d);
    
    p = (a * b) - (c * d);
    
    printf("DIFERENCA = %d\n", p);
    
    return 0;
}