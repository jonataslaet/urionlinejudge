#include <stdio.h>

int main(){
    
    int k, z = 0;
    float j, i;
    
    j = 1.0; i = 0.0;
    for (k = 1;;k++){
        z++;
        if (k > 33){
           break; 
        }
        else{
           if (k == 1 || k == 2 || k == 3 || k == 16 || k == 17 || k == 18 || k == 31 || k == 32 || k == 33){
              printf("I=%.f J=%.f\n", i, j); 
           } 
           else{
              printf("I=%.1f J=%.1f\n", i, j); 
           }
           j++;
           if (k % 3 == 0){
              j = 1; 
              i = i + 0.2;
              j = j + i;
           } 
        }        
    }
    
    return 0;    
}