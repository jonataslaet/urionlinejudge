#include <stdio.h>

int main(){
    
    int i, a, n, x = 0, soma = 0;
    
    scanf("%d", &a);
    do{
        scanf("%d", &n);
    }while(n <= 0);
    for (i = a;; i++){
        if (x == n) break;
        else {
            soma+=i; 
        }
        x++;
    }
    printf("%d\n", soma);
    
    return 0;
}