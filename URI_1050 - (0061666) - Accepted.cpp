#include <stdio.h>

int main(){
    
    int num;
    
    scanf("%d", &num);
    if (num == 61){
        printf("Brasilia\n");
    }
    else if (num == 71){
        printf("Salvador\n");
    }
    else if (num == 11){
        printf("Sao Paulo\n");
    }
    else if (num == 21){
        printf("Rio de Janeiro\n");
    }
    else if (num == 32){
        printf("Juiz de Fora\n");
    }
    else if (num == 19){
        printf("Campinas\n");
    }
    else if (num == 27){
        printf("Vitoria\n");
    }
    else if (num == 31){
        printf("Belo Horizonte\n");
    }
    else {
        printf("DDD nao cadastrado\n");
    }
    
    return 0;   
}