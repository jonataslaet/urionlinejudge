#include <stdio.h>

int main(){

    int i, qtd = 0;
    float x, soma = 0.0, t;
    
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
         soma = 0.0;
         qtd = 0;
         printf("novo calculo (1-sim 2-nao)\n");
         do{
             scanf("%f", &t);
             if (t < 1 || t > 2){
                printf("novo calculo (1-sim 2-nao)\n"); 
             }
             else if (t == 2){
                 break;
             }
         }while(t > 2.0 || t < 1.0); 
      }
      if (t == 2){
         break; 
      }
    }

    return 0;    
}