#include <stdio.h>
   
int main(){
       
    long long int seqfib[62], x, i, t;
       
    seqfib[0] = 0; seqfib[1] = 1;
    for (i = 2; i < 61; i++){
        seqfib[i] = seqfib[i-1] + seqfib[i-2];
    }
       
    scanf("%lld", &t);
    for (i = 0; i < t; i++){
        scanf("%lld", &x);
        printf("Fib(%lld) = %llu\n", x, seqfib[x]);     
    }
       
    return 0;
}