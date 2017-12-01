#include <stdio.h>

int main(){

    int x, y, i;
    scanf("%d %d", &x, &y);
    for (i = 1; i <= y; i++){
        if (i % x == 0 || i == y){
           printf("%d\n", i);
        }
        else{
           printf("%d ", i);
        }
    }

    return 0;
}