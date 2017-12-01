#include <stdio.h>

int main(){ 
    
    int h1, m1, h2, m2, h, m, s, segs;
    
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
       if (h1 < h2){
          segs = (((h2 * 60) + m2) - ((h1 * 60) + m1)) * 60;
       } 
       else if (h1 > h2){
               segs = ((((h2+24) * 60) + m2) - ((h1 * 60) + m1)) * 60; 
       }   
       else if (h1 == h2){
               if (m2 > m1){
                  segs = (m2 - m1) * 60;       
               }
               else if (m2 < m1){
                       segs = ((24 * 60) - (m1 - m2)) * 60;
               }
               else {
                    segs = 86400;     
               }  
       }
       h = segs / 3600;
       m = (segs % 3600) / 60;
       s = (segs % 3600) % 60;
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
       
       return 0;   
}