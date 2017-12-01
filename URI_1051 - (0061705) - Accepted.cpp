#include <stdio.h>

int main(){
    
    float val, taxa;
    
    scanf("%f", &val);
    if (val >= 0.00 && val <= 2000.00){
        printf("Isento\n");
    }
    else if (val >= 2000.01 && val <= 3000.00){
        taxa = 0.08 * (val - 2000.00); 
        printf("R$ %.2f\n", taxa);
    }
    else if (val >= 3000.01 && val <= 4500.00){
        taxa = 80 + 0.18 * (val - 3000.00);
        printf("R$ %.2f\n", taxa);
    }
    else if (val >= 4500.01){
        taxa = 80 + 270 + 0.28 * (val - 4500.00);
        printf("R$ %.2f\n", taxa);
    }
    
    return 0;   
}