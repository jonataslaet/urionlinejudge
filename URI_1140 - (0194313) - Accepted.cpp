#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[1050];
    int z, tam, t, qtdspc, i;
    for (z = 0;;z++){
        fflush(stdin);    
        gets(frase);
        tam = strlen(frase);
        if (strcmp(frase,"*")!=0){
           tam = strlen(frase);
           qtdspc = 0;
           for (i = 0; i < tam; i++){
               if (frase[i] == ' '){
                  qtdspc++;            
               }
           }
           t = 0;
           for (i = 0; i < tam; i++){
               if (frase[i] == ' ' && (tolower(frase[0])==tolower(frase[i+1]))){ 
                  t++;
               }
           }
           if (t == qtdspc){
              printf("Y\n");   
           }
           else {
              printf("N\n");     
           } 
        }
        else{
             break;     
        }          
    }
    
    
    return 0;   
}