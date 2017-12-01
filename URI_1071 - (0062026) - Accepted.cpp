#include <stdio.h>

int main(){
    
    int i, x, y, ma, me, sum = 0;
    scanf("%d %d", &x, &y);
    if (x < y){
        me = x;
        ma = y;
    }
    else {
        me = y;
        ma = x;
    }
    for (i = me + 1; i < ma; i++){
        if (i % 2 != 0){
           sum = sum + i; 
        }
    }
    printf("%d\n", sum);
        
    return 0;    
}