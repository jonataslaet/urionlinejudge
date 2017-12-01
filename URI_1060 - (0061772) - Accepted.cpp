#include <stdio.h>

int main(){
    
    int i, p = 0;
    float num;
    
    for (i = 0; i < 6; i++){
        scanf("%f", &num);
        if (num > 0){
           p++; 
        }
    }
    printf("%d valores positivos\n", p);
    
    return 0;    
}