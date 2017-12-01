#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x, num[10000], i; 
    
    scanf("%d", &x);
    for (i = 0; i < x; i++){
        scanf("%d", &num[i]);
    }
    for (i = 0; i < x; i++){
        if (abs(num[i]) % 2 == 0 && num[i] > 0 && num[i] != 0){
           printf("EVEN POSITIVE\n"); 
        }
        else if (abs(num[i]) % 2 != 0 && num[i] < 0 && num[i] != 0){
           printf("ODD NEGATIVE\n"); 
        }
        else if (abs(num[i]) % 2 == 0 && num[i] < 0 && num[i] != 0){
           printf("EVEN NEGATIVE\n"); 
        }
        else if (abs(num[i]) % 2 != 0 && num[i] > 0 && num[i] != 0){
           printf("ODD POSITIVE\n"); 
        }
        else {
           printf("NULL\n"); 
        }
    }
    
    return 0;    
}