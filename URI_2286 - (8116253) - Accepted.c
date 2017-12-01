#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    
    int i, n, n1, n2, k, teste;
    char player1[11], player2[11];
    
    k = 0;
    for (teste = 1;;teste++){
      scanf("%i", &n);
      if (n != 0){
         n = abs(n);
          fflush(stdin);    
          scanf("%s", player1);
          fflush(stdin);
          scanf("%s", player2);
          for (i = 0; i < n; i++){
              scanf("\n%i %i", &n1, &n2);
              if (i == 0){
              	printf("Teste %i\n", teste);
              } 
              if ((n1 + n2) % 2 == 0){
                 printf("%s\n", player1);
              }
              else{
                 printf("%s\n", player2);
              }
          }
          printf("\n");
       }
       else{
       	  break;
       }       
    }
    
     
    return 0;
}





