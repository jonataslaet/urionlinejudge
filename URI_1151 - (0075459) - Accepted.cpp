#include <stdio.h>

int main () {
    
    unsigned int fib[50], i, n;
    
    fib[0] = 0;
    fib[1] = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        if (i > 1){
           fib[i] = fib[i-1] + fib[i-2];
        }
        if (i < n - 1) printf("%d ", fib[i]);
        else if (i == n - 1) printf("%d\n", fib[i]);
    }
    
    return 0;   
}