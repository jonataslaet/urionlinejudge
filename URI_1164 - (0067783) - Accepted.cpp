#include <stdio.h>

int main(){

    int x, i, n, j, soma;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &x); soma = 0;
        for (j = 1; j < x; j++){
            if (x % j == 0){
               soma+=j;
            }
        }
        if (x == soma) printf("%d eh perfeito\n", x);
        else printf("%d nao eh perfeito\n", x);
    }

    return 0;
}