#include <stdio.h>

int main(){

    int n, i, j, x, y, t, somaimp;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        somaimp = 0; t = 0;
        for(j = x;;j++){
            if (t == y)break;
            if (j % 2 != 0){
                somaimp = somaimp + j;
                t++;
            }
        }
        printf("%d\n", somaimp);
    }

    return 0;
}
