#include <stdio.h>

int main(){
    
    char op;
    int i, j;
    double result = 0, matriz[12][12];
    scanf("%c", &op);
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
            if ((j > i) && ((j+i) > 11)) result+=matriz[i][j];            
        }
    }
    if (op == 'M') printf("%.1lf\n", result / 30);
    else if (op == 'S') printf("%.1lf\n", result);
    
    
    return 0;
}