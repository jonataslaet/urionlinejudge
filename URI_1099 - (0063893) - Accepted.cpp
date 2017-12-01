#include <stdio.h>

int main(){
    
    int somaimp, i, j, n, n1, n2, me, ma;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        somaimp = 0;
        scanf("%d %d", &n1, &n2);
        if (n1 > n2){
           ma = n1;
           me = n2;
        }
        else{
           ma = n2;
           me = n1;
        }
        for (j = me+1; j < ma; j++){
            if (j % 2 != 0){
               somaimp = somaimp + j; 
            }
        }
        printf("%d\n", somaimp);
    }
    
    return 0;    
}