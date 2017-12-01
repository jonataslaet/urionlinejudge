#include <stdio.h>

int main(){
    
    int soma, z, j, n1, n2, me, ma, n;
    
    for (z = 0;; z++){
        scanf("%d %d", &n1, &n2);
        if (n1 <= 0 || n2 <= 0){
           break; 
        }
        else{
            soma = 0;
            if (n1 > n2){
               ma = n1;
               me = n2;
            }
            else{
               ma = n2;
               me = n1;
            }
            for (j = me; j <= ma; j++){
                soma = soma + j;
                printf("%d ", j);
            }
            printf("Sum=%d\n", soma);
        }
    }
    
    return 0;    
}