#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    float resto;
    signed long int n;
    int i, cont, t, z, y;
    
    scanf("%d", &z);
        for (y=0;y<z;y++){    
        scanf("%li", &n);
        t = abs(n);
        
        cont = 0;
        for (i = 1; i <= sqrt(t); i++){
            resto = t % i;
            if (resto == 0){
               cont++;      
            }    
        }
        if (cont >= 2){
           printf("Not Prime\n");         
        }
        else if (n == 0 || n == 1 || n == -1){
                printf("Not Prime\n");
        }
        else {
             printf("Prime\n");
        }     
    }
    
    return 0;  
     
}