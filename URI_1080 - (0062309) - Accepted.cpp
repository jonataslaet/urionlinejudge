#include <stdio.h>

int main(){
    
    int i, ma = 0, pos = 0, n;
    
    for (i = 1; i <= 100; i++){
        scanf("%d", &n);
        if (n > ma){
           pos = i;
           ma = n;
        }
    }
    printf("%d\n", ma);
    printf("%d\n", pos);
    
    return 0;    
}