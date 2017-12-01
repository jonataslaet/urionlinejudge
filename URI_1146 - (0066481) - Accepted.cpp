#include <stdio.h>

int main(){

    int x, y, i;
    do{
        scanf("%d", &x);
        for (i = 1; i <= x; i++){
            if (i == x)printf("%d\n",i);
            else printf("%d ", i);
        }
    }while(x != 0);

    return 0;
}