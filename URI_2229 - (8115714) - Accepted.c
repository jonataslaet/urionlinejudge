#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int n, k;
    double result;
    
    for (k = 1;; k++){
        scanf("%d", &n);
        if (n != -1){
           if (n == 0){
              result = 4;   
           }
           else if (n == 1){
                result = 9;     
           }
           else {
                result = (1+pow(2,n))*(1+pow(2,n));
           }
           printf("Teste %d\n", k);
           printf("%.lf\n\n", result);
        }
        else {
             break;     
        }   
    }
    
    return 0;   
}