#include <stdio.h>
#include <math.h>

int main(){
    
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        printf("%d ", i);
        printf("%d ", i*i);
        printf("%d\n", i*i*i);
    }
    
    return 0;
}