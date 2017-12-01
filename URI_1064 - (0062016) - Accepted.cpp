#include <stdio.h>

int main(){
    
    int i, qtdpos = 0;
    float num, somapos, med;
    
    somapos = 0;
    for (i = 0; i < 6; i++){
        scanf("%f", &num);
        if (num > 0){
            qtdpos++;
            somapos = somapos + num;
        }
    }
    med = somapos / (float)qtdpos;
    printf("%d valores positivos\n", qtdpos);
    printf("%.1f\n", med);
    
    return 0;    
}