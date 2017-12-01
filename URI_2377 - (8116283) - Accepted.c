#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int l, d, k, p, custo;
  
    scanf("%i %i", &l, &d);
    scanf("%i %i", &k, &p);
    custo = (l * k) + ((l / d) * p);
    printf("%i\n", custo);
    
    return 0;    
}