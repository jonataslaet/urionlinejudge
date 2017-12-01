#include <stdio.h>
#include <math.h>

int main(void){
    
    double v, x;
    int qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, qtd1r, qtd1c, qtd5c, qtd10c, qtd25c, qtd50c;

    scanf("%lf", &v);
    
    x = modf (v, &v) * 100;
    
    qtd100 = (int)v / 100;
    qtd50 = ((int)v % 100) / 50;
    qtd20 = (((int)v % 100) % 50) / 20;
    qtd10 = ((((int)v % 100) % 50) % 20) / 10;
    qtd5 = (((((int)v % 100) % 50) % 20) % 10) / 5;
    qtd2 = ((((((int)v % 100) % 50) % 20) % 10) % 5) / 2;
    qtd1r = ((((((int)v % 100) % 50) % 20) % 10) % 5) % 2;
    qtd50c = (int)x / 50;
    qtd25c = ((int)x % 50) / 25;
    qtd10c = (((int)x % 50) % 25) / 10;
    qtd5c = ((((int)x % 50) % 25) % 10) / 5;
    qtd1c = ((((int)x % 50) % 25) % 10) % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qtd100);
 
    printf("%d nota(s) de R$ 50.00\n", qtd50);

    printf("%d nota(s) de R$ 20.00\n", qtd20);

    printf("%d nota(s) de R$ 10.00\n", qtd10);
    
    printf("%d nota(s) de R$ 5.00\n", qtd5);
   
    printf("%d nota(s) de R$ 2.00\n", qtd2);     
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qtd1r);

    printf("%d moeda(s) de R$ 0.50\n", qtd50c);

    printf("%d moeda(s) de R$ 0.25\n", qtd25c);

    printf("%d moeda(s) de R$ 0.10\n", qtd10c);

    printf("%d moeda(s) de R$ 0.05\n", qtd5c);

    printf("%d moeda(s) de R$ 0.01\n", qtd1c);     
    
    return 0;   
}