#include <stdio.h>

int main(){
    int nota;
    
    scanf("%d", &nota);
    if (nota <= 100 && nota>=86){
       printf("A");         
    }
    else if (nota <= 85 && nota>=61){
         printf("B");        
    }
    else if (nota <= 60 && nota>=36){
         printf("C");         
    }
    else if (nota <= 35 && nota>=1){
         printf("D");         
    }
    else if (nota == 0){
         printf("E");         
    }
    printf("\n");
    return 0;   
}