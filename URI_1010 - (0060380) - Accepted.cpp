#include <stdio.h>

int main(){
    
    int cod1, qtd1, cod2, qtd2;
    float p1, p2, custo;
    
    scanf("%d %d %f", &cod1, &qtd1, &p1);
    scanf("%d %d %f", &cod2, &qtd2, &p2);
    custo = ((float)qtd1 * p1) + ((float)qtd2 * p2);
    printf("VALOR A PAGAR: R$ %.2f\n", custo);
    
    return 0;
}