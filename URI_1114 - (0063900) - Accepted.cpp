#include <stdio.h>

int main(){
    
    int z, pwd;
    
    for (z = 0;; z++){
        scanf("%d", &pwd);
        if (pwd == 2002){
           printf("Acesso Permitido\n"); 
           break; 
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    
    return 0;    
}