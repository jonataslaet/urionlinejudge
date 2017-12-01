#include <stdio.h>
#include <math.h>

int main(){
    int inst, i, t, k, j, soma, num, vetorn[100], teste;
    inst = 1;
    while (scanf("%i", &num) != EOF){
          if (num != 0){
             for (i = 0; i < num; i++){
                 scanf("%i", &vetorn[i]);
             }     
             t = 0;
             for (i = 0; i < num; i++){
                 soma = 0;
                 for (j = 0; j < i; j++){
                     soma = soma + vetorn[j];            
                 }
                 if (soma == vetorn[j]){
                    teste = vetorn[i];      
                    t = 7;
                    break;         
                 }            
             }
             if (t == 7){
                printf("Instancia %i\n", inst);
                printf("%i\n", teste);
             }
             else {
                  printf("Instancia %i\n", inst);
                  printf("nao achei\n");       
             }
          }
          else {
               printf("Instancia %i\n", inst);
               printf("0\n");                 
          }
          printf("\n");
          inst++;
    }
    
    
    return 0;    
}