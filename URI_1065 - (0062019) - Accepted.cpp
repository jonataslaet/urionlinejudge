#include <stdio.h>

int main(){
    
    int i, num, qtdpar = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        if (num % 2 == 0){
           qtdpar++; 
        }
    }
    printf("%d valores pares\n", qtdpar);
    
    return 0;    
}