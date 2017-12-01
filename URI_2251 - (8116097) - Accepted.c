#include <stdio.h>
#include <stdlib.h>

   int main(){
   
   int qtdmov[30], j, i;
   int numdiscos;
   
   j = 0;
   do{    
      scanf("%d", &numdiscos);
      numdiscos = abs(numdiscos);
      qtdmov[j] = (pow(2, numdiscos)) - 1;   
      j++; 
   }while(numdiscos != 0);
   
   for (i = 0; i < j - 1; i++){
       printf("Teste %i\n", i+1);    
       printf("%i\n\n", qtdmov[i]);
   }
   
   return 0;   
}