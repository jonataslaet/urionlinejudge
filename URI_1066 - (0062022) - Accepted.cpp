#include <stdio.h>

int main(){
    
    int i, num, qtdpar = 0, qtdimp = 0, qtdneg = 0, qtdpos = 0;
    for (i = 0; i < 5; i++){
        scanf("%d", &num);
        if (num % 2 == 0){
           qtdpar++; 
        }
        if (num > 0){
           qtdpos++; 
        }
        if (num < 0){
           qtdneg++; 
        }
        if (num % 2 != 0){
           qtdimp++; 
        }
    }
    printf("%d valor(es) par(es)\n", qtdpar);
    printf("%d valor(es) impar(es)\n", qtdimp);
    printf("%d valor(es) positivo(s)\n", qtdpos);
    printf("%d valor(es) negativo(s)\n", qtdneg);
    
    
    return 0;    
}