#include <stdio.h>

int main(){
    
    int i = 1, j = 7, k;
    
    for (k = 1;;k++){
        if (i > 9){
           break; 
        }
        else{
           printf("I=%d J=%d\n", i, j);
           j--;
           if (k % 3 == 0){
              i = i + 2;
              j = j + 5;
           } 
        }        
    }
    
    return 0;    
}