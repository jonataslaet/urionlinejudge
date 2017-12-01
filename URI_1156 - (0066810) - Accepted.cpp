#include <stdio.h>

int main(){
    
    float soma = 0, d = 1;
    int i;
    
    for (i = 1; i <= 39; i = i + 2){
        soma+=i/d;
        d*=2;
    }
    printf("%.2f\n", soma);
    
    return 0;
}