#include <stdio.h>

int main(){
    
    int n, num1, num2;
    char crt;
    scanf("%i", &n);
    
    scanf("%i %c %i", &num1, &crt, &num2);
    
    if (crt == '*'){
       if (num1 * num2 <= n){
          printf("OK");      
       }
       else{
            printf("OVERFLOW");     
       }     
    }
    else if (crt == '+'){
            if (num1 + num2 <= n){
               printf("OK");      
            }
            else{
               printf("OVERFLOW");     
            }
         }
    printf("\n");
    return 0;    
}