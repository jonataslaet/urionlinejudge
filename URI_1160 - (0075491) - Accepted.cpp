#include <stdio.h>
#include <stdlib.h>

int main(){
    
    unsigned int i, t, p1, p2, qtdyears;
    double g1, g2;
    
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d %d %lf %lf", &p1, &p2, &g1, &g2);
        qtdyears = 0;
        do{
            p1 = p1 * (1 + (g1/100));
            p2 = p2 * (1 + (g2/100));
            qtdyears++;
            if (qtdyears > 100) break;  
        }while(p1 <= p2);
        if (qtdyears > 100) printf("Mais de 1 seculo.\n");
        else{
           printf("%i anos.\n", qtdyears); 
        }
    }
    
    
    return 0;
}