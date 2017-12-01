#include <stdio.h>

int main(){
    
    int segs = 0, a, sf, si, dia1, dia2, qtd, h1, m1, s1, h2, m2, s2, w, x, y, z;
    char nd1[4], nd2[4];
    
    scanf("%s %d", &nd1, &dia1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", &nd2, &dia2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    qtd = dia2 - dia1;    
    sf = ((h2 * 3600) + (m2 * 60) + s2);
    si = ((h1 * 3600) + (m1 * 60) + s1);
   if (qtd > 1){
      a = (qtd - 1) * 86400; 
   }
   else {
      a = 0;
   }
   if (dia1 == dia2){
       segs = sf - si;
   }
   else{
       if (h1 < h2){
          segs = a + (sf - si);
       } 
       else if (h1 > h2){
               segs = a + (((h2+24) * 3600) + (m2 * 60) + s2) - ((h1 * 3600) + (m1 * 60) + s1); 
       }  
       else if (h1 == h2){
               if (m2 > m1){
                  segs = a + (m2 * 60 + s2) - (m1 * 60 + s1);       
               }
               else if (m2 < m1){
                       segs = a + (24 * 3600) - (si - sf);
               }
               else if (m2 == m1){
                       if (s2 > s1){
                          segs = a + (s2 - s1);  
                       }
                       else if (s2 < s1){
                          segs = a + 86400 - (s1 - s2); 
                       }
                       else{
                          segs = a + 86400;  
                       }
               }  
        }
   }
    
    w = segs / 86400;
    x = (segs % 86400) / 3600;
    y = ((segs % 86400) % 3600) / 60;
    z = ((segs % 86400) % 3600) % 60;
      
    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);

    return 0;    
}