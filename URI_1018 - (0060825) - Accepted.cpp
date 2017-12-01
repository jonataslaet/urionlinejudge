#include <stdio.h>
#include <math.h>

int main(void){
    
    int v, qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, qtd1;

    scanf("%d", &v);
    
    qtd100 = v / 100;
    qtd50 = (v % 100) / 50;
    qtd20 = ((v % 100) % 50) / 20;
    qtd10 = (((v % 100) % 50) % 20) / 10;
    qtd5 = ((((v % 100) % 50) % 20) % 10) / 5;
    qtd2 = (((((v % 100) % 50) % 20) % 10) % 5) / 2;
    qtd1 = (((((v % 100) % 50) % 20) % 10) % 5) % 2;

    printf("%d\n", v);
    printf("%d nota(s) de R$ 100,00\n", qtd100);
    printf("%d nota(s) de R$ 50,00\n", qtd50);
    printf("%d nota(s) de R$ 20,00\n", qtd20);
    printf("%d nota(s) de R$ 10,00\n", qtd10);
    printf("%d nota(s) de R$ 5,00\n", qtd5);
    printf("%d nota(s) de R$ 2,00\n", qtd2);
    printf("%d nota(s) de R$ 1,00\n", qtd1);
    
    
    return 0;   
}