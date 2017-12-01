#include <stdio.h>

int main(){
    
    int n, m, i, k, winner, teste, soma, laptime[200];
    
    scanf("%i %i", &n, &m);
    for (i = 0; i < n; i++){
        soma = 0;
        for (k = 0; k < m; k++){
            scanf("%i", &laptime[k]);
            soma = soma + laptime[k];
        }
        if (i == 0){
           teste = soma;
           winner = i + 1;   
        }
        if (i > 0 && soma < teste){
           teste = soma;
           winner = i + 1;      
        }
    }
    printf("%i\n", winner);
    
    return 0;   
}