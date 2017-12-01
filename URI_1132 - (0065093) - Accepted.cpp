#include <stdio.h>

int main(){
    
    int i, n1, n2, me, ma, soma = 0;
    
    scanf("%d %d", &n1, &n2);
    if (n1 > n2){
        ma = n1;
        me = n2;
    }
    else if (n2 > n1){
        ma = n2;
        me = n1;
    }
    for (i = me; i <= ma; i++){
        if (i % 13 != 0) soma = soma + i;
    }
    printf("%d\n", soma);
    
    return 0;
}