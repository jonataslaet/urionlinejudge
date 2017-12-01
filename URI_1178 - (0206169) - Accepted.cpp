#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
     
    int i;
    double vet[100], x, y, z, lixo, partintx;
     
    scanf("%lf", &x);
     
    for (i = 0; i < 100; i++){
        vet[i] = x;
        x = x / 2;
    }
    for (i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, vet[i]);     
    }
     
    return 0;
}