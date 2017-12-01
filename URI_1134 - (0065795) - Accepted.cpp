#include <stdio.h>

int main(){
    
    int qtd1 = 0, qtd2 = 0, qtd3 = 0, opt, z;
    
    for (z = 0;; z++){
        do{
          scanf("%d", &opt);
        }while(opt != 1 && opt != 2 && opt != 3 && opt != 4);
         if (opt == 1) qtd1++;
         else if (opt == 2) qtd2++;
         else if (opt == 3) qtd3++;
         else if (opt == 4) {
             printf("MUITO OBRIGADO\n");
             printf("Alcool: %d\n", qtd1);
             printf("Gasolina: %d\n", qtd2);
             printf("Diesel: %d\n", qtd3);
             break;
         }        
    }
    
    
    return 0;   
}