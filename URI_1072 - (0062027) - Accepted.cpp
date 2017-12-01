#include <stdio.h>

int main(){
    
    int n, i, x, qtdout = 0, qtdin = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        if (x >= 10 && x <= 20){
           qtdin++; 
        }
        else{
            qtdout++;
        }
    }
    printf("%d in\n", qtdin);
    printf("%d out\n", qtdout);
        
    return 0;    
}