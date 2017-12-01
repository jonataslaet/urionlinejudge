#include <stdio.h>

int main(){
    
    float age, soma = 0, media, z = 0;
    for (;;){
        scanf("%f", &age);
        if (age > 0){
           soma+=age;
           z++;
        }
        else{
           break; 
        }
    }
    media = soma / z;
    printf("%.2f\n", media);
    
    return 0;
}