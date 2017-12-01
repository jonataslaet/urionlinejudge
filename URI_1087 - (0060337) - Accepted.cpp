#include <stdio.h>
#include <stdlib.h>

int main(){   
    
    int i, j, x1, x2, y1, y2;
    
    j = 0;
    do{
      
      scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
      if (x1 >= 1 && x1 <= 8 && x2 >= 1 && x2 <= 8 && y1 >= 1 && y1 <= 8 && y2 >= 1 && y2 <= 8){
         if (x1 == x2 && y1 == y2){
            printf("0\n");       
         }
         else if ((abs(x2 - x1) == abs(y1 - y2)) || (x2 == x1 && y2 != y1) || (y2 == y1 && x1 != x2)){
              printf("1\n");
         }
         else {
              printf("2\n");     
         }
                     
      }
           
    }while(x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0);
        
    return 0;    
}