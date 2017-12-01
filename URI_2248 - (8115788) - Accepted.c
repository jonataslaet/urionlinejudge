#include <stdio.h>

int main(){
    
    int c[1000], m[1000], codmelhor[1000], i, z, n, p, melhormd, bettercod;
    
    for (z = 1;;z++){
        scanf("%i", &n);
        if (n != 0){
            for (i = 0; i < n; i++){
                scanf("%i %i", &c[i], &m[i]); 
                if (i == 0){
                   melhormd = m[i];
                   bettercod = c[i];     
                }
                else {
                   if (m[i] > melhormd){
                      melhormd = m[i]; 
                      bettercod = c[i];          
                   }                  
                }
            }
            p = 0;
            for (i = 0; i < n; i++){
                if (melhormd == m[i]){
                   codmelhor[p] = c[i];
                   p++;          
                }    
            }
            printf("Turma %i\n", z);
            for (i = 0; i < p; i++){
                printf("%i ", codmelhor[i]);
            }
            printf("\n\n");
        }
        else{
             break;     
        }
    }
    
    return 0;   
}