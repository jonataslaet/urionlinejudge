#include <stdio.h>

int main(){
    
    float sal, k, perc, novo_sal;
    
    scanf("%f", &sal);
    if (sal >= 0.00 && sal <= 400.00){
        novo_sal = 1.15 * sal;
        k = novo_sal - sal;
        perc = 15;
    }
    else if (sal >= 400.01 && sal <= 800.00){
        novo_sal = 1.12 * sal;
        k = novo_sal - sal;
        perc = 12;
    }
    else if (sal >= 800.01 && sal <= 1200.00){
        novo_sal = 1.10 * sal;
        k = novo_sal - sal;
        perc = 10;
    }
    else if (sal >= 1200.01 && sal <= 2000.00){
        novo_sal = 1.07 * sal;
        k = novo_sal - sal;
        perc = 7;
    }
    else if (sal > 2000.00){
        novo_sal = 1.04 * sal;
        k = novo_sal - sal;
        perc = 4;
    }
    printf("Novo salario: %.2f\n", novo_sal);
    printf("Reajuste ganho: %.2f\n", k);
    printf("Em percentual: %.f %%\n", perc);
    
    return 0;   
}