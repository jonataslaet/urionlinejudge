#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, i, k, j, sort[10000];

    j = 0;
    do{
       scanf("%i", &n);
       n = abs(n);
    
       int vet1[n];
       
       for (i = 0; i < n; i++){
           scanf("%i", &vet1[i]);
           if (vet1[i] == i+1){
              sort[j] = vet1[i];            
           }
       }
       j++; 
    }while(n != 0);
    for (i = 0; i < j - 1; i++){
        printf("Teste %i\n", i+1);
        printf("%i\n\n", sort[i]);            
    }
    
    return 0;    
}