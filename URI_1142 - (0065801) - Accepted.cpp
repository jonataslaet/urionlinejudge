#include <stdio.h>

int main(){
    
    int num, z, q = 0;
    scanf("%d", &num);
    
    for (z = 1;; z++){
        if (z % 4 == 0){
           printf("PUM\n");
           q++; 
        }
        else{
           printf("%d ", z); 
        } 
        if (q == num) break;             
    }
    
    
    return 0;   
}