#include <stdio.h>

int main(){
    
    int i, j, h1, h2, m1, m2, min[1000], minutos;
    
    i = 0;
    do{
       
       scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
       if (h1 < h2){
          minutos = ((h2 * 60) + m2) - ((h1 * 60) + m1);
          min[i] = minutos;         
       } 
       else if (h1 > h2){
               minutos = (((h2+24) * 60) + m2) - ((h1 * 60) + m1);
               min[i] = minutos;  
       }   
       else if (h1 == h2){
               if (m2 > m1){
                  minutos = (m2 - m1);
                  min[i] = minutos;       
               }
               else if (m2 < m1){
                       minutos = (24 * 60) - (m1 - m2);
                       min[i] = minutos;
               }
               else {
                    minutos = 24 * 60;
                    min[i] = minutos;     
               }  
       }
       i++;
       
    }while(h1!=0 || m1!=0 || h2!=0 || m2!=0);
    for (j = 0; j < i - 1; j++){
        printf("%d\n", min[j]);            
    }
    
    return 0;
    
}