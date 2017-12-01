#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, i, k, j, aux, s, teste, verif, m, num, teste6, x, y;
    
    scanf("%d", &n);
    n = abs(n);
    int score[n];
    
    
    for (k = 0; k < n; k++){
        int carta[5], cartaord[5];
        for (i = 0; i < 5; i++){
            scanf("%d", &carta[i]);
            cartaord[i] = carta[i];    
        }
    
        for (i = 0; i < 5; i++){
            for (j = i+1; j < 5; j++){
                if (cartaord[i] > cartaord[j]){
                   aux = cartaord[j];
                   cartaord[j] = cartaord[i]; 
                   cartaord[i] = aux;     
                }    
            }     
        }        
        score[k] = 0;
        teste = 1;
        for (j = 1; j < 5; j++){
            if (cartaord[j] == cartaord[j-1] + 1){
               teste++;             
            }    
        }      
        if (teste == 5){
           score[k] = cartaord[0] + 200;           
        }            
        else{
             for (m = 0; m < 5; m++){
                 teste = 0;
                 teste6 = 0;
                 for (j = 0; j < 5; j++){
                     if (carta[m] == carta[j]){
                        num = carta[j];
                        teste++;             
                     }    
                 }
                 if (teste == 4){
                    score[k] = num + 180;
                    m = 5;           
                 }    
             }      
        }
        if (cartaord[0] == cartaord[1] && cartaord[1] == cartaord[2] && cartaord[3] == cartaord[4] && cartaord[4] != cartaord[0]){
           score[k] = cartaord[0] + 160;
        }
        else if (cartaord[4] == cartaord[3] && cartaord[3] == cartaord[2] && cartaord[2] != cartaord[1] && cartaord[1] == cartaord[0]){
           score[k] = cartaord[4] + 160;
        }
        else if (cartaord[0] == cartaord[1] && cartaord[1] == cartaord[2] && cartaord[2] != cartaord[3] && cartaord[3] != cartaord[4] && cartaord[4] != cartaord[0]){
           score[k] = cartaord[0] + 140;
        }
        else if (cartaord[0] != cartaord[1] && cartaord[1] != cartaord[2] && cartaord[2] == cartaord[3] && cartaord[3] == cartaord[4] && cartaord[4] != cartaord[0]){
           score[k] = cartaord[2] + 140;
        }
        else if (cartaord[0] != cartaord[1] && cartaord[1] == cartaord[2] && cartaord[2] == cartaord[3] && cartaord[3] != cartaord[4] && cartaord[4] != cartaord[0]){
           score[k] = cartaord[3] + 140;
        }
        else if ((cartaord[0] == cartaord[1] && cartaord[1] != cartaord[2] && cartaord[2] == cartaord[3] && cartaord[4] != cartaord[1] && cartaord[4] != cartaord[2]) || (cartaord[0] == cartaord[1] && cartaord[1] != cartaord[2] && cartaord[2] != cartaord[3] && cartaord[3] == cartaord[4] && cartaord[4] != cartaord[1]) || (cartaord[0] != cartaord[1] && cartaord[1] == cartaord[2] && cartaord[2] != cartaord[3] && cartaord[3] == cartaord[4] && cartaord[4] != cartaord[0])){
           teste = 1;
           for (m = 0; m < 5; m++){
               for (j = 0; j < 5; j++){
                   if (cartaord[m] == cartaord[j] && m != j && teste == 1){
                      x = cartaord[j];
                      teste--;                                                      
                   }
                   else if (cartaord[m] == cartaord[j] && m != j && teste == 0){
                      y = cartaord[j];     
                   }    
               }
                   
           } 
           if (x > y){
              score[k] = (3 * x) + (2 * y) + 20;          
           }
           else {
              score[k] = (3 * y) + (2 * x) + 20;       
           }    
        }
        else if (cartaord[0] == cartaord[1] && cartaord[1] != cartaord[2] && cartaord[1] != cartaord[3] && cartaord[1] != cartaord[4] && cartaord[2] != cartaord[3] && cartaord[3] != cartaord[4] && cartaord[2] != cartaord[4]){
           score[k] = cartaord[0];        
        }
        else if (cartaord[3] != cartaord[4] && cartaord[3] != cartaord[0] && cartaord[0] != cartaord[4] && cartaord[1] != cartaord[0] && cartaord[1] != cartaord[3] && cartaord[1] != cartaord[4] && cartaord[1] == cartaord[2]){
           score[k] = cartaord[1];        
        }
        else if (cartaord[0] != cartaord[1] && cartaord[0] != cartaord[4] && cartaord[1] != cartaord[4] && cartaord[2] != cartaord[0] && cartaord[2] != cartaord[1] && cartaord[2] != cartaord[4] && cartaord[2] == cartaord[3]){
           score[k] = cartaord[2];       
        }
        else if (cartaord[0] != cartaord[1] && cartaord[0] != cartaord[2] && cartaord[1] != cartaord[2] && cartaord[4] != cartaord[0] && cartaord[4] != cartaord[1] && cartaord[4] != cartaord[2] && cartaord[4] == cartaord[3]){
           score[k] = cartaord[3];     
        }              
    }    
    
    for (k = 0; k < n; k++){
        printf("Teste %d\n", k+1);
        printf("%d\n\n", score[k]);    
    }
     
    return 0;   
}




