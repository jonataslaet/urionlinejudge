#include <stdio.h>

int main(){

    int i, qtd = 0;
    float x, soma = 0.0;
    
    for (i = 0;; i++){
      scanf("%f", &x);
      if (x < 0.0 || x > 10.0){
         printf("nota invalida\n"); 
      }
      else{
         soma = soma + x; 
         qtd++; 
      }
      if (qtd == 2){
         printf("media = %.2f\n", soma / 2.0);
         break;
      }
    }

    return 0;    
}