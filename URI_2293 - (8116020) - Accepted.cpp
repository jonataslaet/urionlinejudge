#include <stdio.h>
#include <stdlib.h>

int main(){
    int smlin, smcol, i, j, k, m, n, col;
    
    
    scanf("%i %i", &n, &m);
    n = abs(n);
    m = abs(m);
    
    int campo[100][100];
    unsigned int somalin[100], somacol[100], somamaior = 0;
    
    for (i = 0; i < n; i++){
        somalin[i] = 0;
        for (j = 0; j < m; j++){
            if (i == 0){
               somacol[j] = 0;      
            }
            scanf("%i", &campo[i][j]);
            somalin[i] = somalin[i] + campo[i][j];
            somacol[j] = somacol[j] + campo[i][j];          
        }
        if (somalin[i] >= somamaior){
           somamaior = somalin[i];               
        }
        col++;    
    }
    
   
    for (i = 0; i < j; i++){
        if (somacol[i] >= somamaior){
           somamaior = somacol[i];              
        }    
    }
    
    
    printf("%u\n", somamaior);
    
   return 0;   
}