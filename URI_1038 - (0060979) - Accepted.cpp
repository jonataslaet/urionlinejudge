#include <stdio.h>

int main(){
    
    int x, y;
    float custo;
    
    scanf("%d %d", &x, &y);
    if (x == 1){
        custo = 4.00 * (float)y;
    }
    else if (x == 2){
        custo = 4.50 * (float)y;
    }
    else if (x == 3){
        custo = 5.00 * (float)y;
    }
    else if (x == 4){
        custo = 2.00 * (float)y;
    }
    else if (x == 5){
        custo = 1.50 * (float)y;
    }
    printf("Total: R$ %.2f\n", custo);

    return 0;
}