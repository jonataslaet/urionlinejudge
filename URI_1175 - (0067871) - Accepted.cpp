#include <stdio.h>

int main(){

    int n[20], n2[20], i, j = 19;

    for (i = 0; i < 20; i++){
        scanf("%d", &n[i]);
        n2[j] = n[i];
        j--;
    }
    for (j = 0; j < 20; j++){
        printf("N[%d] = %d\n", j, n2[j]);
    }

    return 0;
}