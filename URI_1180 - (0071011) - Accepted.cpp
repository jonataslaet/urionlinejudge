#include <stdio.h>

int main(){

    int n, i, menval, pos, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        if (i == 0){
           menval = x; pos = i;
        }
        else{
            if (x < menval){
               menval = x; pos = i;
            }
        }
    }
    printf("Menor valor: %d\n", menval);
    printf("Posicao: %d\n", pos);

    return 0;
}