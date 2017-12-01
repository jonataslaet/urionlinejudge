#include <stdio.h>

int main(){
    
    int i, n;
    
    scanf("%d", &n);
    float med[n], n1, n2, n3;
    for (i = 0; i < n; i++){
        scanf("%f %f %f", &n1, &n2, &n3);
        med[i] = ((2 * n1) + (3 * n2) + (5 * n3)) / 10;
    }
    for (i = 0; i < n; i++){
        printf("%.1f\n", med[i]);
    }
    
    return 0;    
}