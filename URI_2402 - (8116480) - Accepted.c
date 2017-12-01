#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    float resto;
    long long int n;
    int i, cont;
        
    scanf("%lli", &n);
    
    cont = 0;
    for (i = 1; i <= sqrt(n); i++){
        resto = n % i;
        if (resto == 0){
           cont++;      
        }    
    }
    if (n == 1 || n == 2 || n == 3){
       printf("N");
    }
    else if (cont >= 2){
       printf("S");         
    }
    else {
         printf("N");
    } 
    printf("\n");
    return 0;
} 




