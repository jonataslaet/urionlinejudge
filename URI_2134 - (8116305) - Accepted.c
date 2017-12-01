#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
    int num_alun, num_solves, solv_menor, i, t;
    char nome_alun[100], reprovado[100], rep[100];
    
    t = 1;
    while(scanf("%i", &num_alun)!=EOF){
        for (i = 0; i < num_alun; i++){
            scanf("%s %i", &nome_alun, &num_solves);
            if (i == 0){
               strcpy(reprovado, nome_alun);
               solv_menor = num_solves;   
            }
            else if (num_solves < solv_menor){
               solv_menor = num_solves;
               strcpy(reprovado, nome_alun);        
            }
            else if (num_solves == solv_menor){
                 if (strcmp(reprovado,nome_alun) < 0){
                    solv_menor = num_solves;
                    strcpy(reprovado, nome_alun); 
                 }       
            }
    	}
    	printf("Instancia %i\n", t);
    	printf("%s\n\n", reprovado);
    	t++;
    }
    
    return 0;
}

