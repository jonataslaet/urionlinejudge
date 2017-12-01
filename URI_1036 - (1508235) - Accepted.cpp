#include <stdio.h>
#include <math.h>
  
int main(){

    double x1, x2, delta, y, a, b, c;
      
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b * b) - 4 * a * c;
    y = sqrt(delta);
    if (a == 0 || delta < 0){
        printf("Impossivel calcular\n");
    }
    else{
        x1 = (-b + y) / (2 * a);
        x2 = (-b - y) / (2 * a);
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
  
    return 0;  
}