#include <stdio.h>

int main(){

    int i, j, x, t, somapar;

    for (i = 0;; i++){
        scanf("%d", &x);
        if (x == 0) break;
        somapar = 0; t = 0;
        for(j = x;;j++){
            if (t == 5)break;
            if (j % 2 == 0){
                somapar = somapar + j;
                t++;
            }
        }
        printf("%d\n", somapar);
    }

    return 0;
}