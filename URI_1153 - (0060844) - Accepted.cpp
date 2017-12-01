#include <stdio.h>

int main(){
    
    int num, fat, i;
    
    scanf("%i",&num);
    fat = 1;
    for (i = 2; i <= num; i++){
        fat = fat * i;    
    }
    printf("%i\n",fat);
    
    return 0;   
}
