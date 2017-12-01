#include <stdio.h>

int main(){
    
    char op;
    int i, j;
    float result = 0, matriz[12][12];
    scanf("%c", &op);
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
            if (i > j) result+=matriz[i][j];            
        }
    }
    if (op == 'M') printf("%.1f\n", result / 66);
    else if (op == 'S') printf("%.1f\n", result);
    
    
    return 0;
}