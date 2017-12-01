#include <stdio.h>
#include <math.h>
 
int main(){
 
    double v[100], fractpart;
    int i;
 
    for (i = 0; i < 100; i++){
        scanf("%lf", &v[i]);
        fractpart = modf (v[i], &v[i]); fractpart = fractpart * 10;
        //printf("PARTE DECIMAL: %.2lf\n", fractpart);
        if (v[i] <= 10 && fractpart == 0) printf("A[%d] = %.lf\n", i, v[i]);
        else if (v[i] <= 10) printf("A[%d] = %.1lf\n", i, (v[i]+(fractpart/10)));
    }
 
    return 0;
}