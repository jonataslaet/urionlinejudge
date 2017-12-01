#include <stdio.h>

int main(){
    
    int z, n1, n2;
    
    for (z = 0;; z++){
        scanf("%d %d", &n1, &n2);
        if (n1 == n2){
           break; 
        }
        else{
            if (n1 > n2){
               printf("Decrescente\n");
            }
            else if (n2 > n1){
               printf("Crescente\n");
            }
        }
    }
    
    return 0;    
}