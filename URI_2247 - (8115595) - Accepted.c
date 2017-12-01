#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, n, v1, v2, t, valores[100];
    
    for (j = 0;;j++){
        scanf("%i", &n);
        if (n != 0){
           for (i = 0; i < n; i++){
               scanf("%i %i", &v1, &v2);
               valores[i] = v1 - v2;
               if (i > 0){
                  t = valores[i-1];
                  valores[i] = (v1 - v2) + t;  
               }   
           }
           printf("Teste %i\n", j+1);
           for (i = 0; i < n; i++){
               printf("%i\n", valores[i]);    
           }
           printf("\n");   
        }
        else{
             break;     
        }  
    }
    
    return 0;   
}