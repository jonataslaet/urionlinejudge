#include <stdio.h>
#define pi 3.14159

int main(){
    
    float a, b, c, areatri, areacir, areatra, areaqua, arearet;
    scanf("%f %f %f", &a, &b, &c);
    areatri = (a * c) / 2;
    areacir = (pi * c * c);
    areatra = ((a + b) * c) / 2;
    areaqua = b * b;
    arearet = a * b;
    
    printf("TRIANGULO: %.3f\n", areatri);
    printf("CIRCULO: %.3f\n", areacir); 
    printf("TRAPEZIO: %.3f\n", areatra); 
    printf("QUADRADO: %.3f\n", areaqua); 
    printf("RETANGULO: %.3f\n", arearet);

    return 0;
}