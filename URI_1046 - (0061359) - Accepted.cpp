#include <stdio.h>

int main(){
    
    int time, h1, h2;
    
    scanf("%d %d", &h1, &h2);
    if (h2 > h1){
        time = h2 - h1;
    }
    else if (h1 > h2){
        time = (h2 + 24) - h1;
    }
    printf("O JOGO DUROU %d HORA(S)\n", time);
    
    return 0;    
}