#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int certa, b, p, j, n, i, k, result[1000];
    
    j = 0;
    do{
      scanf("%i", &n);
      n = abs(n);
      int resposta[n][5];   
      for (i = 0; i < n; i++){
          p = 0;
          b = 0;
          for (k = 0; k < 5; k++){
              scanf("%i", &resposta[i][k]);
              if (resposta[i][k] <= 127){
                 p++;
                 certa = k;
              }
              else if (resposta[i][k] > 127){
                      b++;
                   }
          }
          if (p == 1 && b == 4){
             result[j] = certa;
          }
          else {
               result[j] = 5;     
          }
          j++;    
      }
      
    }while(n != 0);
    
    for (k = 0; k < j; k++){
        switch (result[k]) {
               case 0: {
                    printf("A\n");   
                    break;
               }
               case 1: {
                    printf("B\n");
                    break;
               }
               case 2: {
                    printf("C\n");
                    break;
               }
               case 3: {
                    printf("D\n");   
                    break;
               }
               case 4: {
                    printf("E\n");  
                    break;
               }
               case 5: {
                    printf("*\n");   
                    break;
               }
               default : {
                    printf("*\n");
                    break;   
               }
        }    
    }
    
    return 0;    
}
