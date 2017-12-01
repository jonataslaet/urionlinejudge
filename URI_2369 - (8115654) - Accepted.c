#include <stdio.h>

int main(){
    
    int m3, valor;
    
    scanf("%i", &m3);
    
    if (m3 < 11){
        valor = 7;  
    }
    else if (m3 > 10 && m3 < 31){
            valor = 7+(m3-10);       
    }
    else if (m3 > 30 && m3 < 101){
            valor = 27+2*(m3-30);     
    }
    else if (m3 > 100){
            valor = 167+5*(m3-100);
    }
    printf("%i\n", valor);
    
   return 0;   
}
