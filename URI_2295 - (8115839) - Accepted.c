#include <stdio.h>

int main(){
    
    float a, g, ra, rg, r1, r2;
    
    scanf("%f %f %f %f", &a, &g, &ra, &rg);
    
    r1 = ra/a;
    r2 = rg/g;
   
    if (r1 > r2){
       printf("A");
    }
    else if (r2 > r1){
         printf("G");     
    }
    else {
         printf("G");     
    }
    printf("\n");
    return 0;   
}