#include <stdio.h>
 
int main(){
     
    char nome[21];
    double n1, n2, custo, com, salfin;
     
    scanf("%s", &nome);
    scanf("%lf %lf", &n1, &n2);
     
    com = 0.15 * n2;
    salfin = n1 + com;
     
    printf("TOTAL = R$ %.2lf\n", salfin);
 
    return 0;    
}